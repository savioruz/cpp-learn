// Copyright © 2022 Rill
// My progress learning on c++
// Follow me on twitter : https://twitter.com/rill_blastmith

#include <iostream>

using namespace std;

int main() {
    float p, l;
    p=5.;
    l=12.;

    // luas persegi
    float area= p * l;
    printf("Luas = %g * %g = %g\n", p, l, area);

    // normal operator
    area= area + 10;
    area= area - 10;
    area= area * 2;
    area= area / 2;
    printf("%g\n", area);

    // assigment operator
    area += 10;
    area -= 10;
    area *= 2;
    area /= 2;
    printf("%g\n", area);

    // error invalid operand since type float 
    // area %= 9; -> 6
    // to solve -> area variabel must be int
    area = float(int(area) % 9);
    printf("%g", area);
}