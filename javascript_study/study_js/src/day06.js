// 배열
console.log(`array test`);

let array = [
    '나',
    '너',
    '우리'
];

console.log(`배열 이름[index]`);

for (let i=0; i<array.length; i++) {
    console.log(`array[index]: ${array[i]}`);
}

console.log(`array type: ${typeof(array)}`);  // object
console.log(`array length: ${array.length}`);  // 3
console.log(`undefined index in array: ${array[4]}`); // undefined

array[4] = '그들';
console.log(`input data in array[4]: ${array[4]}`);  // 그들

array[6] = '그것';
console.log(`empty index: ${array[5]}`);  // undefined (empty)

console.log(`del before: ${array}`);  // del before: 나,너,우리,,그들,,그것
delete array[6];
console.log(`del after: ${array}`);  // del after: 나,너,우리,,그들,,
// delete 연산 이후에도 빈값이 계속 남아있음

console.log(`splice before: ${array}`);  // splice before: 나,너,우리,,그들,,
array.splice(3, 1);  // 삭제할 인덱스, 삭제할 개수
console.log(`splice after: ${array}`);  // splice after: 나,너,우리,그들,,

array.splice(1, 1, '애들');
console.log(`splice amend:  ${array}`);  // splice amend:  나,애들,우리,그들,,

console.log(`before array: ${array}`);
// 배열의 첫 요소를 삭제: shift
array.shift();
console.log(`shift: ${array}`);  // shift: 애들,우리,그들,,
// 배열의 마지막 요소를 삭제: pop
array.pop();
console.log(`pop: ${array}`);  // pop: 애들,우리,그들,
// 배열의 첫 요소를 삭제: unshift
array.unshift('나');
console.log(`unshift: ${array}`);  // unshift: 나,애들,우리,그들,
// 배열의 마지막 요소를 추가: push
array.push("모두");
console.log(`push: ${array}`);  // push: 나,애들,우리,그들,,모두

array.push(`나`);
console.log(`array: ${array}`);  // array: 나,애들,우리,그들,,모두,나
console.log(`find indexOf '나': ${array.indexOf(`나`)}`);  // find indexOf '나': 0 (index number)
console.log(`cant find indexOf: ${array.indexOf(`그녀`)}`);  // cant find indexOf: -1

console.log(`find lastIndexOf '나': ${array.lastIndexOf(`나`)}`)  // find lastIndexOf '나': 6 (뒤부터 탐색)

// for - of
for (let element of array) {
    console.log(element);
}