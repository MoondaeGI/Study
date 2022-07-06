// object
// java의 객체 개념과 일맥상통함
// property name은 숫자를 시작으로 사용한다면 ''를 사용해야함

console.log(`property object`);

let moondaegi = {
    name: 'MOONHYUK_LEE',
    'my_age': 26,
    birthday: '1997.06.08',
    use_language: {
        '1st': 'java_script',
        '2nd': 'python',
        '3rd': 'java'
    }
};
console.log(typeof(moondaegi));  // object

//property 호출
console.log(moondaegi.name);  // MOONHYUK_LEE
console.log(moondaegi["my_age"]);  // ''로 만든 property에 접근 할 수 있음
console.log(moondaegi.use_language['1st']);  // java_script

// property 재할당
moondaegi.name = 'Cabin_LEE';
console.log(moondaegi.name);

// property 추가 연산
console.log('gender' in moondaegi);  // false
moondaegi.gender = 'male';
console.log(moondaegi.gender);  // male
moondaegi['favorite fruit'] = 'watermelon';  // 마찬가지로 '' property name은 []를 사용 가능

// property 삭제 연산
console.log(moondaegi.birthday);  // 1997.06.08
delete moondaegi.birthday;
console.log(moondaegi.birthday);  // undefined

console.log('name' in moondaegi);  // true
console.log('name' !== undefined)  // true
// 둘 모두 true를 반환하지만, undefined를 변수값으로 넣을 경우도 있기 때문에 in을 사용하는걸 추천


// 메소드
// java의 class와 비슷한 기능을 가짐

let greetings = {
    sayHello: function(name) {
        console.log(`${name} Hello`);
    },
    sayHi: function(name) {
        console.log(`${name} Hi`);
    },
    sayBye: function(name) {
        console.log(`${name} Bye`);
    }
};

greetings.sayHello('MOONHYUK');  // MOONHYUK Hello


// for..in 반복문
console.log(`for - in loop`);

for (let key in moondaegi) {
    console.log(key);  // property name loop
    console.log(moondaegi[key]);  // property value loop
}
// for - in 주의점
let count = {
    '3': 3,
    '1': 1,
    '2': 2,
    5: 5,
    4: 4
};

console.log(`for - in loop sort test`)
for (let key in count) {
    console.log(key);  // 1, 2, 3, 4, 5
}
// key의 출력은 Number가 우선(String도 형변환됨)
// Number 내에서도 오름차순 정렬됨