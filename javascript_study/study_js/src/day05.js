// Date
let myDate = new Date();
console.log(`myDate: ${myDate}`);  // 생성 날짜를 기록

// new Date(millisecond) -> 1970.01.01.00:00:00 UTC + millisecond
let newDate = new Date(1000);
console.log(`newDate: ${newDate}`);  // newDate: Thu Jan 01 1970 09:00:01 GMT+0900 (한국 표준시)

// new Date(YYYY-MM-DDThh:mm:ss)
// new Date(YYYY, MM, DD, hh, mm, ss, ms)
let someDate = new Date('2020-05-20T22:22:22');
let otherDate = new Date(2020, 4, 20, 22, 22, 22);
// month는 0을 1월로 계산함

console.log(`someDate: ${someDate}`);  // someDate: Wed May 20 2020 22:22:22 GMT+0900 (한국 표준시)
console.log(`otherDate: ${otherDate}`);

// getTime: 1970.01.01.00:00:00 UTC로부터 해당 날짜까지의 ms를 계산하는 값 -> timestamp
console.log(`getTime from someDate: ${someDate.getTime()}`);  // getTime from someDate: 1589980942000

//getMonth: 월수를 알려준다. 0이 1월임을 유의
console.log(`getMonth from someDate: ${someDate.getMonth()}`);  // getMonth from someDate: 4 (May)

// getDate, getDay: getDate는 일수를, getDay는 요일을 표시(일:0 ~ 월:6)
console.log(`getDate from someDate: ${someDate.getDate()}`);  // getDate from someDate: 20
console.log(`getDay from someDate: ${someDate.getDay()}`);  // getDay from someDate: 3

// toLocaleDateString, toLocaleTimeString, toLocaleString: 해당 날짜의 년/월/일, 시/분/초, 둘 모두에 대한 정보
console.log(`toLocaleString from someDate: ${someDate.toLocaleString()}`);
// toLocaleString from someDate: 2020. 5. 20. 오후 10:22:22

// Date 형변환
console.log(`Date's type: ${typeof(someDate)}`);  // Date's type: object
console.log(`String: ${String(someDate)}`);  // String: Wed May 20 2020 22:22:22 GMT+0900 (한국 표준시)
console.log(`Number: ${Number(someDate)}`);  // Number: 1589980942000
console.log(`Boolean: ${Boolean(someDate)}`);  // Boolean: true -> Number값이 falsy가 아님

// Number로 형변환 된 Date는 getTime과 같다
console.log(`Number(someDate) === someDate.getTime(): ${Number(someDate) === someDate.getTime()}`);
// Number(someDate) === someDate.getTime(): true