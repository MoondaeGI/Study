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

// =====================================================================
// argument

function printArgument(a, b) {
    console.log(a);
    console.log(b);
    console.log("--------------------");
}
// 기존의 argument를 사용한 함수
// 요구하는 값의 양보다 적으면 undefined를 호출, 많으면 잘려나간다.
printArgument('a', 'b');  // a, b
printArgument('c');  // c, undefined
printArgument('d', 'e', 'f');  // d, e

function newPrintArgument() {
    for (const arg of arguments) {
        console.log(arg);
    }
}
// 함수 내부에서 arguements를 사용해 접근이 가능함
// arguments의 개수를 동적으로 사용 가능
newPrintArgument('a', 'b');  // a, b
newPrintArgument('c');  // c
newPrintArgument('d', 'e', 'f');  // d, e, f

// =====================================================================
// ES6+: Rest Parameter
// arguments를 배열의 형식으로 사용 가능하게 만들어줌. parameter에 ...를 찍어서 사용함
function NewNewPrintArgument(...args) {
    console.log(args.splice(0, 2));  // 배열로서 접근이 가능
}

NewNewPrintArgument('d', 'e', 'f');  // (2) ['d', 'e']

// Rest Parameter 활용 예시
function LastNewPrintArgument(first, second, ...other) {
    console.log(first);
    console.log(second);
    // 배열로 묶어 표현할 필요가 있는 arguments들만 따로 분류해 사용 가능함
    console.log(other[0]);
    console.log(other[1]);
}

LastNewPrintArgument(1, 2, 3, 4, 5);  // 1, 2, 3, 4

// =====================================================================
// ES6+: Arrow Funcion
// 이름이 없는 익명 함수

const getTwice = (number) => {
    return number * 2;
};
const getTwiceShorter = (number) => number * 2;

console.log(getTwice(5));  // 10
console.log(getTwiceShorter(5));  // 10

// Arrow Fucntion을 이용해 arguments를 사용하는건 불가능함
const getArgument = () => {
    console.log(arguments);  // 실행이 되지 않는다
}

// =====================================================================
// this
// 함수 내부에서 자신을 가리킬때 쓰는 메소드
console.log(this)  // Window

// 일반적인 this 사용
function getName() {
    return `${this.name}`;
}
// Arraw function에서 this를 사용한다면, 실행 이전의 this값만을 가져감.
const getArrawName = () => {
    return `${this.name}`;
}

const moondaegi = {
    name: 'MoonDaeGI',
    getName: getName,
    getArrowName: getArrawName,
};

const ddaedaegi = {
    name: 'DdaeDaeGI',
    getName: getName,
    getArrowName: getArrawName,
};

console.log(moondaegi.getName());  // MoonDaeGI
console.log(ddaedaegi.getName());  // DdaeDaeGI

console.log(moondaegi.getArrowName());
console.log(ddaedaegi.getArrowName());


