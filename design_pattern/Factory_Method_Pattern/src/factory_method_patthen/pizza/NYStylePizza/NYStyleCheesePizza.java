package factory_method_patthen.pizza.NYStylePizza;

import factory_method_patthen.pizza.Pizza;

public class NYStyleCheesePizza extends Pizza {
    public NYStyleCheesePizza() {
        this.setName("뉴욕 스타일 소스와 치즈 피자");
        this.setDough("씬 크러스트 도우");
        this.setSauce("마리나라 소스");

        toppings.add("잘게 썬 레지아노 치즈");
    }
}
