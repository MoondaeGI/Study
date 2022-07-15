import component.Beverage;
import component.DarkRoast;
import component.Espresso;
import component.HouseBlend;
import decorator.Mocha;
import decorator.Soy;
import decorator.Whip;

public class Main {
    public static void main(String[] args) {
        Beverage esspreso = new Espresso();
        bills(esspreso);

        Beverage darkRoast = new DarkRoast();
        darkRoast = new Mocha(darkRoast);
        darkRoast = new Mocha(darkRoast);
        darkRoast = new Whip(darkRoast);
        bills(darkRoast);

        Beverage houseBlend = new HouseBlend();
        houseBlend = new Soy(houseBlend);
        houseBlend = new Mocha(houseBlend);
        houseBlend = new Whip(houseBlend);
        bills(houseBlend);
    }

    private static void bills(Beverage beverage) {
        System.out.println(beverage.getDescription() + " $" + beverage.cost());
    }
}
