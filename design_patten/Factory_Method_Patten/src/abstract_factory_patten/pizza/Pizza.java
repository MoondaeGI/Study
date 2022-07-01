package abstract_factory_patten.pizza;

import abstract_factory_patten.pizzaIngredient.cheese.Cheese;
import abstract_factory_patten.pizzaIngredient.dough.Dough;
import abstract_factory_patten.pizzaIngredient.pepperoni.Pepperoni;
import abstract_factory_patten.pizzaIngredient.sauce.Sauce;
import abstract_factory_patten.pizzaIngredient.veggies.Veggie;

public abstract class Pizza {
    private String name;

    private Dough dough;
    private Sauce sauce;
    private Veggie veggies[];
    private Cheese cheese;
    private Pepperoni pepperoni;

    public abstract void prepare();

    public void bake() {
        System.out.println("175도에서 25분간 굽기");
    }

    public void cut() {
        System.out.println("피자를 사선으로 자르기");
    }

    public void box() {
        System.out.println("상자에 피자를 담기");
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setDough(Dough dough) {
        this.dough = dough;
    }

    public Dough getDough() {
        return dough;
    }

    public void setSauce(Sauce sauce) {
        this.sauce = sauce;
    }

    public Sauce getSauce() {
        return sauce;
    }

    public void setCheese(Cheese cheese) {
        this.cheese = cheese;
    }

    public Cheese getCheese() {
        return cheese;
    }

    public void setVeggies(Veggie[] veggies) {
        this.veggies = veggies;
    }

    public Veggie[] getVeggies() {
        return veggies;
    }

    public void setPepperoni(Pepperoni pepperoni) {
        this.pepperoni = pepperoni;
    }

    public Pepperoni getPepperoni() {
        return pepperoni;
    }
}
