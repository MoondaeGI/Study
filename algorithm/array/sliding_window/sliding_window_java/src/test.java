import java.io.*;
import java.util.Deque;
import java.util.LinkedList;
import java.util.StringTokenizer;


public class test {

    static class Node {
        public final int index;
        public final int value;

        private Node(int index, int value) {
            this.index = index;
            this.value = value;
        }
    }

    public static void main(String[] args) throws IOException {
        InputStreamReader in = new InputStreamReader(System.in);
        OutputStreamWriter ot = new OutputStreamWriter(System.out);
        BufferedReader bf = new BufferedReader(in);
        BufferedWriter bw = new BufferedWriter(ot);

        String s = bf.readLine();
        StringTokenizer st = new StringTokenizer(s);

        int N = Integer.parseInt(st.nextToken());  // N 크기
        int windowSize = Integer.parseInt(st.nextToken());  // window 크기

        Deque<Node> deque = new LinkedList<>();
        String numbers = bf.readLine();

        StringTokenizer st2 = new StringTokenizer(numbers);

        for (int i = 0; i < N; i++) {
            int currentValue = Integer.parseInt(st2.nextToken());

            while (!deque.isEmpty() && deque.getLast().value > currentValue) {
                deque.removeLast();
            }
            deque.addLast(new Node(i, currentValue));

            if (deque.getFirst().index <= i - windowSize) {
                deque.removeFirst();
            }

            bw.write(deque.getFirst().value + " ");
        }

        bw.flush();
        bw.close();
        bf.close();
    }
}




