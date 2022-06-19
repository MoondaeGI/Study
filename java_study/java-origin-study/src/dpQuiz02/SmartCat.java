package dpQuiz02;

public class SmartCat {

    private Weapon weapon;

    public void setWeapon(Weapon weapon) {
        this.weapon = weapon;
    }

    public void attack() {
        if (weapon == null) {
            System.out.println("연구하기!");
        } else {
            weapon.invoke();
        }
    }
}
