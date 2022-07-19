// 모듈화
// 패키지와 같은 기능. ES2015 이후부터 모듈화 문법이 사용됨
/*
    모듈 파일의 조건
    모듈은 독립적인 스코프를 가져야 함(module scope)
    html 내부에서 script 태그를 2개 넣어서 사용한다면, 스코프를 공유함
    html 파일 내부에서 script 태그에 type="module"을 입력해 사용
*/
import {title, print as printNumber} from './module_ex1';  // 모듈 선언
import * as printStringModule from './module_ex2';  // 모듈 내에서 선언 후 외부 사용시 이러한 방법으로도 사용 가능
import printIsBoolean from './module_ex3';  // default export 방식으로 default 값을 선언하는 방법

console.log(title);  // module_ex1
printNumber(5);  // number: 5

// 이름 바꾸기
try {  // title만 사용시
    const title = 'my name';  // 이미 import에서 선언한 내용이라 에러 발생
} catch (error) {
    console.error(error);
}

// * 선언으로 모듈 사용시
printStringModule.printString('MoondaeGI');  // string: MoondaeGI
// default export로 모듈 사용시
printIsBoolean(123124);  // 123124 is true

