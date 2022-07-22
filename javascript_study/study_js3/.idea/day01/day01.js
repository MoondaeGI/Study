// 객체 생성
// 객체를 일일히 생성하지 않고 객체 생성을 함수로 구현해서 여러개를 쉽게 만들 수 있음

// factory function
function createUser(name, email, birthday) {
    const user = {
        name,
        email,
        birthday,

        buy(item) {
            console.log(`${this.name}님이 ${item}을(를) 구입하셨습니다.`);
        }
    };

    return user;
}

// factory function을 이용한 객체 생성
const user1 = createUser('MoondaeGI', 'ansgur1997@naver.com', '1997-06-08');
const user2 = createUser('user2', 'adjfk@jadg.com', '1995-12-3');

user1.buy('guitar');  // MoondaeGI님이 guitar을(를) 구입하셨습니다.

// constructor function
function ConstUser(name, email, birthday) {
    this.name = name;
    this.email = email;
    this.birthday = birthday;
}

// constructor function을 사용해 객체 생성
const constUser1 = new ConstUser('MoondaeGI', 'ansgur1997@naver.com', '1997-06-08');
const constUser2 = new ConstUser('user2', 'adjfk@jadg.com', '1995-12-3');

// class (ES6+)
class ClassUser {
    constructor(name, email, birthday) {  // 생성자
        this.name = name;
        this.eamil = email;
        this.birthday = birthday;
    }

    buy(item) {  // 내부 메소드
        console.log(`${this.name}님이 ${item}을(를) 구입하셨습니다.`);
    }
}

// class를 사용해 객체 생성
const classUser1 = new ClassUser('MoondaeGI', 'ansgur1997@naver.com', '1997-06-08');
const classUser2 = new ClassUser('user2', 'adjfk@jadg.com', '1995-12-3');

classUser1.buy('guitar');  // MoondaeGI님이 guitar을(를) 구입하셨습니다.

//================================================================
// 캡슐화

// getter/ setter 구현
class Example {
    constructor(email) {
        this.email = email;
    }

    set email(address) {  // setter 메소드
        if(address.includes('@')) {  // attribute 내부의 값 확인
            this._email = address;  // 접근 제어자 _ (python과 같음)
        } else {
            throw new Error('invalid email address');  // 에러 발생
        }
    }

    get email() {  // getter 메소드
        return this._email;
    }

    printEmail() {
        console.log(`Example's email is ${this.email}`);
    }
}

const example1 = new Example('sdfs@jadklg.com');
example1.email = 'sdfe@ldfs.com';  // setter 메소드로 값 전달

//================================================================
// 상속

class Example2 extends Example {  // 상속 선언
    constructor(email, birthday) {
        super(email);  // 부모 클래스 생성자 선언
        this.birthday = birthday;
    }
}

const example2 = new Example2('dsfs@dgasg.com', '1995-10-5');

//================================================================
// 다형성

class Example3 extends Example {
    constructor(email) {
        super(email);
    }

    printEmail() {  // 오버라이드
        console.log(`Example3's email is ${this.email}`);
    }
}

const exUser = new Example('adfasd@ndf.com');
const ex3User = new Example3('fdgregd@nefe.com');

const exUsers = [exUser, ex3User];

exUsers.forEach((exUser) => {
    exUser.printEmail();  // 오버라이드를 통해 클래스가 달라도 같은 형태로 사용 가능
});

// instanceof
// 해당 객체의 클래스를 찾는 메소드

exUsers.forEach((exUser) => {
    console.log(exUser instanceof Example3);  // false, true
    console.log(exUser instanceof Example);  // true, true  => 상속받은 자녀 클래스는 부모 클래스를 포함하기에 둘 다 true 출력
});

//================================================================
// static 프로퍼티/메소드
// 객체가 아닌 클래스 자체로 접근

class Math {
    static PI = 3.14;

    static getCircleArea(radius) {
        return Math.PI * radius * radius;
    }
}

// static 값에 접근
console.log(Math.PI);
console.log(Math.getCircleArea(10));

// 클래스 외부에서 static으로 새로 생성 가능
Math.getRectangleArea = function (width, height) {
    return width * height;
}
console.log(Math.getRectangleArea(1, 5));