package menuComponent;
// 줄기, 잎 구성을 같이 상속하기 위해서 둘 모두의 내용을 담은 추상 클래스 생성
// 단일 책임의 원칙에 위배되지만, 클라이언트로 하여금 줄기, 잎을 구분하지 않아도 될 수 있는 환경이 제공 가능함
// 줄기와 잎에서는 상속받지 않는 내용을 UnsupportedOperationException을 일으킬 수 있도록 구현
// 서로가 상속받는 부분에서는 오버라이딩을 통해 에러를 피할 수 있도록 함

public abstract class MenuComponent {
    // 줄기의 필요 메소드를 생성
    public void add(MenuComponent menuComponent) {
        throw new UnsupportedOperationException();
    }
    public void remove(MenuComponent menuComponent) {
        throw new UnsupportedOperationException();
    }
    public MenuComponent getChild(int i) {
        throw new UnsupportedOperationException();
    }

    // 잎의 필요 메소드를 생성
    public String getName() {
        throw new UnsupportedOperationException();
    }
    public String getDescription() {
        throw new UnsupportedOperationException();
    }
    public double getPrice() {
        throw new UnsupportedOperationException();
    }
    public boolean isVegetarian() {
        throw new UnsupportedOperationException();
    }

    // 둘 모두에게 필요한 작업 메소드
    public abstract void print();
}
