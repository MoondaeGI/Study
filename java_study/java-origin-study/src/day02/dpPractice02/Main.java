package day02.dpPractice02;

public class Main {

    public static void main(String[] args) {

        // 1. 평범냥이 군인냥이된 경우
        Cat soliderCat = new SoldierCat(new BaseCat());
        soliderCat.tellSomething();
        System.out.println();
        System.out.println();
        System.out.println();

        // 2. 평범한냥이가 의사냥이 되었다가 군인냥이 된 경우
        Cat soldierFromDoctorCat = new SoldierCat(new DoctorCat(new BaseCat()));
        soldierFromDoctorCat.tellSomething();
    }
}
