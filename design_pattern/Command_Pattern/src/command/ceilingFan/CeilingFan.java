package command.ceilingFan;

public class CeilingFan {
    public static final int HIGH = 3;
    public static final int MIDDLE =2;
    public static final int LOW = 1;
    public static final int OFF = 0;
    private static int speed;

    public CeilingFan() {
        speed = OFF;
    }

    public void on() {
        System.out.println("선풍기를 켭니다.");
        speed = LOW;

    }
    public void off() {
        System.out.println("선풍기를 끕니다.");
        speed = OFF;
    }

    public void setHigh() {
        System.out.println("선풍기 속도를 '강'으로 설정합니다.");
        speed = HIGH;
    }

    public void setMiddle() {
        System.out.println("선풍기 속도를 '중'으로 설정합니다.");
        speed = MIDDLE;
    }

    public void setLOW() {
        System.out.println("선풍기 속도를 '약'으로 설정합니다.");
        speed = LOW;
    }

    public int getSpped() {
        return speed;
    }
}
