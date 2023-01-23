#pragma once
#include <iostream>
template <class T>
class MyVector{

 public:
  MyVector();
  int size();
  int capacity();
  bool empty();
  void push_back(T item);
  void pop_back();
  void pop_back(int n);
  void clear();
  T operator [](int index);
 private:
  const static int maxCapacity=100;
  int curSize;
  T values[maxCapacity];
};

#include "MyVector.cxx"
