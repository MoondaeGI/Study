package mergeSort;

public class MergeSort {
    public static int[] array;
    private static int[] mergeArray;
    private static int startPoint;
    private static int endPoint;

    public MergeSort(int[] array) {
        this.array = array;
        mergeArray = new int[array.length];
        startPoint = 0;
        endPoint = array.length - 1;
    }

    public int[] mergeSort() {
        mergeSort(startPoint, endPoint);
        return array;
    }

    private static void mergeSort(int startPoint, int endPoint) {
        if (startPoint == endPoint) return;

        int middlePoint = startPoint + (endPoint - startPoint) / 2;

        mergeSort(startPoint, middlePoint);
        mergeSort(middlePoint + 1, endPoint);

        int mergeArrayIndex = startPoint;
        for (int i = startPoint; i <= middlePoint; i++) {
            mergeArray[mergeArrayIndex++] = array[i];
        }
        for (int i = endPoint; i > middlePoint; i--) {
            mergeArray[mergeArrayIndex++] = array[i];
        }

        int leftPoint = startPoint;
        int rightPoint = endPoint;
        for (int i = startPoint; i <= endPoint; i++) {
            if (mergeArray[leftPoint] < mergeArray[rightPoint]) {
                array[i] = mergeArray[leftPoint++];
            } else {
                array[i] = mergeArray[rightPoint--];
            }
        }
    }
}
