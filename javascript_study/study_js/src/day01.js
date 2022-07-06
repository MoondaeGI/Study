console.log("Hello");

// 변수 선언
let a = 3000;
let b = 4000;
let c = 5000;

// 함수 선언
function add(a, b) {
    console.log("add program start");
    console.log("a: ", a);
    console.log("b: ", b);
    return a + b;
}
// 함수 사용
add(a, b);

//console.log 구현 방법
console.log(a + "는 a입니다.");  // java print 사용
console.log("%d는 b입니다.", b);  // c format 사용
console.log(`${c}는 c입니다.`); // 백틱 사용
