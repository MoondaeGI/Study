package menus.menu;

import menuItem.MenuItem;
import menus.iterator.DinerMenuIterator;
import menus.iterator.Iterator;

public class DinerMenu implements Menu{
    private static final int MAX_ITEMS = 6;
    private int numberOfItems = 0;
    MenuItem[] menuItems;

    public DinerMenu() {
        menuItems = new MenuItem[MAX_ITEMS];


        addItem("채식주의자용 BLT",
                "통밀 위에 콩고기 베이컨, 상추, 토마토를 얹은 메뉴",
                true,
                2.99);

        addItem("BLT",
                "통밀 위에 베이컨, 상추, 토마토를 얹은 메뉴",
                false,
                2.99);

        addItem("오늘의 스프",
                "감자 셀러드를 곁들인 오늘의 스프",
                false,
                3.29);

        addItem("핫도그",
                "사워크러스트, 갖은 양념, 양파, 치즈가 곁들여진 핫도그",
                false,
                3.05);
    }

    public void addItem(String name,
                        String description,
                        boolean vegetarian,
                        double price) {
        if (numberOfItems > MAX_ITEMS) {
            System.out.println("menu is full");
        } else {
            menuItems[numberOfItems++] = new MenuItem(name, description, vegetarian, price);
        }
    }

    @Override
    public Iterator createIterator() {
        return new DinerMenuIterator(menuItems);
    }
}
