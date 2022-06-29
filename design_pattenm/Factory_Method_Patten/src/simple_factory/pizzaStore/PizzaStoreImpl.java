package simple_factory.pizzaStore;

import simple_factory.pizza.Pizza;
import simple_factory.simplePizzaFactory.SimplePizzaFactory;

public class PizzaStoreImpl implements PizzaStore{
    SimplePizzaFactory factory;

    public PizzaStoreImpl(SimplePizzaFactory factory) {
        this.factory = factory;
    }

    @Override
    public Pizza orderPizza(String type) {
        Pizza pizza = factory.createPizza(type);

        pizza.prepare();
        pizza.bake();
        pizza.cut();
        pizza.box();

        return pizza;
    }
}
