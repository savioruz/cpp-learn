// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    // output will be
    // 0
    // 1
    // 2
    // 3
    // 4
    // 5
    // 6
    // 7
    // 8
    // 9
    // coz we print i then i will be 0 as we declared it by zero value
    // if we print the code with i+1 then it will start from 0+1

    int i; // same as i = 0

    while (i < 10) {
        cout << i << endl;
        i++;
    }
}