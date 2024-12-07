#pragma once
#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
using namespace std;

class Hocsinh 
{ 
 public: 
  Hocsinh();
  Hocsinh(char hoten1[], int tuoi, float dtb) ;

  friend ostream & operator << (ostream & os, Hocsinh & r);  
  friend istream & operator >> (istream & is, Hocsinh & r);  
  bool operator > (Hocsinh & r) ;

  bool operator < (const Hocsinh & r);  
 private: 
  char hoten[55];  
  int tuoi; 
  float dtb; 
};

#include "Hocsinh.cpp"