#pragma once
#include <iostream>
using namespace std;


void arrayCopy(int data1[], int size, int data2[]) {
    for (int i = 0; i < size; i++) {
        data2[i] = data1[i];
    }
}


void arrayCopy(double data1[], int size, double data2[]) {
    for (int i = 0; i < size; i++) {
        data2[i] = data1[i];
    }
}

