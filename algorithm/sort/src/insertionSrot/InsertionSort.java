package insertionSrot;

import java.io.*;
import java.util.StringTokenizer;

public class InsertionSort {
    private static int[] array;

    public static void main(String[] args) throws IOException {
        try(BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in))) {
            int N = Integer.parseInt(bufferedReader.readLine());
            array = new int[N];

            StringTokenizer stringTokenizer = new StringTokenizer(bufferedReader.readLine());
            for (int i = 0; i < N; i++) {
                array[i] = Integer.parseInt(stringTokenizer.nextToken());
            }
            insertionSort();

            printArray();
        }
    }

    private static void insertionSort() {
        for (int i = 1; i < array.length; i++) {
            int currentIndex = i;
            int currentValue = array[i];
            for (int j = 0; j < i; j++) {
                if (currentValue < array[j]) {
                    currentIndex = j;
                    break;
                }
            }

            if (currentIndex != i) {
                for (int j = i; j > currentIndex; j--) {
                    array[j] = array[j - 1];
                }
                array[currentIndex] = currentValue;
            }
        }
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
