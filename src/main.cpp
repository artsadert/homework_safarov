#include <iostream>
#include "task13.h"

using namespace std;

int main(){
  int data[100];
  int size;
  cin >> size;
  for(int i = 0; i < size; i++){
    cin >> data[i];
  }
  int pos, num;
  cin >> pos >> num;

  insertInArray(data, size, pos, num);
  for(int i = 0; i < size; i++){
    cout << data[i] << " ";
  }
  cout << "\n";
  return 0;
}
