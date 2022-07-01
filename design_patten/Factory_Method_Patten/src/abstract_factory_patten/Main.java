package abstract_factory_patten;


import abstract_factory_patten.pizza.Pizza;
import abstract_factory_patten.pizzaStore.ChicagoPizzaStore;
import abstract_factory_patten.pizzaStore.NYStylePizzaStore;
import abstract_factory_patten.pizzaStore.PizzaStore;

public class Main {
    public static void main(String[] args) {
        PizzaStore nyStylePizzaStore = new NYStylePizzaStore();
        PizzaStore chicagoStylePizzaStore = new ChicagoPizzaStore();

        Pizza nyStyleCheesePizza = nyStylePizzaStore.orderPizza("Cheese");
        System.out.println("주문하신 " + nyStyleCheesePizza.getName() + " 나왔습니다.");

        System.out.println();

        Pizza chicagoStylePepperoniPizza = chicagoStylePizzaStore.orderPizza("Pepperoni");
        System.out.println("주문하신 " + chicagoStylePepperoniPizza.getName() + " 나왔습니다.");
    }
}
