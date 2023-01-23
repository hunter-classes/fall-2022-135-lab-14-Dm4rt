#include <iostream>
#include "MyVector.h"

template <class T>
MyVector<T>::MyVector(){
  curSize=0;
}

template <class T>
int MyVector<T>::size(){
  return curSize;
}

template <class T>
int MyVector<T>::capacity(){
  return maxCapacity;
}

template <class T>
bool MyVector<T>::empty(){
  if(curSize==0){
    return true;
  }
  return false;
}

template <class T>
void MyVector<T>::push_back(T item){
  values[curSize]=item;
  curSize++;
  
}

template <class T>
void MyVector<T>::pop_back(){
  if(curSize>0){
    curSize--;
  }
}

template <class T>
void MyVector<T>::pop_back(int n){
  for(int x=0;x<n;x++){
    pop_back();
  }
}

template <class T>
void MyVector<T>::clear(){
  curSize=0;
}

template <class T>
T MyVector<T>::operator [](int index){
  if(index < curSize && curSize!=0){
    return values[index];
  }
  
}




