package Duck;

import Duck.Fly.FlyNoWay;
import Duck.Quack.ToyQuack;

public class ToyDuck extends Duck {

    public ToyDuck() {
        flyBehavior = new FlyNoWay();
        quackBehavior = new ToyQuack();
    }

    @Override
    public void display() {
        System.out.println("저는 장난감 오리입니다.");
    }
}
