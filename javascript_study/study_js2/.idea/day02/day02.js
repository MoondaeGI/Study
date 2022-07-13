// 함수를 만드는 방법

function printHello() {  // 함수 선언 (기존의 함수 선언)
    console.log(`hello`);
}
printHello();

const printHi = function () {  // 함수 표현식 (함수를 변수값에 할당)
    console.log(`hi`);
}
printHi();
/*
    함수 선언 vs 함수 표현식

    >> 함수 선언은 선언 이전에 접근이 가능함(hoisting) 문제 발생

    >> 함수 선언은 함수 내부가 아닌 코드 블럭 내에서 선언한 함수 선언을 외부에서도 사용 가능함
       함수 표현식은 해당 선언된 변수의 스코프 내에서만 사용 가능함
    >> 둘 다 사용해도 괜찮으나 코딩시 일관적인 사용이 필요 (보편적으론 함수 선언이 많이 사용됨)
*/

// 즉시 실행 함수(IIFE) >> 선언된 순간 바로 함수가 실행됨
(function printYaHoo() {
    console.log(`yahoo!`);
})();
// printYaHoo(); 이런 식으로는 사용 할 수 없음

// 함수를 값으로 취급함 >> Object타입인 function으로 호출됨
// 배열과 비슷한 프로퍼티를 가진 객체로 취급

const functionStruct = {  // 객체 내부에서 선언 가능
    name: 'MoondaeGI',
    printHiToMe: function(name) {
        console.log(`It's me! Hi ${name} myself`);
    }
}
// 객체 내부 함수 호출
functionStruct.printHiToMe('MoondaeGI');  // It's me! Hi MoondaeGI myself

const functionArray = [  // 배열 내부에서 선언 가능
    'name',
    function(name) {
        console.log(`my name is ${name}`);
    },
];
// 배열 내부 함수 호출
functionArray[1]('MoondaeGI');  // my name is MoondaeGI

// 함수의 리턴값이 함수가 될 수 있음
function getPrintHi() {
    return function () {  // 반환값으로 만들어지는 함수
        console.log('hi!');
    };
};

const sayHi = getPrintHi();
sayHi();  // hi!

getPrintHi();  // 함수 내부의 함수를 호출할 뿐이라 아무 출력도 생기지 않는다.
getPrintHi()();  // 선언하지 않고 바로 호출 가능

// =====================================================================
// parameter >> 함수에 필요한 변수값을 표시

function greeting(name) {
    console.log(`Hi! my name is ${name}`);
}
// 매개변수 (argument) : 파라미터값에 넣는 변수
greeting('MoondaeGI');  // Hi! my name is MoondaeGI
// 매개변수를 넣지 않고 함수 실행시, 매개변수 값에 undefined로 출력된다.
greeting(); // Hi! my name is undefined

// ES6+: 함수 선언시, 파라미터값에 기본값 생성시 매개변수 선언이 없으면 기본값이 호출됨
const newGreeting = function (name = "DdadaeGI") {
    console.log(`Hi! my name is ${name}`);
}
newGreeting(); // Hi! my name is DdadaeGI
// 기본값 응용
function defualtTest(x, y = x +3 ) {
    console.log(`x: ${x}`);
    console.log(`y: ${y}`);
}
defualtTest(4);  // x: 4,  y: 7

