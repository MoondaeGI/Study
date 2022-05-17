import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;


// 주어진 N개의 수에서 다른 수의 합으로 표현되는 수가 총 몇개인지 구하는 알고리즘
// O(nlgn)의 시간복잡도를 가진 알고리즘
public class Example2 {
    public static void main(String[] args) throws IOException {
        InputStreamReader in = new InputStreamReader(System.in);
        BufferedReader bf = new BufferedReader(in);
        Scanner sc = new Scanner(System.in);

        int list_length = sc.nextInt();  // 수의 개수
        int[] array = new int[list_length];
        System.out.println("list_length: "+ array.length);

        String s = bf.readLine();
        StringTokenizer st = new StringTokenizer(s);
        for (int i=0; i<array.length; ++i) {
            array[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(array);  // 리스트 정렬

        int start_point, end_point;
        int sum, answer;
        int count = 0;

        for (int i=0; i<array.length; i++) {
            start_point = 0;
            end_point = i;  // 현재 값의 index
            sum = array[start_point] + array[end_point];
            answer = array[i];
            System.out.println("current answer: " + answer + " current count: " + count);
            System.out.println("===================================");

            while (start_point < end_point) {
                System.out.println("start_point: " + start_point);
                System.out.println("end_point: " + end_point);

                if (sum == answer) {
                    System.out.println("find");
                    System.out.println("increase count");
                    count++;
                    break;
                } else if (sum > answer) {
                    System.out.println("not found");
                    System.out.println("reduce end_point");
                    sum -= array[end_point--];
                    sum += array[end_point];
                } else {
                    System.out.println("not found");
                    System.out.println("increase start_point");
                    sum -= array[start_point++];
                    sum += array[start_point];
                }
                System.out.println(" ");
            }
        }
        System.out.println("result: " + count);
        bf.close();
    }
}
