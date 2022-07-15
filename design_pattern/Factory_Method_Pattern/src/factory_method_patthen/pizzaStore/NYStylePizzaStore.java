package factory_method_patthen.pizzaStore;

import factory_method_patthen.pizza.NYStylePizza.NYStyleCheesePizza;
import factory_method_patthen.pizza.NYStylePizza.NYStylePepperoniPizza;
import factory_method_patthen.pizza.Pizza;

public class NYStylePizzaStore extends PizzaStore{
    @Override
    protected Pizza createPizza(String type) {
        Pizza pizza = null;

        if (type.equals("Cheese")) {
            pizza = new NYStyleCheesePizza();
        } else if (type.equals("Pepperoni")) {
            pizza = new NYStylePepperoniPizza();
        }

        return pizza;
    }
}
