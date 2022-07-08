package bubbleSort;

import java.io.*;
import java.util.StringTokenizer;

public class BubbleSort {
    private static int[] array;

    public static void main(String[] args) throws IOException {
        try(BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in))) {
            int N = Integer.parseInt(bufferedReader.readLine());
            array = new int[N];

            StringTokenizer stringTokenizer = new StringTokenizer(bufferedReader.readLine());
            for (int i = 0; i < N; i++) {
                array[i] = Integer.parseInt(stringTokenizer.nextToken());
            }
            bubbleSort();

            printArray();
        }
    }

    private static void bubbleSort() {
        for (int i = 0; i < array.length - 1; i++) {
            for (int j = 0; j < array.length - i - 1; j++) {
                if (array[j] > array[j + 1]) swap(j, j + 1);
            }
        }
    }

    private static void swap(int a, int b) {
        int temp = array[a];
        array[a] = array[b];
        array[b] = temp;
    }

    private static void printArray() throws IOException {
        try(BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out))) {
            for (int sortedNumber : array) {
                bufferedWriter.write(sortedNumber + " ");
            }
            bufferedWriter.flush();
        }
    }
}
