package day02.dpPractice03;

public class SmartCat {

    private Weapon weapon;

    // weapon set 함수
    public void setWeapon(Weapon weapon) {
        this.weapon = weapon;
    }

    // 무기가 set되어 있으면 무기를 사용, 무기가 없으면 기본공격이 나감
    public void attack() {
        if (weapon == null) {
            System.out.println("연구하기!");
        } else {
            weapon.invoke();
        }
    }
}
