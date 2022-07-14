// 자바 스크립트는 데이터 타입이 유연함
// 변수에 따로 타입을 저장하지 않음
/*
    기본형:
    Numger, String, Boolean, Null, undefined

    ES6+ 이후 추가: 활용 사례가 적다
    > Symbol: 유일한 값을 생성할때
    > BigInt: 큰 정수형 숫자를 다룰때(long)

    참조형:
    Object: 객체
*/

// 데이터 타입을 확인할 때 typeof를 사용
typeof 'string'; // string
typeof Symbol(); // symbol
typeof {}; // object
typeof []; // object
typeof true; // boolean
typeof(false); // boolean
typeof(123); // number
typeof(NaN); // number
typeof(456n); // bigint
typeof(undefined); // undefined

// null은 객체가 아니지만, null-pointer를 상정하고 만들어서 object가 출력됨
typeof null; // object

function sayHi() {
    console.log('Hi!?');
}
// 함수는 객체지만 object가 아닌 function으로 반환됨
typeof sayHi; // function


// 불린이 아닌 값들이 형변환 되어 조건문, 반복문에서 사용이 가능하다
/*
 falsy: false로 평가되는 값들
 > false, null, undefined, NaN, 0, ''

 truthy인데 헷깔리는 것들
 [], {} (빈 배열, 빈 객체)
*/

// =====================================================================
// AND OR의 연산 방식
// js에서 비교 연산자는 true/false로 구별해서 진행하지 않고 어느 값을 선택함
/*
    AND 연산의 진행
    > 왼쪽값이 truthy하다면, 오른쪽값 반환
    > 왼쪽값이 falsy하다면, 왼쪽값 반환

    OR 연산의 진행
    > 왼쪽값이 truthy하다면, 왼쪽값 반환
    > 왼쪽값이 falsy하다면, 오른쪽값 반환

    AND와 OR의 연산 우선순위  >> AND의 연산이 우선순위가 높음
*/
console.log('MoonDaeGI' && 'JavaScript');  // JavaScript
// >> MoondaeGI는 truthy하므로, JavaScript를 반환함

console.log(null && undefined); //  null
console.log(0 || true);  // true
console.log('0' && NaN); // NaN
console.log({} || 123);  // {}

// 비교 연산자 응용
function print(value) {
    const message = value || 'MoondaeGI';  // value가 truthy하다면 value를, falsy하다면 MoondaeGI를 가짐
    console.log(message);
}

print();
print('Truthy');

/*
    null 병합 연산자 ??

    ?? 연산의 진행
    >> 왼쪽값이 null/undefined라면 오른쪽값이 반환
    >> 왼쪽값이 null/undefined가 아니라면 왼쪽값이 반환

    작동은 OR와 비슷하지만, OR는 falsy를 판단하고 ??는 null/undefined를 판단함
*/
const example1 = null ?? 'I';
const example2 = undefined ?? 'love';
const example3 = 'MoondaeGI' ?? 'JavaScript';

console.log(example1, example2, example3); // I love MoondaeGI

// =====================================================================
// 변수와 스코프
/*
    값의 할당이 필요할때는 let, 할당이 필요없을때는 const를 사용함
    ES6+ 이전에는 var를 사용했지만, 선언 이전에 입력한 코드에도 사용이 되거나(Hoisting)

    var는 변수의 중복 선언이 가능함. >> 의도치 않은 코드 꼬임이 발생 가능능
*/
