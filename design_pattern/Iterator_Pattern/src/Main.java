// Iterator Pattern
/*
    반복자 패턴은 서로 다른 자료구조를 사용할때, 통합된 반복문을 사용할 수 있게 만들어주는 디자인 패턴이다.
    반복자 생성을 위한 Iterator와 forEach를 사용하기 위한 Iterable을 생성, 구성으로 만들어 사용한다.

    Iterator 내부에는 마지막 인덱스인지 확인하는 hasNext()와 다음 객체를 넘겨주는 next() 메소드가 들어 있으며,
    Iterable 내부에는 iterator를 메소드 객체로, forEach 구현 등을 위한 콜렉션들의 구성품들로 이루어져있다.
    서로 다른 자료구조들을 리펙토링없이 연결 가능하게 만들어 주고 클라이언트로 하여금 캡슐화가 되어 무슨 자료구조를 사용했는지
    알 수 없고 알 필요도 없게 만들 수 있다.
*/

import menus.menu.DinerMenu;
import menus.menu.Menu;
import menus.menu.PancakeHouseMenu;
import waitress.Waitress;

public class Main {
    public static void main(String[] args) {
        Menu pancakeMenu = new PancakeHouseMenu();
        Menu dinerMenu = new DinerMenu();

        Waitress waitress = new Waitress(pancakeMenu, dinerMenu);
        waitress.printMenu();
    }
}
