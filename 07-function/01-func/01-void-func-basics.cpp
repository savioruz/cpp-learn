// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int N;

void showN() {
    printf("showN\t: N is %d\n", N);
}

void incN() {
    N++;
}

int main() {
    // basic user defined function
    // this will print 0 coz defaul value of N
    showN();
    incN();
}

// Note : you cant declared a function within the same name
// void incN() {
//     N++;
// }