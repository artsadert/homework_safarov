#pragma once

void insertInArray(int data[], int& size, int position, int num){
  for(int i = size; i > position; i--){
    data[i] = data[i-1];
  }
  data[position] = num;
  size += 1;
}

void insertInArray(double data[], int& size, int position, double num){
  for(int i = size; i > position; i--){
    data[i] = data[i-1];
  }
  data[position] = num;
  size += 1;
}
