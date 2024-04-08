#include <iostream>

using namespace std;


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

void matrixMultiplier(int a[][100], int n1, int m1, int b[][100], int n2, int m2, int c[][100] ){
  for(int i1 = 0; i1 < n1; i1++){
    for(int i2 = 0; i2 < m2; i2++){
      int sum = 0;
      for(int j1 = 0; j1 < n2; j1++){
        sum += a[i1][j1] * b[j1][i2];
        //cout<<a[i1][j1]<<" "<<b[j1][i2]<<"\n";
      }
      c[i1][i2] = sum;
    }
  }
}

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
