// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    int x=6;
    int y=10;

    // and
    cout << "x & y = " << (x & y) << endl;

    // or
    cout << "x | y = " << (x | y) << endl;

    // xor
    cout << "x ^ y = " << (x ^ y) << endl;

    // negation/not
    cout << "~x = " << (~x) << endl;
    cout << "~y = " << (~y) << endl;

    // shift left
    cout << "x << y = " << (x << y) << endl;

    // shift right
    cout << "x >> y = " << (x >> y) << endl;
}