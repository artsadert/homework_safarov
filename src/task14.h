#pragma once

void eraseFromArray(int data[], int& size, int position){
  for(int i = position; i < size-1; i++){
    data[i] = data[i+1];
  }
  size -= 1;
}

void eraseFromArray(double data[], int& size, int position){
  for(int i = position; i < size-1; i++){
    data[i] = data[i+1];
  }
  size -= 1;
}
