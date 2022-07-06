package day02.dpPractice02;

public class DoctorCat extends CatDecorator{

    public DoctorCat(Cat cat) {
        super(cat);
    }

    @Override
    public void tellSomething() {
        super.tellSomething();
        System.out.println("나는 의사냥이다");
    }
}
