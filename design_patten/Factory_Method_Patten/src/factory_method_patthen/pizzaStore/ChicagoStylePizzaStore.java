package factory_method_patthen.pizzaStore;

import factory_method_patthen.pizza.ChicagoStylePizza.ChicagoStyleCheesePizza;
import factory_method_patthen.pizza.ChicagoStylePizza.ChicagoStylePepperoniPizza;
import factory_method_patthen.pizza.Pizza;

public class ChicagoStylePizzaStore extends PizzaStore{
    @Override
    protected Pizza createPizza(String type) {
        Pizza pizza = null;

        if (type.equals("Cheese")) {
            pizza = new ChicagoStyleCheesePizza();
        } else if (type.equals("Pepperoni")) {
            pizza = new ChicagoStylePepperoniPizza();
        }

        return pizza;
    }
}
