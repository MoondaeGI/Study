package remoteProxy.client.state;

import remoteProxy.client.gumballMachineRemote.GumballMachine;

public class SoldState implements State{
    private static final long serialVersionUID = 2L;
    transient GumballMachine gumballMachine;

    public SoldState(GumballMachine gumballMachine) {
        this.gumballMachine = gumballMachine;
    }

    @Override
    public void insertQuarter() {
        System.out.println("알맹이를 내보내는 중입니다.");
    }

    @Override
    public void ejectQuarter() {
        System.out.println("알맹이를 내보내는 중입니다.");
    }

    @Override
    public void turnCrank() {
        System.out.println("알맹이를 내보내는 중입니다.");
    }

    @Override
    public void dispense() {
        gumballMachine.releaseBall();
        gumballMachine.setState(gumballMachine.getNoQuarterState());
    }
}
