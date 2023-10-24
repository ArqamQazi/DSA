package Recursion;

public class Recursion3_BinarySearch {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 55, 66, 77};
        int target = 3;
        int ans = BinarySearch(arr, target, 0, arr.length - 1);
        System.out.println(ans);
    }
    static int BinarySearch(int[] arr, int target, int s, int e) {
        if (s > e) {
            return -1;
        }
        int m = s + (e - s) / 2;
        if (target == arr[m]) {
            return m;
        }
        if (target > arr[m]) {
            return BinarySearch(arr, target, m + 1, e);
        }
        return BinarySearch(arr, target, s, m - 1);
    }
}
