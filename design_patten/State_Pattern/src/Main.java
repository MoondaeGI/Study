// State Pattern (상태 패턴)
/*
    상태를 제어할때 사용하는 디자인 패턴
    어떤 객체의 상태를 캡슐화와 추상화를 시켜서 클라이언트에게 알아보기 쉬운 디자인을 제공함
    상태의 변경은 상태 객체 내에서 이루어지기 때문에 클라이언트는 상태 변화의 내부구조를 알 필요가 없고,
    코드를 읽을때의 상태 변화를 따라가기도 쉽게 만들어줌
    구성을 활용해 여러 상태 객체들을 바꿔가며 사용하기에 객체의 클래스가 바뀌는 듯한 효과를 낼 수 있음
    전략 패턴과 비슷하지만, 전략 패턴과는 쓰임성이 다름
*/

import gumballMachine.GumballMachine;

public class Main {
    public static void main(String[] args) {
        GumballMachine gumballMachine = new GumballMachine(5);

        gumballMachine.insertQuarter();
        gumballMachine.turnCrank();

        gumballMachine.insertQuarter();
        gumballMachine.ejectQuarter();

        gumballMachine.insertQuarter();
        gumballMachine.insertQuarter();

        gumballMachine.insertQuarter();
        gumballMachine.turnCrank();
    }
}
