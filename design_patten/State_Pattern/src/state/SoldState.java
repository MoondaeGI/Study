package state;

import gumballMachine.GumballMachine;

public class SoldState implements State{
    GumballMachine gumballMachine;

    public SoldState(GumballMachine gumballMachine) {
        this.gumballMachine = gumballMachine;
    }

    @Override
    public void insertQuarter() {
        throw new UnsupportedOperationException();
    }

    @Override
    public void ejectQuarter() {
        throw new UnsupportedOperationException();
    }

    @Override
    public void turnCrank() {
        System.out.println("손잡이는 한번만 돌리십시오.");
    }

    @Override
    public void dispense() {
        gumballMachine.releaseBall();

        if (gumballMachine.getCount() > 0) {
            gumballMachine.setState(gumballMachine.getNoQuarterState());
        } else {
            gumballMachine.setState(gumballMachine.getSoldOutState());
        }
    }
}
