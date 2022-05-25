// 문자열
let myString = "My nickname is MoondaeGI";

console.log(`string example: ${myString}`);  // string example: My nickname is MoondaeGI

// 문자열 길이 -> 띄어 쓰기 포함함
console.log(`myString.length: ${myString.length}`);  // myString.length: 24

// 문자열 탐색 indexOf, lastIndexOf -> 활용방법은 이전과 동일
console.log(`myString.indexOf('M'): ${myString.indexOf(`M`)}`);  // myString.indexOf('M'): 0
console.log(`myString.lastIndexOf('M'): ${myString.lastIndexOf(`M`)}`);  // myString.lastIndexOf('M'): 15

// 요소 접근 [], charAt
console.log(`myString.charAt(5): ${myString.charAt(5)}`);  // myString.charAt(5): c
console.log(`myString[5]: ${myString[5]}`);  // myString[5]: c

// 대/소문자 변환 toUpperCase, toLowerCase
console.log(`myString.toUpperCase(): ${myString.toUpperCase()}`);  // myString.toUpperCase(): MY NICKNAME IS MOONDAEGI
console.log(`myString.toLowerCase(): ${myString.toLowerCase()}`);  // myString.toLowerCase(): my nickname is moondaegi

let newString = "   his name is Moon  ";
// 공백 제거 trim
console.log(`newString: ${newString}`);  //  newString:    his name is Moon
console.log(`newString.trim(): ${newString.trim()} `);  // newString.trim(): his name is Moon

// 부분 문자열 접근 slice(start, end)
console.log(`myString.slice(0, 2): ${myString.slice(0, 2)}`);  // myString.slice(0, 2): My
console.log(`myString.slice(3): ${myString.slice(3)}`);  // myString.slice(3): nickname is MoondaeGI
console.log(`myString.slice(): ${myString.slice()}`);  // myString.slice(): My nickname is MoondaeGI


