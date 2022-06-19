package day02.dpPractice01;

public class Somi {
    // 클래스 내부에서 객체화 실시
    private static final Somi somiInstance = new Somi();

    // 인스턴스가 생성될 때 생성자 안에 log가 찍히도록 코드를 작성
    public Somi() {
        System.out.println("나는 유일한 소미다냥");
    }

    // somiInstance를 호출하는 get함수
    public static Somi getSomiInstance() {
        return somiInstance;
    }
}
