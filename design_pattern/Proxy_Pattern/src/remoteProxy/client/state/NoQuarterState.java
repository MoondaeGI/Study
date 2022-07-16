package remoteProxy.client.state;

import remoteProxy.client.gumballMachineRemote.GumballMachine;

public class NoQuarterState implements State{
    private static final long serialVersionUID = 2L;
    transient GumballMachine gumballMachine;

    public NoQuarterState(GumballMachine gumballMachine) {
        this.gumballMachine = gumballMachine;
    }

    @Override
    public void insertQuarter() {
        System.out.println("동전을 투입합니다.");
        gumballMachine.setState(gumballMachine.getHasQuarterState());
    }

    @Override
    public void ejectQuarter() {
        System.out.println("동전을 투입하셔야 합니다.");
    }

    @Override
    public void turnCrank() {
        System.out.println("동전을 투입하셔야 합니다.");
    }

    @Override
    public void dispense() {
        System.out.println("동전을 투입하셔야 합니다.");
    }
}
