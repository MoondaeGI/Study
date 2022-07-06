package enumSingleTon;

import normalSinglTon.NormalChocolateBoiler;

public enum EnumChocolateBoiler {
    ENUM_CHOCOLATE_BOILER;

    private Boolean empty;
    private Boolean boiled;

    private EnumChocolateBoiler() {
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
