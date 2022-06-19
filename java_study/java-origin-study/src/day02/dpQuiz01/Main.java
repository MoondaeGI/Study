package day02.dpQuiz01;

public class Main {

    public static void main(String[] args) {

        CopiedSemi copiedSemi1 = new CopiedSemi();
        CopiedSemi copiedSemi2 = new CopiedSemi();

        Semi semi1 = Semi.getSemiInstance();
        Semi semi2 = Semi.getSemiInstance();

        System.out.println("copiedSemi1: " + copiedSemi1);
        System.out.println("copiedSemi2: " + copiedSemi2);

        System.out.println("semi1: " + semi1);
        System.out.println("semi2: " + semi2);

        if (copiedSemi1.equals(copiedSemi2)) {
            System.out.println("복사된 세미는 같다");
        } else {
            System.out.println("복사된 세미는 같지 않다");
        }

        if (semi1.equals(semi2)) {
            System.out.println("세미는 같다");
        } else {
            System.out.println("세미는 다르다");
        }
    }
}
