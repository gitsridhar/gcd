use std::mem::swap;

fn gcd(mut m: u64, mut n: u64) -> u64 {
    if m == 0 {
        return n;
    }
    if n == 0 {
        return m;
    }

    while n != 0  {
        if m < n {
            swap(&mut m, &mut n);
        }
        m = m % n;

        if m == 0 {
            return n
        }
    }
    m
}

fn main() {
    println!("GCD function is defined. Uncomment the example usage in main to test it.");

    let a =  42;
    let mut b = 14;

    b = b % a;
    println!("The value of b after b % a is: {}", b);

    let num1: u64 = 56;
    let num2: u64 = 98;

    let result = gcd(num1, num2);

    println!("The greatest common divisor of {} and {} is: {}", num1, num2, result);

    // Another example
    let num3: u64 = 15;
    let num4: u64 = 30;
    let result2 = gcd(num3, num4);
    println!("The greatest common divisor of {} and {} is: {}", num3, num4, result2);
}
