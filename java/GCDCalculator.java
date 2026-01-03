public class GCDCalculator {

    /**
     * Calculates the Greatest Common Divisor (GCD) of two integers using the Euclidean algorithm.
     * The algorithm is based on the principle that the GCD of two numbers does not 
     * change if the larger number is replaced by its difference with the smaller number, 
     * or more efficiently, by the remainder of their division.
     *
     * @param a The first integer.
     * @param b The second integer.
     * @return The GCD of a and b.
     */
    public static int findGCD(int a, int b) {
        // Base case: if the second number (b) becomes 0, the first number (a) is the GCD.
        if (b == 0) {
            return a;
        }
        
        // Recursive call: the GCD of a and b is the same as the GCD of b and the remainder of a divided by b.
        return findGCD(b, a % b);
    }

    public static void main(String[] args) {
        int num1 = 56;
        int num2 = 98;
        
        // Ensure numbers are positive for standard GCD calculation, though Euclidean algorithm handles negatives correctly if Math.abs is used.
        num1 = Math.abs(num1);
        num2 = Math.abs(num2);

        int gcd = findGCD(num1, num2);

        System.out.println("The first number is: " + num1);
        System.out.println("The second number is: " + num2);
        System.out.println("The GCD of " + num1 + " and " + num2 + " is: " + gcd);
    }
}
