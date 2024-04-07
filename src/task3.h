#pragma once
#include <iostream>
using namespace std;


void fillArray(int data[], int size, int value = 0) {
    for (int i = 0; i < size; i++) {
        data[i] = value;
    }
}


void fillArray(double data[], int size, double value = 0) {
    for (int i = 0; i < size; i++) {
        data[i] = value;
    }
}

