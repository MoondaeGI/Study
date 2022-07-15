package templateWithHook.caffeineBeverageWithHook;

import templateWithHook.caffeineBeverageWithHook.CaffeineBeverageWithHook;

public class TeaNotUsingHook extends CaffeineBeverageWithHook {
    @Override
    protected void brew() {
        System.out.println("찻잎을 갈아서 끓인다.");
    }

    @Override
    protected void addCondiment() {
        System.out.println("레몬을 넣는다.");
    }
}
