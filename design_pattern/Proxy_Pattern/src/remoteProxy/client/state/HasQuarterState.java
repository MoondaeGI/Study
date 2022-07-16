package remoteProxy.client.state;

import remoteProxy.client.gumballMachineRemote.GumballMachine;

public class HasQuarterState implements State{
    private static final long serialVersionUID = 2L;
    transient GumballMachine gumballMachine;

    public HasQuarterState(GumballMachine gumballMachine) {
        this.gumballMachine = gumballMachine;
    }

    @Override
    public void insertQuarter() {
        System.out.println("동전이 이미 투입되어있습니다.");
    }

    @Override
    public void ejectQuarter() {
        System.out.println("동전을 반환합니다.");
        gumballMachine.setState(gumballMachine.getNoQuarterState());
    }

    @Override
    public void turnCrank() {
        System.out.println("손잡이를 돌립니다.");
        gumballMachine.setState(gumballMachine.getSoldState());
    }

    @Override
    public void dispense() {
        System.out.println("손잡이를 돌려주십시오.");
    }
}
