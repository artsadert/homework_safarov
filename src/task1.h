#pragma once
#include <iostream>
using namespace std;


void readArray(int data[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> data[i];
    }
}

void readArray(double data[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> data[i];
    }
}

