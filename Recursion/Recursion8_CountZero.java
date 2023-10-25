package Recursion;

public class Recursion8_CountZero {
    public static void main(String[] args) {
        int ans = CountZero(100002, 0);
        System.out.println(ans);
    }
    static int CountZero(int n, int sum) {
        if (n == 0) {
            return sum;
        }
        if (n%10 == 0) {
            return CountZero(n / 10, sum + 1);
        }
        return CountZero(n / 10, sum);
    }
}
