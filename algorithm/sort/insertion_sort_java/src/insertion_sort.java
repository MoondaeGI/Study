import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class insertion_sort {
    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            int N = Integer.parseInt(br.readLine());
            int[] array = new int[N];

            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int i = 0; i < array.length; i++) {
                array[i] = Integer.parseInt(st.nextToken());
            }

            for (int i = 1; i < array.length; i++) {
                int index = i;
                int value = array[i];

                for (int j = 0; j < i; j++) {
                    if (value < array[j]) {
                        index = j;
                        break;
                    }
                }

                for (int j = index + 1; j < i; j++) {
                    array[j] = array[j - 1];
                }
                array[index] = value;
            }
         }
    }
}
