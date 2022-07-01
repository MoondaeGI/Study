package abstract_factory_patten.pizzaIngredientFactory;

import abstract_factory_patten.pizzaIngredient.cheese.Cheese;
import abstract_factory_patten.pizzaIngredient.cheese.ReggianoCheese;
import abstract_factory_patten.pizzaIngredient.dough.Dough;
import abstract_factory_patten.pizzaIngredient.dough.ThinCrustDough;
import abstract_factory_patten.pizzaIngredient.pepperoni.Pepperoni;
import abstract_factory_patten.pizzaIngredient.pepperoni.SalamiPepperoni;
import abstract_factory_patten.pizzaIngredient.sauce.MarinaraSauce;
import abstract_factory_patten.pizzaIngredient.sauce.Sauce;
import abstract_factory_patten.pizzaIngredient.veggies.*;

public class NYPizzaIngredientFactory implements PizzaIngredientFactory{
    @Override
    public Dough createDough() {
        return new ThinCrustDough();
    }

    @Override
    public Sauce createSauce() {
        return new MarinaraSauce();
    }

    @Override
    public Cheese createCheese() {
        return new ReggianoCheese();
    }

    @Override
    public Veggie[] createVeggies() {
        Veggie veggies[] = {new Garlic(), new Onion(), new Mushroom(), new RedPepper()};
        return veggies;
    }

    @Override
    public Pepperoni createPepperoni() {
        return new SalamiPepperoni();
    }
}
