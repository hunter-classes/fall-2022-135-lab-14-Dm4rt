#include <iostream>
#include "MyVector.h"

int main(){
  MyVector<int> testVect;
  testVect.push_back(1);
  std::cout<< testVect[0] << std::endl;
  return  0;
}
