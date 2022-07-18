// 문장 표현식
// 모든 문장은 표현식과 표현식이 아닌 문자로 나뉠 수 있다.

// 조건 연산자(삼항 연산자) ? :
const CUT_OFF = 80;
function passChacker(score) {
    return (score > CUT_OFF) ? '합격' : '불합격';  // 3항
}

//================================================
// spread
// 이름 그대로 값을 펼치듯이 값을 가져옴
// spice와 같은 메소드 없이도 배열값을 복사할 수 있다
const numbers = [1, 2, 3];
console.log(numbers);  // (3) [1, 2, 3]
console.log(...numbers);  // 1 2 3

const newNumber1 = [1, 2, 3];
const newNumber2 = [4, 5, 6];

console.log(newNumber1.concat(newNumber1));  // (6) [1, 2, 3, 4, 5, 6]
console.log([...newNumber1, ...newNumber2]);  // (6) [1, 2, 3, 4, 5, 6]

// ES6+: 객체 Spread
const example1 = {
    name: 'me',
    email: 'ansgur1997@naver.com',
};

// 객체 내용을 spead 문법을 활용해 배열 spread처럼 사용이 가능함
const newExample1 = {
    ...example1,
    phoneNumber: '010-8501-7181',
};

console.log(example1);  // {name: 'me', email: 'ansgur1997@naver.com'}
console.log(newExample1);  // {name: 'me', email: 'ansgur1997@naver.com', phoneNumber: '010-8501-7181'}

//================================================
// 모던 프로퍼티 작성법
const title = 'js_study2';
const regdt = '2022-07-13';

// 선언할 값과 프로퍼티 이름이 같다면 생략 가능
// 함수형 프로퍼티는 function 생략 후 소괄호를 붙이는 것으로 생성 가능
const studyFile = {
    title,  // title: title
    regdt,
    getTitle() {  // getTitle: function () {...
        return `${this.title}`;
    }
};

console.log(studyFile);  // {title: 'js_study2', regdt: '2022-07-13'}
console.log(studyFile.getTitle());  // js_study2

const birth = '1997-06-08';
// computed property name
// []를 사용해 프로퍼티 이름을 만들면, 외부 변수값 할당이나 변수 합치기 등으로 이름을 생성할 수 있음
const user = {
    ['Moon' + 'DaeGI']: 'my nickname',
    [birth]: 'my birthday',
};

console.log(user);  // {MoonDaeGI: 'my nickname', 1997-06-08: 'my birthday'}

//================================================
// ES2020: Optional Chaining(옵셔널 체이닝)
/*
    중첩 객체를 사용할때 사용하는 문법
    보통 중첩 객체를 사용할때, 예상한 프로퍼티를 가지고 있지 않는 경우가 생김
    보통은 null값인지 확인하는 AND연산을 활용하지만, 가독성이 좋지 않음
    때문에 옵셔널 체이닝으로 변수 값의 null/undefined를 확인함과 동시에 값을 불러오는 옵셔널 체이닝이 생겨남
*/
function getCatName() {
    return `${this.cat.name}`;  // 객체 내부에 cat 객체가 없다면 에러가 발생
}

function updateGetCatName() {  // ES2020 이전의 사용법
    return `${this.cat && this.cat.name}`;  // cat이 있다면 cat.name을, 없다면 cat(null)을 반환
}

function optionalChainingGetCatName() {  // ES2020의 옵셔널 체이닝 사용
    return `${this.cat?.name}`;  // 훨씬 축약되어 사용 가능, 값이 없다면 undefined를 반환함
}

const user1 = {
    name: 'me',
    cat: {
        name: 'my cat',
        breed: 'British Shorthair',
    }
};

const user2 = {  // cat이 없는 객체라서 getCatName()을 사용하면 에러가 발생함
    name: 'you',
}

//================================================
// ES2015: Destructuring (구조 분해)
// 일일히 하나씩 변수를 대입하지 않고 배열처럼 변수 명을 작성후, 값을 저장 할 수 있음

