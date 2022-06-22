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

    public static void quickSort(int[] arrays, int startNumber, int endNumber) {
        if (endNumber - startNumber <= 1) {
            return;
        }

        int startPoint = startNumber;
        int endPoint = endNumber;

        int pivotIndex = endPoint + 1;
        int pivot = arrays[pivotIndex];

        while (startPoint < endPoint) {
            while (arrays[startPoint] <= pivot) {
                startPoint++;
            }

            while (arrays[endPoint] > pivot) {
                endPoint--;
            }

            int temp = arrays[startPoint];
            arrays[startPoint] = arrays[endPoint];
            arrays[endPoint] = temp;
        }

        int changIndex;
        if (arrays[startPoint] < pivot) {
           changIndex = startPoint + 1;
        } else {
            changIndex = startPoint;
        }

        int temp = arrays[changIndex];
        arrays[changIndex] = arrays[pivotIndex];
        arrays[pivotIndex] = temp;

        quickSort(arrays, startNumber, changIndex - 1);
        quickSort(arrays, changIndex, endNumber);
    }
}
