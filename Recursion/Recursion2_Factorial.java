package Recursion;

public class Recursion2_Factorial {
    public static void main(String[] args) {
        int ans = Factorial(5);
        System.out.println(ans);
    }
    static int Factorial(int n) {
        if (n == 1) {
            return 1;
        }
        return Factorial(n - 1) * n;
    }
}
