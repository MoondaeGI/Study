package state;

import gumballMachine.GumballMachine;

public class HasQuarterState implements State{
    GumballMachine gumballMachine;

    public HasQuarterState(GumballMachine gumballMachine) {
        this.gumballMachine = gumballMachine;
    }

    @Override
    public void insertQuarter() {
        System.out.println("이미 동전을 투입하셨습니다.");
    }

    @Override
    public void ejectQuarter() {
        System.out.println("동전을 반환받습니다.");
        gumballMachine.setState(gumballMachine.getNoQuarterState());
    }

    @Override
    public void turnCrank() {
        System.out.println("손잡이를 돌리셨습니다.");
        gumballMachine.setState(gumballMachine.getSoldState());
    }

    @Override
    public void dispense() {
        throw new UnsupportedOperationException();
    }
}
