package day02.dpPractice03;

public class CatMountain {

    public static void main(String[] args) {

        SmartCat smartCat = new SmartCat();
        smartCat.attack();

        Weapon powerGlove = new PowerGlove();
        smartCat.setWeapon(powerGlove);
        smartCat.attack();

        Weapon casinoChip = new CasinoChip();
        smartCat.setWeapon(casinoChip);
        smartCat.attack();
    }
}
