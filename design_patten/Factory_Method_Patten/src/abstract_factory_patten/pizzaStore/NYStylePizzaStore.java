package abstract_factory_patten.pizzaStore;

import abstract_factory_patten.pizza.CheesePizza;
import abstract_factory_patten.pizza.PepperoniPizza;
import abstract_factory_patten.pizza.Pizza;
import abstract_factory_patten.pizza.VeggiePizza;
import abstract_factory_patten.pizzaIngredientFactory.NYPizzaIngredientFactory;
import abstract_factory_patten.pizzaIngredientFactory.PizzaIngredientFactory;

public class NYStylePizzaStore extends PizzaStore{
    @Override
    protected Pizza createPizza(String type) {
        Pizza pizza = null;
        PizzaIngredientFactory pizzaIngredientFactory = new NYPizzaIngredientFactory();

        if (type.equals("Cheese")) {
            pizza = new CheesePizza(pizzaIngredientFactory);
            pizza.setName("뉴욕 스타일 치즈 피자");
        } else if (type.equals("Pepperoni")) {
            pizza = new PepperoniPizza(pizzaIngredientFactory);
            pizza.setName("뉴욕 스타일 페퍼로니 피자");
        } else if (type.equals("Veggie")) {
            pizza = new VeggiePizza(pizzaIngredientFactory);
            pizza.setName("뉴욕 스타일 야채 피자");
        }

        return pizza;
    }
}
