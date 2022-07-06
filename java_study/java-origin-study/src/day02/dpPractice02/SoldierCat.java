package day02.dpPractice02;

public class SoldierCat extends CatDecorator{

    // SoliderCat이 인스턴스화 될 때, CatDecorator의 생성자 호출
    public SoldierCat(Cat cat) {
        super(cat);
    }

    @Override
    public void tellSomething() {
        // CatDecorator의 tellSomething 메소드 호출
        super.tellSomething();
        System.out.println("나는 군인냥이다. 충성!");
    }
}
