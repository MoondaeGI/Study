package factory_method_patthen.pizza.ChicagoStylePizza;

import factory_method_patthen.pizza.Pizza;

public class ChicagoStylePepperoniPizza extends Pizza {
    public ChicagoStylePepperoniPizza() {
        this.setName("시카고 스타일 페퍼로니 피자");
        this.setDough("두꺼운 도우");
        this.setSauce("진한 치즈와 대충 맛있는 소스");

        toppings.add("페퍼로니");
    }
}