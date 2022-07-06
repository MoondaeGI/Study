package abstract_factory_patten.pizzaIngredientFactory;

import abstract_factory_patten.pizzaIngredient.cheese.Cheese;
import abstract_factory_patten.pizzaIngredient.dough.Dough;
import abstract_factory_patten.pizzaIngredient.pepperoni.Pepperoni;
import abstract_factory_patten.pizzaIngredient.sauce.Sauce;
import abstract_factory_patten.pizzaIngredient.veggies.Veggie;

public interface PizzaIngredientFactory {
    public Dough createDough();
    public Sauce createSauce();
    public Cheese createCheese();
    public Veggie[] createVeggies();
    public Pepperoni createPepperoni();
}
