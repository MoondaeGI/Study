package day02.dpPractice02;

// 추상 클래스 decorator 패턴
public abstract class CatDecorator implements Cat{

    private Cat cat;

    // 생성자를 만들어 줄 때, cat 객체를 주입
    public CatDecorator(Cat cat) {
        this.cat = cat;
    }

    // decorator 내부에서 특별한 구현을 하지 않음
    @Override
    public void tellSomething() {
        // 넘어온 cat 객체 메소드를 그대로 실행함
        this.cat.tellSomething();
    }
}
