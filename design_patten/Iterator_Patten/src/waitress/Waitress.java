package waitress;

import menuItem.MenuItem;
import menus.iterator.Iterator;
import menus.menu.Menu;
import menus.menu.PancakeHouseMenu;

public class Waitress {
    Menu pancakeHouseMenu;
    Menu dinnerMenu;

    public Waitress(Menu pancakeHouseMenu, Menu dinnerMenu) {
        this.pancakeHouseMenu = pancakeHouseMenu;
        this.dinnerMenu = dinnerMenu;
    }

    public void printMenu() {
        Iterator pancakeMenuIterator = pancakeHouseMenu.createIterator();
        Iterator dinnerMenuIterator = dinnerMenu.createIterator();

        System.out.println("MENU\n-------------------------\n아침식사");
        printMenu(pancakeMenuIterator);

        System.out.println("MENU\n-------------------------\n점심식사");
        printMenu(dinnerMenuIterator);
    }

    private void printMenu(Iterator iterator) {
        while (iterator.hasNext()) {
            MenuItem menuItem = iterator.next();
            System.out.print(menuItem.getName() + ", ");
            System.out.print(menuItem.getPrice() + " -- ");
            System.out.print(menuItem.getDescription());
        }
    }
}
