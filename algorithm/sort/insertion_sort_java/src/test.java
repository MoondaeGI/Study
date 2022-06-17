import static java.lang.Math.abs;

class test {
    public static void main(String[] args) {
        System.out.println(solution(new int[]{7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2}, "left"));

    }

    public static String solution(int[] numbers, String hand) {
        String answer = "";
        int leftThumb = 10;
        int rightThumb = 10;

        for (int number : numbers) {
            if (number == 1 || number == 4 || number == 7) {
                answer += "L";
                leftThumb = number;
            }
            else if (number == 3 || number == 6 || number == 9) {
                answer += "R";
                rightThumb = number;
            }

            else {
                int rightDistance = findDistance(rightThumb, number);
                int leftDistance = findDistance(leftThumb, number);

                if (rightDistance == leftDistance) {
                    if (hand == "left") {
                        answer += "L";
                        leftThumb = number;
                    }
                    else {
                        answer += "R";
                        rightThumb = number;
                    }
                }

                else {
                    if (rightDistance < leftDistance) {
                        answer += "R";
                        rightThumb = number;
                    }
                    else {
                        answer += "L";
                        leftThumb = number;
                    }
                }
            }
        }

        return answer;
    }

    static int findDistance(int start, int target) {
        if (start == 0) {
            start = 11;
        }
        if (target == 0) {
            target = 11;
        }

        int startRow = start % 3;
        int startHeight = start / 3;

        int targetRow = target % 3;
        int targetHeight = target / 3;

        if (startRow == 0) {
            startHeight -= 1;
            startRow = 3;
        }

        return abs(startRow - targetRow) + abs(startHeight - targetHeight);
    }

}