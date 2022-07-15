// Template Method Patten
/*
    공통적인 알고리즘이 사용되었을 경우, final을 사용해 고정시키고 알고리즘을 구현하는 메소드를 작성한다.
    세부적인 부분이 다를 경우, 추상 메소드화 시켜 이 클래스를 상속받은 서브 클래스 내부에서 구현한다.
    공통적인 부분은 이 클래스 내부에서 메소드로 만들어 정의한다.
    후에 다른 서브 클래스를 만들 수 있는 프레임워크를 제공할 수 있다.
*/
package templateNoHook.caffeineBeverage;

public abstract class CaffeineBeverage {
    // Template Method
    public final void prepareRecipe() {
        boilWater();
        brew();
        pouInCup();
        addCondiments();
    }

    protected abstract void brew();  // 서브 클래스마다 다른 구성은 추상 메소드로 처리
    protected abstract void addCondiments();

    private void boilWater() {  // 공통적인 부분은 이 클래스에서 구현한다
        System.out.println("물을 끓인다.");
    }
    private void pouInCup() {
        System.out.println("컵에 담는다.");
    }
}
