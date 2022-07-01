package normalSinglTon;

public class NormalChocolateBoiler {
    private Boolean empty;
    private Boolean boiled;

    private static NormalChocolateBoiler normalChocolateBoiler = new NormalChocolateBoiler();

    public static NormalChocolateBoiler getInstance() {
        return normalChocolateBoiler;
    }

    private NormalChocolateBoiler() {
        empty = true;
        boiled = false;
    }

    public void fill() {
        if (isEmpty()) {
            empty = false;
            boiled = false;
        }
    }

    public void boil() {
        if (!isEmpty() && !isBoiled()) {
            boiled = true;
        }
    }

    public Boolean isEmpty() {
        return empty;
    }

    public Boolean isBoiled() {
        return boiled;
    }
}
