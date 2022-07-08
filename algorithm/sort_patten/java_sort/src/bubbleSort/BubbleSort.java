package bubbleSort;

import java.util.Scanner;

public class BubbleSort {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {

            int N = sc.nextInt();
            int[] sort_array = new int[N];

            for (int i =0; i<sort_array.length; i++) {
                sort_array[i] = sc.nextInt();
            }

            for (int i = 0; i < N - 1; i++) {
                for (int j = 0; j < N - 1 - i; j++) {
                    if (sort_array[j] > sort_array[j + 1]) {
                        int temp = sort_array[j];
                        sort_array[j] = sort_array[j + 1];
                        sort_array[j + 1] = temp;
                    }
                }
            }

            for (int stNum : sort_array) {
                System.out.println(stNum);
            }
        }
    }
}
