/*
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

TEST(GCDTest, gcdverify) {
    EXPECT_EQ(17, gcd(544, 119));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);

    cout << "Hello, world!" << endl;

    cout << gcd(544, 119) << endl;

    return RUN_ALL_TESTS();
}
