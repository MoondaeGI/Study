package mergeSort;

import java.io.*;
import java.util.StringTokenizer;

public class Main {
    private static int[] array;

    public static void main(String[] args) throws IOException {
        try(BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in))) {
            int N = Integer.parseInt(bufferedReader.readLine());
            array = new int[N];

            StringTokenizer stringTokenizer = new StringTokenizer(bufferedReader.readLine());
            for (int i = 0; i < N; i++) {
                array[i] = Integer.parseInt(stringTokenizer.nextToken());
            }

            MergeSort mergeSort = new MergeSort(array);
            mergeSort.mergeSort();

            printArray();
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
