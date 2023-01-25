#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "doctest.h"
#include "MyVector.h"

TEST_CASE("push_back(item)"){
  MyVector<int> intVect;
  CHECK(intVect.size()==0);
  intVect.push_back(2);
  CHECK(intVect[0]==2);
  intVect.push_back(5);
  CHECK(intVect[1]==5);

  MyVector<double> doubleVect;
  CHECK(doubleVect.size()==0);
  doubleVect.push_back(2.0);
  CHECK(doubleVect[0]==2.0);
  doubleVect.push_back(5.0);
  CHECK(doubleVect[1]==5.0);

  MyVector<std::string> stringVect;
  CHECK(stringVect.size()==0);
  stringVect.push_back("hello");
  CHECK(stringVect[0]=="hello");
  stringVect.push_back("bye");
  CHECK(stringVect[1]=="bye");
  
}

TEST_CASE("pop_back()"){
  MyVector<int> testVect;
  CHECK(testVect.size()==0);
  testVect.push_back(2);
  testVect.push_back(5);
  testVect.pop_back();
  bool checkA = testVect.size()==1&&testVect[0]==2;
  CHECK(checkA==true);
  testVect.push_back(1);
  testVect.push_back(2);
  testVect.push_back(3);
  testVect.push_back(4);
  testVect.pop_back(3);
  bool checkB = testVect.size()==2&&testVect[1]==1;
  CHECK(checkB==true);
  

}

TEST_CASE("size()"){
  MyVector<int> testVect;
  CHECK(testVect.size()==0);
  testVect.push_back(2);
  CHECK(testVect.size()==1);
  testVect.push_back(5);
  CHECK(testVect.size()==2);
  testVect.pop_back();
  CHECK(testVect.size()==1);
  
}



TEST_CASE("capacity"){
  MyVector<int> testVect;
  CHECK(testVect.capacity()==100);
  testVect.push_back(2);
  CHECK(testVect.capacity()==100);
  testVect.push_back(5);
  CHECK(testVect.capacity()==100);
  testVect.pop_back();
  CHECK(testVect.capacity()==100);
  
}

TEST_CASE("empty()"){
  MyVector<int> testVect;
  CHECK(testVect.empty()==true);
  testVect.push_back(2);
  CHECK(testVect.empty()==false);
  testVect.push_back(5);
  CHECK(testVect.empty()==false);
  testVect.pop_back(2);
  CHECK(testVect.empty()==true);
  
}

TEST_CASE("clear()"){
  MyVector<int> testVect;

  testVect.push_back(1);
  testVect.push_back(1);
  testVect.push_back(1);
  testVect.push_back(1);
  testVect.push_back(1);
  testVect.clear();
  CHECK(testVect.size()==0);
}

TEST_CASE("Over Capacity"){
  MyVector<int> testVect;
  for(int x=0;x<100;x++){
    testVect.push_back(x);
  }
  testVect.push_back(100);
  CHECK(testVect.capacity()==101);
  CHECK(testVect.size()==101);
}
