// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

int main() {
    int i, j, max;

    printf("Masukkan batas angka : ");
    cin >> max;
    
    if (max > 30) {
        printf("Batas maksimum = 30");
    } else {
        // print tabel ke samping
        printf("%5s", "X");
        for (i = 1; i <= max; i++) {
            printf("%5d", i);
        }
    
        // print tabel ke bawah
        for (i = 1; i <= max; i++) {
            printf("\n%5d", i);
            
            // print hasil perkalian
            for (j = 1; j <= max; j++){
                printf("%5d", j*i);
            }
        }
    }
}