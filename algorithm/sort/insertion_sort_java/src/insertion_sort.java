import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;

public class insertion_sort {
    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
             BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
             Scanner sc = new Scanner(System.in);) {

            int N = sc.nextInt();
            int[] array = new int[N];

            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int i = 0; i < N; i++) {
                array[i] = Integer.parseInt(st.nextToken());
            }


         }
    }
}
