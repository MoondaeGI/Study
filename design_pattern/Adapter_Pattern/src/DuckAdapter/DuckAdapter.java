// Adapter Patten
/*
    어답터 패턴은 서로 다른 두 클래스를 같은 모양으로 사용가능 할 수 있게 만들어주는 패턴이다.
    새로 들어온 코드를 리펙토링하지 않고 기존 코드들과 호환 가능하게 만들어주는 장점이 있고 클라이언트는 어답터를 사용하는지 모른다.
    기존 코드의 인터페이스를 상속받는 어답터 클래스를 생성 후, 내부에 새로 들어온 코드를 생성자로 받아온다.
    이후, 인터페이스에서 구현해야 하는 추상 함수에 새로 들어온 코드들을 대입해 구현을 해 만든다.
    사용자에게는 기존 코드들의 클래스명과 똑같은 객체로만 보이기 때문에, 어답터를 사용했음을 인지할 수 없다.
*/
package DuckAdapter;

import simpleDuck.SimpleDuck;
import simpleTurkey.SimpleTurkey;

public class DuckAdapter implements SimpleDuck {
    private SimpleTurkey simpleTurkey;

    public DuckAdapter(SimpleTurkey simpleTurkey) {
        this.simpleTurkey = simpleTurkey;
    }

    @Override
    public void quack() {
        simpleTurkey.gobble();
    }

    @Override
    public void fly() {
        for (int i = 0; i < 5; i++) {
            simpleTurkey.lessFly();
        }
    }
}
