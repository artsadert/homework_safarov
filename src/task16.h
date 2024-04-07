#pragma once
#include <iostream>

using namespace std;

void matrixMultiplier(int a[][100], int n1, int m1, int b[][100], int n2, int m2, int c[][100] ){
  for(int i1 = 0; i1 < n1; i1++){
    for(int i2 = 0; i2 < m2; i2++){
      int sum = 0;
      for(int j1 = 0; j1 < n2; j1++){
        sum += a[i1][j1] * b[j1][i2];
        cout<<a[i1][j1]<<" "<<b[j1][i2]<<"\n";
      }
      c[i1][i2] = sum;
    }
  }
}
