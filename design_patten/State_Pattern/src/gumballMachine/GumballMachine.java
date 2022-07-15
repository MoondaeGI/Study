package gumballMachine;

import state.*;

public class GumballMachine {
    private State soldOutState;
    private State soldState;
    private State hasQuarterState;
    private State noQuarterState;

    private State state;
    private int count = 0;

    public GumballMachine(int numberGumballs) {
        soldOutState = new SoldOutState(this);
        soldState = new SoldState(this);
        hasQuarterState = new HasQuarterState(this);
        noQuarterState = new NoQuarterState(this);

        count = numberGumballs;
        state = noQuarterState;
    }

    public void setState(State state) {
        this.state = state;
    }

    public void releaseBall() {
        System.out.println("알맹이를 내보내는 중입니다..");
        if (count > 0) count--;
    }

    public void insertQuarter() { state.insertQuarter(); }
    public void ejectQuarter() { state.ejectQuarter(); }
    public void turnCrank() { state.turnCrank(); }
    public void dispense() { state.dispense(); }

    public State getSoldOutState() { return soldOutState; }
    public State getSoldState() { return soldState; }
    public State getHasQuarterState() { return hasQuarterState; }
    public State getNoQuarterState() { return noQuarterState; }

    public int getCount() { return count; }
}
