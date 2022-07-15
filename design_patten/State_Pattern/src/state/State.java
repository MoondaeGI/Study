package state;
// GumballMachine에서 사용될 상태 4가지를 나타낼 인터페이스
public interface State {
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
}
