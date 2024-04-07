#pragma once

void sortFromArray(int data[], int size, int position){
  bool working;
  int temp;
  for(int i = 0; i < size-1-position; i++){
    working = false;
    for(int j = position; j < size-1-i; j++){
      if(data[j] > data[j+1]){
        temp = data[j+1];
        data[j+1] = data[j];
        data[j] = temp;
        working = true;
      }
    }
    if(!working){
      break;
    }
  }
}
