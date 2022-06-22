package selectionSort;

import java.io.*;
import java.util.StringTokenizer;

public class SelectionSort {
    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
             BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));) {

            int N = Integer.parseInt(br.readLine());
            int[] arrays = new int[N];

            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int i = 0; i < N; i++) {
                arrays[i] = Integer.parseInt(st.nextToken());
            }

            for (int i = 0; i < N; i++) {
                int min = i;
                for (int j = i; j < N; j++) {
                    if (arrays[min] > arrays[j]) {
                        min = j;
                    }
                }

                int temp = arrays[min];
                arrays[i] = arrays[min];
                arrays[min] = temp;

                bw.write(arrays[i] + " ");
            }

            bw.flush();
        }
    }
}
