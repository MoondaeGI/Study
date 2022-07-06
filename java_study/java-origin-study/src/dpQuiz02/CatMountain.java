package dpQuiz02;

public class CatMountain {
    public static void main(String[] args) {

        SmartCat smartCat = new SmartCat();
        smartCat.attack();

        Weapon doubleGun = new DoubleGun();
        smartCat.setWeapon(doubleGun);
        smartCat.attack();

        Weapon bazuka = new Bazuka();
        smartCat.setWeapon(bazuka);
        smartCat.attack();
    }
}
