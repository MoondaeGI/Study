// hook (후크)
/*
    서브 클래스들 내부에서도 사용하거나, 사용하지 않는다는 내용이 있을 경우, 후크를 사용해 처리한다.
    후크는 추상 메소드가 아닌, 빈 메소드로 사용하는 서브 클래스는 오버라이드로 구현하고 사용하지 않는 서브 클래스라면
    그냥 빈 메소드만을 통과한다.
*/
package templateWithHook.caffeineBeverageWithHook;

public abstract class CaffeineBeverageWithHook {
    public final void prepareRecipeWithHook() {
        boilWater();
        brew();
        pourInCup();
        if (customerWantsCondiments()) addCondiment();
    }

    private void boilWater() {
        System.out.println("물을 끓인다.");
    }
    private void pourInCup() {
        System.out.println("컵에 담는다.");
    }

    protected abstract void brew();
    protected abstract void addCondiment();

    protected boolean customerWantsCondiments() {  // 후크, 사용하지 않는 서브 클래스는 항상 true를, 사용한다면 override로 구현
        return true;
    }
}
