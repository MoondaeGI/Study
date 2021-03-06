package selectionSort;

import java.io.*;
import java.util.StringTokenizer;

public class SelectionSort {
    private static int[] array;

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

    private static void selectionSort() {
        for (int i = 0; i < array.length; i++) {
            int minPoint = i;
            for (int j = i; j < array.length; j++) {
                if (array[minPoint] > array[j]) {
                    minPoint = j;
                }
            }
            swap(minPoint, i);
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
