package templateNoHook.caffeineBeverage;

public class Tea extends CaffeineBeverage{
    @Override
    protected void brew() {
        System.out.println("찻잎을 갈아서 끓인다.");
    }

    @Override
    protected void addCondiments() {
        System.out.println("레몬을 넣는다.");
    }
}
