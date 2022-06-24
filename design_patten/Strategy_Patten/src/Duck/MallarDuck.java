package Duck;

import Duck.Fly.FlyWithWings;
import Duck.Quack.NormalQuack;

public class MallarDuck extends Duck{

    public MallarDuck() {
        flyBehavior = new FlyWithWings();
        quackBehavior = new NormalQuack();
    }

    @Override
    public void display() {
        System.out.println("저는 물오리입니다.");
    }
}
