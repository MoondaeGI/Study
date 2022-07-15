package simple_factory.pizza;

public class CheesePizza implements Pizza{
    @Override
    public void prepare() {
        System.out.println("밀가루, 치즈, 치즈 더 준비");
    }

    @Override
    public void bake() {
        System.out.println("빵을 세게 굽는다");
    }

    @Override
    public void cut() {
        System.out.println("8조각으로 자른다");
    }

    @Override
    public void box() {
        System.out.println("큰 박스에 담는다.");
    }
}
