package Duck.Quack;

public class ToyQuack implements QuackBehavior {
    @Override
    public void quack() {
        System.out.println("삑삑!");
    }
}
