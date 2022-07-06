package abstract_factory_patten.pizza;

import abstract_factory_patten.pizzaIngredientFactory.PizzaIngredientFactory;

public class CheesePizza extends Pizza{
    PizzaIngredientFactory pizzaIngredientFactory;

    public CheesePizza(PizzaIngredientFactory pizzaIngredientFactory) {
        this.pizzaIngredientFactory = pizzaIngredientFactory;
    }

    @Override
    public void prepare() {
        System.out.println("준비 중: " + this.getName());
        this.setDough(pizzaIngredientFactory.createDough());
        this.setSauce(pizzaIngredientFactory.createSauce());
        this.setCheese(pizzaIngredientFactory.createCheese());
    }
}
