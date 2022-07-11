package templateWithHook.caffeineBeverageWithHook;

import templateWithHook.caffeineBeverageWithHook.CaffeineBeverageWithHook;

import java.util.Objects;
import java.util.Scanner;

public class CoffeeUsingHook extends CaffeineBeverageWithHook {
    Scanner scanner = new Scanner(System.in);
    @Override
    protected void brew() {
        System.out.println("커피를 갈아서 끓인다.");
    }

    @Override
    protected void addCondiment() {
        System.out.println("설탕과 크림을 넣는다.");
    }

    @Override
    protected boolean customerWantsCondiments() {
        System.out.println("커피에 설탕과 프림을 넣으시겠습니까?");
        String answer = scanner.next();

        return answer.equals("Y");
    }
}
