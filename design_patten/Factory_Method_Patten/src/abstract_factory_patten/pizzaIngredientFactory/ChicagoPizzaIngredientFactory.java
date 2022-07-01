package abstract_factory_patten.pizzaIngredientFactory;

import abstract_factory_patten.pizzaIngredient.cheese.Cheese;
import abstract_factory_patten.pizzaIngredient.cheese.MozzarellaCheese;
import abstract_factory_patten.pizzaIngredient.dough.Dough;
import abstract_factory_patten.pizzaIngredient.dough.PanCrustDough;
import abstract_factory_patten.pizzaIngredient.pepperoni.ChorizoPepperoni;
import abstract_factory_patten.pizzaIngredient.pepperoni.Pepperoni;
import abstract_factory_patten.pizzaIngredient.sauce.Sauce;
import abstract_factory_patten.pizzaIngredient.sauce.TomatoSauce;
import abstract_factory_patten.pizzaIngredient.veggies.Garlic;
import abstract_factory_patten.pizzaIngredient.veggies.Mushroom;
import abstract_factory_patten.pizzaIngredient.veggies.Onion;
import abstract_factory_patten.pizzaIngredient.veggies.Veggie;

public class ChicagoPizzaIngredientFactory implements PizzaIngredientFactory{
    @Override
    public Dough createDough() {
        return new PanCrustDough();
    }

    @Override
    public Sauce createSauce() {
        return new TomatoSauce();
    }

    @Override
    public Cheese createCheese() {
        return new MozzarellaCheese();
    }

    @Override
    public Veggie[] createVeggies() {
        Veggie veggies[] = {new Garlic(), new Onion(), new Mushroom()};
        return veggies;
    }

    @Override
    public Pepperoni createPepperoni() {
        return new ChorizoPepperoni();
    }
}
