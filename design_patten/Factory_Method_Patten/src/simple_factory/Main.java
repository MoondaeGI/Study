package simple_factory;

import simple_factory.pizza.Pizza;
import simple_factory.pizzaStore.PizzaStore;
import simple_factory.pizzaStore.PizzaStoreImpl;
import simple_factory.simplePizzaFactory.SimplePizzaFactory;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {

        try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            SimplePizzaFactory factory = new SimplePizzaFactory();
            PizzaStore pizzaStore = new PizzaStoreImpl(factory);

            Pizza pizza;
            while(true) {
                String order = br.readLine();
                pizza = pizzaStore.orderPizza(order);
            }
        }
    }
}
