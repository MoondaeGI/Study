package dclSingleTon;

public class DCLChocolateBoiler {
    private Boolean empty;
    private Boolean boiled;

    private volatile static DCLChocolateBoiler dclChocolateBoiler;

    public static DCLChocolateBoiler getInstance() {
        if (dclChocolateBoiler == null) {
            synchronized (DCLChocolateBoiler.class) {
                if (dclChocolateBoiler == null) {
                    dclChocolateBoiler = new DCLChocolateBoiler();
                }
            }
        }

        return dclChocolateBoiler;
    }

    private DCLChocolateBoiler() {
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
