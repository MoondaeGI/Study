package bucketSort;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

public class BucketSort {
    private static List<Integer>[] buckets = new ArrayList[10];
    public static int[] array;

    public BucketSort(int[] array) {
        this.array = array;
    }

    public int[] bucketSort() {
        for (int arrayNumber : array) {
            int index = (int)(arrayNumber / 10);
            if (buckets[index] == null) {
                buckets[index] = new ArrayList<>();
            }

            buckets[index].add(arrayNumber);
            buckets[index].sort(Comparator.naturalOrder());
        }

        int arrayIndex = 0;
        for (List<Integer> bucket : buckets) {
            if (bucket != null) {
                for (int bucketNumber : bucket) {
                    array[arrayIndex++] = bucketNumber;
                }
            }
        }

        return array;
    }
}
