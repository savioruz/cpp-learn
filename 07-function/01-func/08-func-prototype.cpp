// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

// this is func prototype
// ignore warning xD
void penjumlahan(int, int);

int main() {
    // call func before declare it
    penjumlahan(2, 5);
    return 0;
}

// then define func
void penjumlahan(int a, int b) {
    printf("%d + %d = %d", a, b, a+b);
}