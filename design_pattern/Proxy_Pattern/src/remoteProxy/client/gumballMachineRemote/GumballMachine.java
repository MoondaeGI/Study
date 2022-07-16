package remoteProxy.client.gumballMachineRemote;

import remoteProxy.client.state.HasQuarterState;
import remoteProxy.client.state.NoQuarterState;
import remoteProxy.client.state.SoldState;
import remoteProxy.client.state.State;

import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;

// 원격 프폭시를 사용하기 위해 수정된 클라이언트 GumballMachine
// rmi를 사용하기 위해 UnicastRemoteObject를 상속
public class GumballMachine extends UnicastRemoteObject implements GumballMachineRemote {
    private static final long serialVersionUID = 2L;  // 직렬화/역직렬화를 위한 serialVersion 설정

    private String location;
    private int numberGumballs;
    private State state;

    private State noQuarterState;
    private State hasQuarterState;
    private State soldState;

    // 생성자에 RemoteException을 throw한다.
    public GumballMachine(String location, int numberGumballs) throws RemoteException {
        this.location = location;
        this.numberGumballs = numberGumballs;

        noQuarterState = new NoQuarterState(this);
        hasQuarterState = new HasQuarterState(this);
        soldState = new SoldState(this);

        state = noQuarterState;
    }

    @Override
    public int getCount() throws RemoteException { return numberGumballs; }

    @Override
    public String getLocation() throws RemoteException { return location; }

    @Override
    public State getState() throws RemoteException { return state; }

    public void releaseBall() {
        System.out.println("알맹이를 꺼내는 중입니다..");
        numberGumballs--;
    }

    public void setState(State state) { this.state = state; }

    public State getNoQuarterState() { return noQuarterState; }
    public State getHasQuarterState() { return hasQuarterState; }
    public State getSoldState() { return soldState; }

    public void insertQuarter() { state.insertQuarter(); }
    public void ejectQuarter() { state.ejectQuarter(); }
    public void turnCrank() { state.turnCrank(); }
    public void dispense() { state.dispense(); }
}
