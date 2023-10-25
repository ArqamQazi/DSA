package Recursion;

public class Recursion7_ReverseNumber {
    public static void main(String[] args) {
        int ans = reverse2(123);
        System.out.println(ans);
    }
    static int sum = 0;
    static void reverse1(int n) {
        if (n == 0) {
            return;
        }
        int rem = n % 10;
        sum = rem + sum * 10;
        reverse1(n/10);
    }
    static int reverse2(int n) {
        int digits = (int) (Math.log10(n)) + 1;
        return helper(n, digits);
    }
    static int helper(int n, int digits) {
        if (n%10 == 0) {
            return n;
        }
        int rem = n % 10;
        return rem * (int) Math.pow(10, digits - 1) + helper(n / 10, digits - 1);
    }
}
