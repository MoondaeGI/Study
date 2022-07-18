//forEach와 map
const members = ['first', 'second', 'third'];

for (const member of members) {  // 기존의 for-of 반복문
    console.log(member);
}

members.forEach((memeber, index, arr) => {  // forEach 반복문, 콜백 함수 내부에 index를 활용 가능함
    console.log(member, index);  // 매 반복마다 콜백 함수를 실행함
    console.log(arr);  // 변수(배열) 자체를 리턴해주는 파라미터
});

// map은 forEach와 굉장히 유사한 형태를 사용하지만, 콜백 함수에 return을 사용해 새로운 배열값을 만들 수 있음
const newMember = members.map((member, index) => member + index);

//=================================================
// filter, find
/*
    원하는 값을 찾아주는 메소드
    filter는 찾은 값들을 배열로 리턴해줌
    find는 값 하나만을 리턴 후 종료함
    모두 찾은 값이 없다면 undefined를 출력후 종료
*/

const data = [
    {name: 'dsfwe', type: 1},
    {name: 'dsgerg', type: 2},
    {name: 'oewj', type: 1},
    {name: 'owetre', type: 1}
];

// 무조건 배열로서 찾은 결과값을 반환해 줌
const filter = data.filter((element) => element.type == 1);
console.log(filter);

// 단독 값을 얻고 싶을땐 find를 사용
const find = data.find((element) => element.name == 'dsgerg');
console.log(find);
// find로 중복되는 값을 요청하면, 맨 위의 값만을 리턴해주고 종료함

//=================================================
// some, every
/*
    some: 조건을 만족하는 요소가 1개 이상 있는지 확인하는 메소드
    every: 모든 조건을 만족하는지 확인하는 메소드
    boolean으로 반환한다.
    some은 조건을 만족하는 값을 확인하자마자 바로 ture를 반환 후 루프 종료함
    every는 조건을 만족하지 않는 값을 확인하자마자 바로 false를 반환 후 루프 종료함
    빈 배열값에서 호출시, 콜백 함수를 실행하지 않고 some은 false, every는 true를 반환함
*/
const numbers = [1, 2, 3, 4, 5];

const someReturn = numbers.some((element) => element < 5);  // 조건을 만족하는 값이 1개라도 있어서 true
const everyReturn = numbers.every((element) => element < 5);  // 조건을 하나라도 만족하지 않는 값이 있어서 fasle

//==================================================
// reduce

const sumAll = numbers.reduce((acc, element, index, arr) => {
    // acc(누산기): 직전의 루프에서 콜백함수의 리턴값을 가져옴
    console.log(`${index}번 index요소의 콜백함수 동작 중`);
    console.log(`acc: ${acc}, element: ${element}`);

    return acc + element;
}, 0);  // 첫번째 acc값에 넣을 값이 없기 때문에 첫번째 acc값으로 대입되는 값

console.log(sumAll);