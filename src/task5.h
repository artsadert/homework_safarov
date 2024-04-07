#pragma once
#include <iostream>
using namespace std;


void combineArrays(int data1[], int& size1, int data2[], int size2) {
    for (int i = 0; i < size2; i++) {
        data1[size1 + i] = data2[i];
    }
    size1 += size2;
}


void combineArrays(double data1[], int& size1, double data2[], int size2) {
    for (int i = 0; i < size2; i++) {
        data1[size1 + i] = data2[i];
    }
    size1 += size2;
}

