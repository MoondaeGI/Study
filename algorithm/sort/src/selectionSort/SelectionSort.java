package selectionSort;

import java.io.*;
import java.util.StringTokenizer;

public class SelectionSort {
    private static int[] array;

    private static void selectionSort() {
        for (int i = 0; i < array.length; i++) {
            int selectIndex = i;
            for (int j = i; j < array.length; j++) {
                if (array[selectIndex] > array[j]) {
                    selectIndex = j;
                }
            }
            swap(i, selectIndex);
        }
    }

    public static void main(String[] args) throws IOException {
        try(BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in))) {
            int N = Integer.parseInt(bufferedReader.readLine());
            array = new int[N];

            StringTokenizer stringTokenizer = new StringTokenizer(bufferedReader.readLine());
            for (int i = 0; i < N; i++) {
                array[i] = Integer.parseInt(stringTokenizer.nextToken());
            }

            selectionSort();
            printArray();
        }
    }

    private static void printArray() throws IOException {
        try (BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out))) {
            for (int number : array) {
                bufferedWriter.write(number + " ");
            }
            bufferedWriter.flush();
        }
    }

    private static void swap(int a, int b) {
        int temp = array[a];
        array[a] = array[b];
        array[b] = temp;
    }
}
