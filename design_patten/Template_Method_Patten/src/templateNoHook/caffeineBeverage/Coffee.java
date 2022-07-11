package templateNoHook.caffeineBeverage;

public class Coffee extends CaffeineBeverage{
    @Override
    protected void brew() {
        System.out.println("커피를 갈아서 끓인다.");
    }

    @Override
    protected void addCondiments() {
        System.out.println("설탕과 크림을 넣는다.");
    }
}
