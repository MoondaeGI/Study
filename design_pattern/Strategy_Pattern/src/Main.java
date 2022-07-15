import Duck.Duck;
import Duck.Fly.FlyRocketPowered;
import Duck.MallarDuck;
import Duck.ToyDuck;

// Design Patten: Strategy Patten
/*
    변동할 가능성이 있는 부분을 따로 캡슐화를 하고 해당 부분을 속성으로 가지는 클래스를 생성하는 방식
    변동 가능성 있는 부분을 인터페이스로 구현 후, 구현할 내용들을 해당 인터페이스를 상속받아 구현한다.
    메인이 되는 클래스는 해당 클래스를 속성으로 가지고 동적으로 할당 받을 수 있음
    추후에 내용 변동, 새로운 클래스 추가 등이 필요할때 유지 보수가 상당히 편하다.


    해당 예시)
    Duck 클래스는 fly, quack, swim, display를 가지고 있음. 어떤 오리는 날지 못하거나 꽥꽥하고 울지 않음

    fly, quack 부분은 오리의 종류에 따라 변할 수 있기 때문에 FlyBehavior, QuackBehavior 인터페이스로 분리
    fly, quack을 구현할 부분들은 FlyWithWings, FlyNoWay 등 구현할 내용들을 구현. 이때 위의 인터페이스를 상속받음

    인터페이스의 상속 부분을 구현, 후 Duck 클래스의 속성으로 들어감.
    Duck 클래스는 flyBehavior, quackBehavior를 가지고 해당 속성을 반드시 포함하게 만듦.

    구현할 오리들 MallarDuck, ToyDuck 생성. 해당 클래스들은 Duck 추상 메소드를 상속받음
    flyBehavior, quackBehavior에 원하는 구현 내용의 fly, quack 클래스를 추가하거나, setter를 사용해 동적으로 할당한다.
*/


public class Main {
    public static void main(String[] args) {
        Duck mallarDuck = new MallarDuck();
        Duck toyDuck = new ToyDuck();

        mallarDuck.performFly();
        mallarDuck.performQuack();
        mallarDuck.display();
        mallarDuck.swim();

        mallarDuck.setFlyBehavior(new FlyRocketPowered());
        mallarDuck.performFly();

        System.out.println();
        System.out.println();

        toyDuck.performFly();
        toyDuck.performQuack();
        toyDuck.display();
        toyDuck.swim();
    }
}
