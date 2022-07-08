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

    public void mergeSort() {
        mergeSort(startPoint, endPoint);
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

        int leftIndex = startPoint;
        int rightIndex = endPoint;

        for (int i = startPoint; i <= endPoint; i++) {
            if (mergeArray[leftIndex] < mergeArray[rightIndex]) {
                array[i] = mergeArray[leftIndex++];
            } else {
                array[i] = mergeArray[rightIndex--];
            }
        }
    }
}
