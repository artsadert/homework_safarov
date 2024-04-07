#pragma once 

bool isArraySymmetrical(int arr[][100], int size){
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      if(arr[i][j] != arr[size-j-1][size-i-1]){
        return false;
      }
    }
  } 


  return true;
}
