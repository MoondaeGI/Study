package remoteProxy.client.gumballMonitor;

import remoteProxy.client.gumballMachineRemote.GumballMachineRemote;

import java.rmi.RemoteException;

// 원격 프록시 클래스
// 해당 클래스를 통해 GumballMachine의 데이터를 받아와 함수를 실행함
public class GumballMonitor {
    GumballMachineRemote gumballMachineRemote;

    public GumballMonitor(GumballMachineRemote gumballMachineRemote) {
        this.gumballMachineRemote = gumballMachineRemote;
    }

    public void report() {
        try {  // RemoteException을 throw하기 때문에 try 실행
            System.out.println("뽑기 기계 위치: " + gumballMachineRemote.getLocation());
            System.out.println("현재 재고: " + gumballMachineRemote.getCount());
            System.out.println("현재 상태: " + gumballMachineRemote.getState());
        } catch (RemoteException e) {  // RemoteException 발생
            e.printStackTrace();
        }
    }
}
