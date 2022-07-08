package bucketSort;

import java.io.*;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.StringTokenizer;

public class BucketSort {
    public static int[] array;
    private static List<Integer>[] buckets = new ArrayList[10];

    public static void main(String[] args) throws IOException {
        try (BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in))) {
            int N = Integer.parseInt(bufferedReader.readLine());
            array = new int[N];

            StringTokenizer stringTokenizer = new StringTokenizer(bufferedReader.readLine());
            for (int i = 0; i < N; i++) {
                array[i] = Integer.parseInt(stringTokenizer.nextToken());
            }

            bucketSort();
            printArray();
        }
    }

    private static void bucketSort() {
        for (int arrayNumber : array) {
            int bucketIndex = (int)(arrayNumber / 10);
            if (buckets[bucketIndex] == null)
                buckets[bucketIndex] = new ArrayList<>();

            buckets[bucketIndex].add(arrayNumber);
            buckets[bucketIndex].sort(Comparator.naturalOrder());
        }

        int arrayIndex = 0;
        for (List<Integer> bucket : buckets) {
            if (bucket != null) {
                for (int bucketNumber : bucket) {
                    array[arrayIndex++] = bucketNumber;
                }
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
