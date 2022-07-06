// console.log vs console.dir
const str = 'MoondaeGI';
const num = 123;
const bool = true;
const arr = [1, 2, 3];
const obj = {
    name: 'MoondaeGI',
    email: 'ansgur1997@naver.com',
};

/*
    1. log는 해당 변수형에 맞는 형식으로 반환, dir은 문자열 표시 형식으로 반환
    2. log는 전달받은 값을 표시, dir은 객체의 메소드를 표시
    3. log는 여러 변수값을 받아도 모두 표시, dir은 맨 앞 값 하나만 표시
    4. DOM 객체 호출시 log는 html 자체를 출력, dir은 대상을 객체 형식으로 출력
*/
console.log('--- str ---');
console.log(str);  // MoondaeGI
console.dir(str);  // MoondaeGI
console.log('--- num ---');
console.log(num);  // 123
console.dir(num);  // 123
console.log('--- bool ---');
console.log(bool);  // true
console.dir(bool);  // true
console.log('--- arr ---');
console.log(arr);  // (3)
console.dir(arr);  // {1, 2, 3}
console.log('--- obj ---');
console.log(obj);  // {name: "MoondaeGI", email: "ansgur1997@naver.com"}
console.dir(obj);  // Object


// 요소 이동
const body = document.querySelector('body');  // 'title' id 변수 지정
console.dir(body);  // body
console.dir(body.children);  // HTMLCollection(3)
console.dir(body.previousElementSibling);  // head
console.dir(body.nextElementSibling);