package quickSort;

public class QuickSort {
    public static int[] array;
    private static int startPoint;
    private static int endPoint;

    public QuickSort(int[] array) {
        this.array = array;
        startPoint = 0;
        endPoint = array.length - 1;
    }

    public void quickSort() {
        quickSort(startPoint, endPoint);
    }

    private static void quickSort(int startPoint, int endPoint) {
        if (endPoint - startPoint < 1) return;

        int pivotIndex = startPoint + (endPoint - startPoint) / 2;
        int pivot = array[pivotIndex];
        swap(pivotIndex, endPoint);

        int currentPoint = startPoint;
        for (int i = startPoint; i < endPoint; i++) {
            if (array[i] < pivot) {
                swap(i, currentPoint++);
            }
        }
        swap(currentPoint, endPoint);

        quickSort(startPoint, currentPoint);
        quickSort(currentPoint + 1, endPoint);
    }

    private static void swap(int a, int b) {
        int temp = array[a];
        array[a] = array[b];
        array[b] = temp;
    }
}
