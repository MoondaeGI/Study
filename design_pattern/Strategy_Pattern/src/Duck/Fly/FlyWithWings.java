package Duck.Fly;

public class FlyWithWings implements FlyBehavior {
    @Override
    public void fly() {
        System.out.println("날개로 날고 있어요!");
    }
}
