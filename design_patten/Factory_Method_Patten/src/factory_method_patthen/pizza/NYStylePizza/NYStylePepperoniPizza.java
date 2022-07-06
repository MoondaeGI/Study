package factory_method_patthen.pizza.NYStylePizza;

import factory_method_patthen.pizza.Pizza;

public class NYStylePepperoniPizza extends Pizza {
    public NYStylePepperoniPizza() {
        this.setName("뉴욕 스타일의 페퍼로니 피자");
        this.setDough("씬 크러스트 도우");
        this.setSauce("대충 맛있는 치즈 소스");

        toppings.add("페퍼로니 조각들");
    }

    @Override
    public void bake() {
        System.out.println("160도에서 40분간 굽기");
    }
}
