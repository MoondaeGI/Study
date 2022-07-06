package quickSort;

public class QuickSort {
    public static int[] array;
    int startPoint;
    int endPoint;

    public QuickSort(int[] array) {
        this.array = array;
        startPoint = 0;
        endPoint = array.length - 1;
    }

    public int[] quickSort() {
        quickSort(startPoint, endPoint);
        return array;
    }

    private static void quickSort(int startPoint, int endPoint) {
        if (endPoint - startPoint < 1) return;

        int pivotIndex = startPoint + (endPoint - startPoint) / 2;
        int pivot = array[pivotIndex];
        swap(pivotIndex, endPoint);

        int swapPoint = startPoint;
        for (int i = startPoint; i < endPoint; i++) {
            if (array[i] < pivot) {
                swap(swapPoint++, i);
            }
        }
        swap(swapPoint, endPoint);

        quickSort(startPoint, swapPoint);
        quickSort(swapPoint + 1, endPoint);
    }

    private static void swap(int a, int b) {
        int temp = array[a];
        array[a] = array[b];
        array[b] = temp;
    }
}
