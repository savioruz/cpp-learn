// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    char nim[10], jenisKelamin[1];
    int umur;

    printf("Masukkan NIM : ");
    scanf("%10s", nim);
    printf("Masukkan umur : ");
    scanf("%2i", &umur);
    printf("Masukkan jenis kelamin [L/P] : ");
    scanf("%2s", jenisKelamin);

    printf("\n=====Data Mahasiswa UAD=====\n");
    printf("NIM\t\t: %s\n", nim);
    printf("Umur\t\t: %i\n", umur);
    printf("Jenis Kelamin\t: %s", jenisKelamin);
}