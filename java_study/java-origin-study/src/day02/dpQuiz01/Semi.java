package day02.dpQuiz01;

public class Semi {

    public static final Semi semiInstance = new Semi();

    public Semi() {
        System.out.println("나는 세미다");
    }

    public static Semi getSemiInstance() {
        return semiInstance;
    }
}
