import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;


// 주어진 N개의 수에서 answer의 합을 가진 두개의 수의 갯수를 반환하는 알고리즘
// O(n)의 시간복잡도를 가진 알고리즘
public class Example1 {
    public static void main(String[] args) throws IOException {
        InputStreamReader in = new InputStreamReader(System.in);
        BufferedReader bf = new BufferedReader(in);
        Scanner sc = new Scanner(System.in);

        int length = sc.nextInt();  // 리스트 길이
        int answer = sc.nextInt();  // 원하는 값

        String s = bf.readLine();  // 리스트 값
        StringTokenizer st = new StringTokenizer(s);
        int[] array = new int[length];
        for (int i=0; i<length; i++) {
            array[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(array);  // 값 정렬

        int start_point = 0;
        int end_point = length -1;
        int count = 0;
        int sum = array[start_point] + array[end_point];

        while (start_point < end_point) {
            System.out.println("start_point: " + start_point);
            System.out.println("end_point: " + end_point);
            System.out.println("current count: " + count);
            System.out.println("====================================");

            if (sum == answer) {
                System.out.println("find");
                System.out.println("increase count");
                count++;
                sum = array[++start_point] + array[--end_point];  // 시작, 끝 포인터를 옮기고 합계
            } else if (sum > answer) {
                System.out.println("not fount");
                System.out.println("reduce end_point");
                sum -= array[end_point--];  // 끝 포인터를 옮기고 합계
                sum += array[end_point];
            } else {  // sum < answer
                System.out.println("not found");
                System.out.println("increase start_point");
                sum -= array[start_point++];  // 시작 포인터를 옮기고 합계
                sum += array[start_point];
            }
            System.out.println(" ");
        }
        System.out.println("result: " + count);
        bf.close();
    }
}
