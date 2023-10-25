package Recursion;
// sum of digit
// 123 -> 1 + 2 + 3 = 6
// f(n) = f(n/10) + (n%10)
public class Recursion5_SumOfDigit {
    public static void main(String[] args) {
        int ans = sumOfDigit(1234);
        System.out.println(ans);
    }
    static int sumOfDigit(int n) {
        if (n == 0) {
            return 0;
        }
        return sumOfDigit(n / 10) + (n%10);
    }
}
