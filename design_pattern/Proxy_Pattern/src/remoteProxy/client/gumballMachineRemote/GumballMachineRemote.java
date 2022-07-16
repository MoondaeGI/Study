package remoteProxy.client.gumballMachineRemote;

import remoteProxy.client.state.State;

import java.rmi.Remote;
import java.rmi.RemoteException;

// 원격 인터페이스
// RMI를 구현, 모든 public 클래스에 RemoteException을 throw한다.
public interface GumballMachineRemote extends Remote {
    int getCount() throws RemoteException;

    String getLocation() throws RemoteException;

    State getState() throws RemoteException;
}
