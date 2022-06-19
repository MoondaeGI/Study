package day02.dpPractice01;

public class Main {

    // copiedSomi와 singletoneSomi의 비교
    public static void main(String[] args) {

        // copiedsomi 생성
        CopiedSomi copiedSomi1 = new CopiedSomi();
        CopiedSomi copiedSomi2 = new CopiedSomi();

        // 메모리 주소 확인
        System.out.println("copiedSomi1: " + copiedSomi1);
        System.out.println("copiedSomi2: " + copiedSomi2);

        // somi 생성
        Somi somi1 = Somi.getSomiInstance();
        Somi somi2 = Somi.getSomiInstance();

        // 메모리 주소 확인
        System.out.println("somi1: " + somi1);
        System.out.println("somi2: " + somi2);

        // 메모리 주소값을 비교
        if (copiedSomi1.equals(copiedSomi2)) {
            System.out.println("복사된 소미는 같다");
        } else {
            System.out.println("복사된 소미는 같지 않다.");
        }

        // 메모리 주소값을 비교
        if (somi1.equals(somi2)) {
            System.out.println("소미는 같다");
        } else {
            System.out.println("소미는 다르다.");
        }
    }
}
