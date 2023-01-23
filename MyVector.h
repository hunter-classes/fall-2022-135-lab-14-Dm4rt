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
  void pop_back(T n);
  void pop_back();
  void clear();
 private:
  T values[];
  int curSize;
};
