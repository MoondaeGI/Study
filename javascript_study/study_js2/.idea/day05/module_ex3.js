function print(boolean) {
    console.log(`${boolean} is ${Boolean(boolean) || false}`);
}

export default print;  // default export 방식