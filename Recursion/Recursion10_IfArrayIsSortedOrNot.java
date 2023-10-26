package Recursion;

public class Recursion10_IfArrayIsSortedOrNot {
    public static void main(String[] args) {
        int arr[] = {1, 2, 3, 4, 2};
        boolean ans = isSorted(arr);
        System.out.println(ans);
    }
    static boolean isSorted(int[] arr) {
        return helper(arr, 0);
    }
    static boolean helper(int[] arr, int index) {
        if (index == (arr.length - 1)) {
            return true;
        }

        return arr[index] < arr[index + 1] && helper(arr, index + 1);
    }
}
