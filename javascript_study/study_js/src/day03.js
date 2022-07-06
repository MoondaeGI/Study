// 조건문 if
console.log("조건문 예시")

let a = 0;

if (a > 0) {
    console.log(false);
} else if (a === 0) {
    console.log(true);
} else {
    console.log(NaN);
}

// 반복문 switch - case
console.log("switch-case");

let choice = 1;

switch(choice) {
    case 1:
        console.log("1");
        break;
    case 2:
        console.log("2");
        break;
    default:
        break;
}

// 반복문 for
console.log("for loop");

for (let i=0; i<10; i++) {
    console.log(`${i} - loop...`);
}

// 반복문 while
console.log("while loop");

let i = 0;
while (i < 10) {
    if (i === 8) {
        console.log(`${i} is break`);
        break;
    }

    if (i % 2 == 0) {
        console.log(`${i++} is continue`);
        continue;
    }
    console.log(`${i++} - loop...`);
}