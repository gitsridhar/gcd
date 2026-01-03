package main

import (
	"fmt"
)

// gcd calculates the greatest common divisor (GCD) using the Euclidean algorithm.
func gcd(a, b int) int {
	for b != 0 {
		a, b = b, a%b // Simultaneous assignment to update a and b
	}
	return a
}

func main() {
	// Example usage
	num1 := 48
	num2 := 18
	result1 := gcd(num1, num2)
	fmt.Printf("The GCD of %d and %d is: %d\n", num1, num2, result1) // Output: The GCD of 48 and 18 is: 6

	num3 := 20
	num4 := 8
	result2 := gcd(num3, num4)
	fmt.Printf("The GCD of %d and %d is: %d\n", num3, num4, result2) // Output: The GCD of 20 and 8 is: 4
}
