/*
* git submodule add git@github.com:google/googletest.git
* git submodule init
* git submodule update
* g++ -std=c++11 -isystem ./googletest/googletest/include/ -I ./googletest/googletest/ -pthread -c ./googletest/googletest/src/gtest-all.cc
* ar -rv libtest.a gtest-all.o
* g++ -std=c++11 -isystem ./googletest/googletest/include/ -pthread gcd.cpp libtest.a
*
*/

#include <iostream>

#include <gtest/gtest.h>

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

int gcd_extend_a(int m, int n) {
    int a, aprime, b, bprime,c, d, q, r;

    aprime = b = 1;
    a = bprime = 0;
    c = m;
    d = n;

    while(true) {
        q = c / d;
        r =  c % d;

        if (r == 0) {
            return a;
        }

        c = d;
        d = r;
        int t = aprime;
        aprime = a;
        a = t - (q * a);
        t = bprime;
        bprime = b;
        b = t - (q * b); 
    }
}

int gcd_extend_b(int m, int n) {
    int a, aprime, b, bprime,c, d, q, r;

    aprime = b = 1;
    a = bprime = 0;
    c = m;
    d = n;

    while(true) {
        q = c / d;
        r =  c % d;

        if (r == 0) {
            return b;
        }

        c = d;
        d = r;
        int t = aprime;
        aprime = a;
        a = t - (q * a);
        t = bprime;
        bprime = b;
        b = t - (q * b); 
    }
}

TEST(GCDTest, gcdverify) {
    EXPECT_EQ(17, gcd(544, 119));
}

TEST(GCDTest, gcdextendverify) {
    EXPECT_EQ(5,   gcd_extend_a(1769, 551));
    EXPECT_EQ(-16, gcd_extend_b(1769, 551));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);

    cout << "Hello, world!" << endl;

    cout << gcd(544, 119) << endl;

    return RUN_ALL_TESTS();
}
