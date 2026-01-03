import Foundation

/// Calculates the Greatest Common Divisor (GCD) of two integers using the Euclidean algorithm.
///
/// The algorithm is based on the principle that gcd(a, b) = gcd(b, a % b).
/// It uses recursion until the remainder is 0.
///
/// - Parameters:
///   - a: The first integer.
///   - b: The second integer.
/// - Returns: The greatest common divisor of a and b.
func gcd(_ a: Int, _ b: Int) -> Int {
    // Ensure 'a' is always greater than or equal to 'b' for consistent modulo operation
    let larger = max(a, b)
    let smaller = min(a, b)
    let remainder = larger % smaller

    if remainder != 0 {
        return gcd(smaller, remainder)
    } else {
        // If the remainder is 0, the smaller number is the GCD
        return smaller
    }
}

// In a command-line tool project or Swift Playground, top-level code acts as the 'main' entry point.

// --- Main execution block (equivalent to a main function) ---

print("GCD Calculator")

let num1 = 52
let num2 = 39
let result1 = gcd(num1, num2)
print("The GCD of \(num1) and \(num2) is: \(result1)") // Expected: 13

let num3 = 228
let num4 = 36
let result2 = gcd(num3, num4)
print("The GCD of \(num3) and \(num4) is: \(result2)") // Expected: 12

let num5 = 1
let num6 = 100
let result3 = gcd(num5, num6)
print("The GCD of \(num5) and \(num6) is: \(result3)") // Expected: 100

// Example for an array of numbers using Swift's reduce function
let numbers = [51357, 3819, 171]
// Initial value for reduce should be a non-zero number from the array or an identity (like 0 if handling edge cases)
if let firstNum = numbers.first {
    let arrayGCD = numbers.dropFirst().reduce(firstNum) { currentGCD, nextNum in
        gcd(currentGCD, nextNum)
    }
    print("The GCD of \(numbers) is: \(arrayGCD)") // Expected: 57
}
