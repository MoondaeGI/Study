// Composite Pattern (컴포지트 패턴)
/*
    객체를 트리로 만들어 관리하는 디자인 패턴
    뿌리, 줄기, 잎으로 이루어진 트리 자료구조의 모형에 맞추어서 클래스를 작성한다
    클라이언트에 뿌리를 전달하면 모든 객체를 자연스럽게 가질 수 있다
    아래의 예시처럼 메뉴/항목을 같은 구조에 넣어 부분-전체 계층 구조를 생성할 수 있다
*/
import menu.Menu;
import menu.MenuItem;
import menuComponent.MenuComponent;
import waitress.Waitress;

public class Main {
    public static void main(String[] args) {
        // 줄기 생성
        MenuComponent pancakeHouseMenu = new Menu("팬케이크 하우스 메뉴", "아침 메뉴");
        MenuComponent dinerMenu = new Menu("식당 메뉴", "점심 메뉴");
        MenuComponent cafeMenu = new Menu("카페 메뉴", "저녁 메뉴");
        MenuComponent dessertMenu = new Menu("디저트 메뉴", "디저트를 즐겨보세요!");

        MenuComponent allMenus = new Menu("전체 메뉴", "전체 메뉴입니다.");
        // 뿌리 노드에 자식 노드 추가
        allMenus.add(pancakeHouseMenu);
        allMenus.add(dinerMenu);
        allMenus.add(cafeMenu);

        // 각각의 줄기에 노드 추가
        // 팬케이크 메뉴 추가
        pancakeHouseMenu.add(new MenuItem("K&B 팬케이크 세트",
                "스크램블 에그와 토스트가 곁들여진 팬케이크",
                2.99, true));
        pancakeHouseMenu.add(new MenuItem("레귤러 팬케이크 세트",
                "달걀 프라이와 소시지가 곁들여진 팬케이크",
                2.99, false));
        pancakeHouseMenu.add(new MenuItem("블루베리 팬케이크",
                "신선한 블루베리와 블루베리 시럽으로 만든 팬케이크",
                3.49, true));
        // 식당 메뉴 추가
        dinerMenu.add(new MenuItem("채식주의자용 BLT",
                "통밀 위에 콩고기 베이컨, 상추, 토마토를 얹은 메뉴",
                2.99, true));
        dinerMenu.add(new MenuItem("BLT",
                "통밀 위에 베이컨, 상추, 토마토를 얹은 메뉴",
                3.29, false));
        dinerMenu.add(new MenuItem("파스타",
                "마리나라 소스 스파게티. 효모빵도 드립니다.",
                3.89, true));
        dinerMenu.add(dessertMenu);  // 잎이 아닌 줄기를 추가
        // 카페 메뉴 추가
        cafeMenu.add(new MenuItem("배지 버거와 에어 프라이",
                "통밀빵, 상추, 토마토, 감자 튀김이 첨가된 배지 버터",
                3.99, true));
        cafeMenu.add(new MenuItem("부리토",
                "통 핀토콩과 살샤, 구야카몰이 곁들여진 푸짐한 부리토",
                4.29, true));
        // 식당 메뉴의 줄기, 디저트 메뉴에 메뉴 추가
        dessertMenu.add(new MenuItem("애플 파이",
                "바삭바삭한 크러스트에 바닐라 아이스크림이 얹혀 있는 애플 파이",
                1.59, true));
        dessertMenu.add(new MenuItem("소르베",
                "라스베리와 라임의 절묘한 조화!",
                1.89, true));
        
        // 주문들을 호출할 클라이언트, 웨이트리스 호출
        Waitress waitress = new Waitress(allMenus);
        waitress.printMenu();  // 모든 주문 출력
    }
}
