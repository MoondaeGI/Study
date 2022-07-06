package insertionSort;

import java.io.*;
import java.util.StringTokenizer;

public class InsertionSort {
    private static int[] array;

    private static void insertionSort() {
        for (int i = 1; i < array.length; i++) {
            int selectIndex = i;
            int selectValue = array[i];

            for (int j = 0; j < i; j++) {
                if (selectValue < array[j]) {
                    selectIndex = j;
                    break;
                }
            }

            if (selectIndex != i) {
                for (int j = i; j > selectIndex; j--) {
                    array[j] = array[j - 1];
                }
                array[selectIndex] = selectValue;
            }
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

            insertionSort();
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
}
