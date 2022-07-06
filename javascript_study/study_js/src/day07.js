//숫자 표기법
let number = 100;
//지수 표기법: 값e자릿수
let newNumber = 1e2;

console.log(`number: ${number}, newNumber: ${newNumber}`);  // number: 100, newNumber: 100
let hex = 0xff;  // 255
let octal = 0o377;  // 255
let binary = 0b11111111;  // 255

console.log(`hex: ${hex} octal: ${octal} binary: ${binary}`);  // hex: 255 octal: 255 binary: 255

console.log(`숫자형 메소드`);
let testNumber = 0.3591;

console.log(`toFixed(3): ${testNumber.toFixed(3)}`);  // toFixed(3): 0.359
console.log(`toFixed(7): ${testNumber.toFixed(7)}`);  // toFixed(7): 0.3591000
// toFixed의 결과값은 string -> 때문에 사용시 Number 형변환 필요
console.log(`toFixed typeof: ${typeof(testNumber.toFixed(7))}`);  // toFixed typeof: string

let testNumber2 = 255;
console.log(`toString(2): ${testNumber2.toString(2)}`);  // toString(2): 11111111
console.log(`toString(8): ${testNumber2.toString(8)}`);  // toString(8): 377
console.log(`toString(16): ${testNumber2.toString(16)}`);  // toString(16): ff
// toString 역시 결과값은 string
console.log(`toString typeof: ${typeof(testNumber2.toString(2))}`);  // toString typeof: string

// Math 사용법
console.log(`Math example`);

// abs
console.log(`Math.abs(-10): ${Math.abs(-10)}`); // Math.abs(-10): 10
// max, min
console.log(`Math.max(1, 2, 3, 4, 5, 6): ${Math.max(1, 2, 3, 4, 5, 6)}`);  // Math.max(max_minArray): 6
console.log(`Math.min(1, 2, 3, 4, 5, 6): ${Math.min(1, 2, 3, 4, 5, 6)}`);  // Math.min(max_minArray): 1
// 거듭 제곱 pow
console.log(`Math.pow(2, 3): ${Math.pow(2, 3)}`);  // Math.pow(2, 3): 8
// 제곱근 sqrt
console.log(`Math.sqrt(25): ${Math.sqrt(25)}`);  // Math.sqrt(25): 5
// 반올림 round
console.log(`Math.round(2.5): ${Math.round(2.5)}`);  // Math.round(2.5): 3
// 버림/올림 floor/ceil
console.log(`Math.floor(2.5): ${Math.floor(2.5)}`);  // Math.floor(2.5): 2
console.log(`Math.ceil(2.5): ${Math.ceil(2.5)}`);  // Math.ceil(2.5): 3
// 난수 생성 random
console.log(`Math.random(): ${Math.random()}`);  // Math.random(): 0.6927163705177148(rand number)
