package insertionSort;

import java.io.*;
import java.util.StringTokenizer;

public class InsertionSort {
    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
             BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));) {

            int N = Integer.parseInt(br.readLine());
            int[] arrays = new int[N];

            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int i = 0; i < N; i++) {
                arrays[i] = Integer.parseInt(st.nextToken());
            }

            for (int i = 1; i < N; i++) {
                int selectIndex = i;
                int selectValue = arrays[i];

                for (int j = 0; j < i; j++) {
                    if(selectValue < arrays[j]) {
                        selectIndex = j;
                        break;
                    }
                }

                if (selectIndex != i) {
                    for (int j = i - 1; j > selectIndex; j--) {
                        arrays[j] = arrays[j - 1];
                    }

                    arrays[selectIndex] = selectValue;
                }
            }

            for (int sortedNumber : arrays) {
                bw.write(sortedNumber + " ");
            }

            bw.flush();
        }
    }
}
