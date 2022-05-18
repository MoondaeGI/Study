let num = 10;
let st = 'string';
let b = true;

// 변수, 함수의 타입을 확인 할 수 있는 typeof
console.log("typeof 종류");
console.log(typeof num);  // Number
console.log(typeof st);  // String
console.log(typeof b);  // Boolean
console.log(typeof '4' - 5); // NaN

// 형 변환
console.log("형 변환 예시");

console.log(10 + 5);
console.log(Number('10') + Number("5"));

// Boolean 형변환은 대체로 true, 일부값('', 0, NaN) 만 false로 출력됨
// false값을 만들어내는 값들을 falsy라고 부름
console.log("Boolean 형 변환 예시");

console.log(Boolean(10)); // true
console.log(Boolean('')); // false
console.log(Boolean(0));  // false

console.log(Number(true)); // 1
console.log(Number(false)); // 0

// 자동 형변환

// 산술 연산자
// +를 제외한 모든 연산자는 Number값으로 계산하지만, +는 String을 우선해서 작동됨
// +를 제외한 모든 연산자는 string도 Number로 변환해서 계산됨
console.log("자동 형변환 예시");
console.log(4 + '2'); // 42
console.log('4' - true); // 3

// 비교 연산자
// 산술 연산자와 마찬가지로 Number값으로 변환해서 판단
console.log(2 < '3'); // true
console.log(2 > true); // true
console.log('two' >= 1); // false, 'two'는 NaN으로 판별, 값을 찾지 못하면 false로 return함

// 같음 비교 연산자 (===, !==, ==, !=)
// 일치 비교(===, !==)는 자동 형변환을 일으키지 않음
// 동등 비교(==, !=)는 자동 형변환을 일으킴
// 때문에 안전한 코드를 작성하기 위해서는 일치 비교를 사용
console.log(1 === '1');  // false
console.log(1 === true); // false
console.log(1 == '1');  // true
console.log(1 == true); // true

// 특수 자료형 null, undefined
// 값이 없다는 것을 표현하는 자료형
// null은 의도적으로 값이 없음을 표기하는 자료형
// undefined는 값이 없다는 것을 확인하는 값
console.log("null, undefined");

let value;
console.log(value);  // undefined

value = null;  // 값이 없음 null을 사용해 변수에 선언
console.log(value);  // null

console.log(null == undefined); // true
console.log(null === undefined); // false


/*
연산자 우선 순위

논리 NOT (!)
typeof
거듭제곱 (**)
사칙연산 (+, -, *, /, %)
등호 (<, >, ==)
논리 AND, OR (||, &&)
할당 (=)
 */