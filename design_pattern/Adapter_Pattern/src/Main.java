import DuckAdapter.DuckAdapter;
import simpleDuck.SimpleDuck;
import simpleDuck.ToyDuck;
import simpleTurkey.WildTurkey;

public class Main {
    public static void main(String[] args) {
        // 기존의 SimpleDuck
        SimpleDuck simpleDuck = new ToyDuck();
        // 어답터 패턴을 사용해 SimpleDuck 클래스로 WildTurkey를 호출한 모습
        SimpleDuck simpleDuckUsingAdapter = new DuckAdapter(new WildTurkey());

        simpleDuck.quack();
        simpleDuck.fly();

        System.out.println();

        // SimpleDuck처럼 쓸 수 있다.
        simpleDuckUsingAdapter.quack();
        simpleDuckUsingAdapter.fly();
    }
}
