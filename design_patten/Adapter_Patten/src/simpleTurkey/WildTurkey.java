package simpleTurkey;

public class WildTurkey implements SimpleTurkey{
    @Override
    public void gobble() {
        System.out.println("골골");
    }

    @Override
    public void lessFly() {
        System.out.println("조금만 난다.");
    }
}
