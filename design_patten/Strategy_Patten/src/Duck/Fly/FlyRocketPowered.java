package Duck.Fly;

public class FlyRocketPowered implements FlyBehavior {
    @Override
    public void fly() {
        System.out.println("로켓을 타고 날고 있어요!");
    }
}
