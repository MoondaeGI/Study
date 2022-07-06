package factory_method_patthen;

import factory_method_patthen.pizza.Pizza;
import factory_method_patthen.pizzaStore.ChicagoStylePizzaStore;
import factory_method_patthen.pizzaStore.NYStylePizzaStore;
import factory_method_patthen.pizzaStore.PizzaStore;

public class Main {
    public static void main(String[] args) {
        PizzaStore nyStylePizzaStore = new NYStylePizzaStore();
        PizzaStore chicagoStylePizzaStore = new ChicagoStylePizzaStore();

        Pizza nyStylePizza = nyStylePizzaStore.orderPizza("Cheese");
        System.out.println("주문한 " + nyStylePizza.getName() + "이 완료되었습니다.");

        System.out.println();

        Pizza chicagoStylePizza = chicagoStylePizzaStore.orderPizza("Pepperoni");
        System.out.println("주문한 " + chicagoStylePizza.getName() + "이 완료되었습니다.");
    }
}
