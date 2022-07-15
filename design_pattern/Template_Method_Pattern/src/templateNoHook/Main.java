package templateNoHook;

import templateNoHook.caffeineBeverage.Coffee;
import templateNoHook.caffeineBeverage.Tea;

public class Main {
    public static void main(String[] args) {
        System.out.println("홍차 레시피");
        Tea tea = new Tea();
        tea.prepareRecipe();  // 템플릿 처리

        System.out.println();

        System.out.println("커피 레시피");
        Coffee coffee = new Coffee();
        coffee.prepareRecipe();
    }
}
