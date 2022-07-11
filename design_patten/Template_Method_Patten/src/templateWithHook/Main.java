package templateWithHook;

import templateWithHook.caffeineBeverageWithHook.CoffeeUsingHook;
import templateWithHook.caffeineBeverageWithHook.TeaNotUsingHook;

public class Main {
    public static void main(String[] args) {
        System.out.println("홍차 레시피");
        TeaNotUsingHook teaNotUsingHook = new TeaNotUsingHook();
        teaNotUsingHook.prepareRecipeWithHook();

        System.out.println();

        System.out.println("커피 레시피");
        CoffeeUsingHook coffeeUsingHook = new CoffeeUsingHook();
        coffeeUsingHook.prepareRecipeWithHook();
    }
}
