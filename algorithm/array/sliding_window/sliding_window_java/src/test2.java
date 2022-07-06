import java.io.*;
import java.util.Scanner;
import java.util.Stack;


public class test2 {
    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        Scanner sc = new Scanner(System.in);

        long N = sc.nextLong();
        System.out.println(N + "count start");

        Stack<Integer> stack = new Stack<>();
        int number = 1;

        for (int i=0; i<N; i++) {
            long requiredNum = sc.nextLong();

            if (number == N) {
                System.out.println("cant make NumberList");
                break;
            }

            if (stack.isEmpty() || requiredNum > number) {
                while (requiredNum >= number) {
                    stack.push(number);
                    System.out.println("push!" + number++);
                }
                System.out.println("pop!" + number);
                bw.write(stack.pop() + " ");
            } else {
                int pop = stack.pop();
                System.out.println("pop!" + pop);
                if (requiredNum >= pop) {
                    bw.write(pop + " ");
                } else {
                    System.out.println("No");
                    bw.close();
                    break;
                }
            }
        }

        try {
            bw.flush();
            bw.close();
            sc.close();
        } catch(Exception e) {
            throw e;
        }

    }
}
