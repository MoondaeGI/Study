package abstract_factory_patten.pizza;

import abstract_factory_patten.pizzaIngredientFactory.PizzaIngredientFactory;

public class VeggiePizza extends Pizza{
    PizzaIngredientFactory pizzaIngredientFactory;

    public VeggiePizza(PizzaIngredientFactory pizzaIngredientFactory) {
        this.pizzaIngredientFactory = pizzaIngredientFactory;
    }

    @Override
    public void prepare() {
        System.out.println("준비 중: " + this.getName());
        this.setDough(pizzaIngredientFactory.createDough());
        this.setSauce(pizzaIngredientFactory.createSauce());
        this.setVeggies(pizzaIngredientFactory.createVeggies());
    }
}
