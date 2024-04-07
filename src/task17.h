#pragma once
int minSumArray(int data[][100], int n, int m, bool row=true){
  long long res = 10000000000000;
  int index = 0;
  if(row){
    for(int i = 0; i < n; i++){
      long long temp_res = 0;
      for(int j = 0; j < m; j++){
        temp_res += data[i][j];
      }
      if(temp_res < res){
        res = temp_res;
        index = i;
      }
    } 
  }
  else{
    for(int i = 0; i < m; i++){
      long long temp_res = 0;
      for(int j = 0; j < n; j++){
        temp_res += data[j][i];
      }
      if(temp_res < res){
        res = temp_res;
        index = i;
      }

    }
  }
  return index;
}
