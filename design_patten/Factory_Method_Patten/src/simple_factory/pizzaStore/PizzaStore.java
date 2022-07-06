package simple_factory.pizzaStore;

import simple_factory.pizza.Pizza;
import simple_factory.simplePizzaFactory.SimplePizzaFactory;

public interface PizzaStore {
    public Pizza orderPizza(String type);
}