const rank = ['first', 'second', 'third', 'forth'];

// ES2015전의 방법
const first1 = rank[0];
const second1 = rank[1];
const third1 = rank[2];
const forth1 = rank[3];

const [first2, second2, third2, forth2] = rank;  // 구조 분해를 사용한 모습
const [first3, second3, ...third3] = rank;  // rest parameter같이도 사용 가능함
const [first4, second4, third4, forth4, fiveth] = rank;  // 기본 생성자가 없다면 배열을 초과할 경우 undefined가 출력됨

// 구조 분해 응용
let start = 'start';
let last = 'last';

console.log(`변경 전: start = ${start}, last = ${last}`);  // 변경 전: start = start, last = last
[start, last] = [last, start];  // 파이썬과 유사한 문법
console.log(`변경 후: start = ${start}, last = ${last}`);  // 변경 후: start = last, last = start

// 객체 구조분해

const game1 = {
    title1: '소녀전선',
    platform1: 'moblie',
    release1: 2017
};

const game2 =  {
    title2: '원신',
    platform2: 'PC',
    release2: 2021
}

const {title1, platform1, description1} = game1;  // const tiltle = game.title, const platfrom = game.platfrom
const {title2, ...rest2} = game2;  // rest parameter 사용 가능
const {title1: gameName, release1: gameStartYear} = game1;  // property의 이름과 다른 변수 선언 가능

console.log(title1);  // 소녀전선
console.log(platform1);  // moblie
console.log(description1);  // undefined

// 함수 구조분해
function getArray() {
    return [1, 2, 3, 4];
}
const [first, second, third] = getArray();
console.log(first, secone, third);  // 1, 2, 3
// 파라미터를 객체로 사용할 경우 좀 더 유용함
function printArray({title, platform, relase}) {  // 파라미터단에서 구조 분해를 사용할 수 있음
    return `${title}, ${platform}, ${release}`;
}

//================================================
// 에러와 에러객체
/*
    에러가 발생시, 에러 객체를 생성함
    에러 객체는 에러의 이름과 그 에러의 설명을 담은 메세지를 가지고 있음
    error = {name, massage}
    1. Reference error: 참조하지 못하는 변수 사용시 발생하는 오류
    2. Type error: 자료형 오류
    3. Syntax error: 문법 오류
*/

const typeError = new TypeError('타입에러가 발생함');  // 에러 객체 생성

// throw typeError;  // 에러 발생. 이후의 아래 코드들이 적용 안됨
console.log(typeError.name);  // TypeError
console.log(typeError.massage);  // 타입에러가 발생함

// try - catch
try {
    console.log("에러 발생하지 않음");
} catch(error) {  // 에러 발생시, 해당 파라미터로 객체가 생성 후 전달됨
    console.log('에러 발생');

    console.log(error);
    console.error(error);  // 실제 에러 메세지처럼 표시해주는 메소드
}

// try-catch 활용
function printMembers(members) {
    try {  // 배열이 아닌 값이 전달될 시 에러 발생
        for (const member of members) {
            console.log(member);
        }
    } catch (error) {
        console.error(error);
        alert(`${error.name}이 발생함`);
    }
}

const teamA = ['adf', 'wer', 'gfh', 'tyr'];
printMembers(teamA);

const teamB = { name:'ery', };
printMembers(teamB);  // 에러 메세지 발생

console.log("에러 이후에도 코드 실행");  // catch문을 사용해 발생된 에러이기 때문에 코드가 지속됨

// try-catch-finally
// finally: 에러 발생 상관 여부와 관계없이 반드시 실행되는 코드

try {
    printMembers('영훈', '윤수', '동욱');
} catch (err) {
    alert('에러가 발생했습니다!');
    console.error(err);
} finally {  // 에러가 발생해도 실행된다.
    const end = new Date();
    const msg = `코드 실행을 완료한 시각은 ${end.toLocaleString()}입니다.`;
    console.log(msg);
}
