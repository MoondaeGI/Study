package remoteProxy.client;

import remoteProxy.client.gumballMachineRemote.GumballMachineRemote;
import remoteProxy.client.gumballMonitor.GumballMonitor;

import java.rmi.Naming;

public class Main {
    public static void main(String[] args) {
        String[] locations = { "rmi://santafe.mightygumball.com/gumballmachine",
                "rmi://boulder.mightygumball.com/gumballmachine",
                "rmi://austin.mightygumball.com/gumballmachine"};

        GumballMonitor[] gumballMonitors = new GumballMonitor[locations.length];

        for (int i = 0; i < locations.length; i++) {
            try {
                gumballMonitors[i] =
                        new GumballMonitor((GumballMachineRemote) Naming.lookup(locations[i]));
                System.out.println(gumballMonitors[i]);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        for (GumballMonitor gumballMonitor : gumballMonitors) {
            gumballMonitor.report();
        }
    }
}
