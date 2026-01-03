def gcd(a, b):
    """
    Calculates the Greatest Common Divisor (GCD) of two numbers 
    using the iterative Euclidean algorithm.
    """
    while b != 0:
        # Update a and b: a becomes b, and b becomes the remainder of a % b
        a, b = b, a % b
    return a

if __name__ == "__main__":
    # Main section for testing the function
    num1 = 54
    num2 = 24
    result = gcd(num1, num2)
    print(f"The GCD of {num1} and {num2} is: {result}") # Output: The GCD of 54 and 24 is: 6

    num3 = 101
    num4 = 49
    result2 = gcd(num3, num4)
    print(f"The GCD of {num3} and {num4} is: {result2}") # Output: The GCD of 101 and 49 is: 1
