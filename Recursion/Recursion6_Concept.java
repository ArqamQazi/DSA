package Recursion;

public class Recursion6_Concept {
    public static void main(String[] args) {
        fun(5);
    }
    static void fun(int n) {
        if (n == 0) {
            return;
        }
        System.out.println(n);
        fun(n--); // n-- != --n. n-- will call the function before the decrement the value
    }
}
