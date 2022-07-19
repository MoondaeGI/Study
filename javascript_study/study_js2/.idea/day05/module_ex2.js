function print(string) {
    console.log(`string: ${string}`);
}

export {print as printString};  // 모듈 내에서 export로 선언할 내용들을 추릴 수 있음