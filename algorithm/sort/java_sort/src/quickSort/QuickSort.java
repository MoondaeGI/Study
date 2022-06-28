package quickSort;

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;

public class QuickSort {

    public static void main(String[] args) throws IOException{
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
             BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
             Scanner sc = new Scanner(System.in);) {
            int N = Integer.parseInt(br.readLine());
            int[] arrays = new int[N];

            // StringTokenizer st = new StringTokenizer(br.readLine());
            for (int i = 0; i < N; i++) {
                arrays[i] = sc.nextInt();
                bw.write(arrays[i] + " ");
            }
            bw.flush();

            quickSort(arrays, 0, arrays.length - 2);

            for (int sortedNumber : arrays) {
                bw.write(sortedNumber + " ");
            }
            bw.flush();
        }
    }

    private static void quickSort(int[] array, int startPoint, int endPoint) {
        if (endPoint - startPoint <= 1) {
            return;
        }

        int pivotIndex = (endPoint + startPoint) / 2;
        int pivot = array[pivotIndex];

        swap(array, pivotIndex, endPoint);

        int changeIndex = 0;
        for (int i = startPoint; i < endPoint; i++) {
            if (pivot < array[i]) {
                swap(array, changeIndex++, i);
            }
        }

        swap(array, changeIndex, endPoint);

        quickSort(array, startPoint, changeIndex - 1);
        quickSort(array, changeIndex, endPoint);
    }

    private static void swap(int[] array, int a, int b) {
        int temp = array[a];
        array[a] = array[b];
        array[b] = temp;
    }
}
