#include <iostream>

using namespace std;
int gcd(int m, int n) {
    int returnvalue = 0;

    while(true) {
        int remainder = m % n;

        if (remainder == 0) {
            return n;
        }
        m = n;
        n = remainder;
    }

    return returnvalue;
}
int main() {
    cout << "Hello, world!" << endl;

    cout << gcd(544, 119) << endl;
    return 0;
}
