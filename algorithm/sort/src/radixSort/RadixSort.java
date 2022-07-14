package radixSort;

import java.io.*;
import java.util.ArrayList;
import java.util.List;
import java.util.Queue;
import java.util.StringTokenizer;

public class RadixSort {
    private static int[] array;

    public static void main(String[] args) throws IOException {
        try (BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in))) {
            int N = Integer.parseInt(bufferedReader.readLine());
            array = new int[N];

            StringTokenizer stringTokenizer = new StringTokenizer(bufferedReader.readLine());
            for (int i = 0; i < N; i ++) {
                array[i] = Integer.parseInt(stringTokenizer.nextToken());
            }

            radixSort(5);
            printArray();
        }
    }

    private static void radixSort(int maxDigit) {

        int digit = 1;
        
        int count = 0;
        while (count != maxDigit) {
            List<Integer>[] buckets = new ArrayList[10];

            for (int arrayNumber : array) {
                int index = (arrayNumber / digit) % 10;

                if (buckets[index] == null) {
                    buckets[index] = new ArrayList<>();
                }
                buckets[index].add(arrayNumber);
            }

            int arrayIndex = 0;
            for (List<Integer> bucket : buckets) {
                if (bucket != null) {
                    for (int bucketNumber : bucket) {
                        array[arrayIndex++] = bucketNumber;
                    }
                }
            }

            digit *= 10;
            count++;
        }
    }

    private static void printArray() throws IOException {
        try (BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out))) {
            for (int sortedNumber : array) {
                bufferedWriter.write(sortedNumber + " ");
            }
            bufferedWriter.flush();
        }
    }
}
