package simpleDuck;

public class ToyDuck implements SimpleDuck{
    @Override
    public void quack() {
        System.out.println("삑삑!");
    }

    @Override
    public void fly() {
        System.out.println("살짝 납니다.");
    }
}
