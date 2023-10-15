#include <iostream>

namespace Triangle {
  bool isTriangle(int a, int b, int c)
  {
    if (a <= 0 || b <= 0 || c <= 0) {
      return false;
    }
    
    long first = a;
    long second = 0;
    int third = 0;
    if (b >= first) {
      third = second;
      second = first;
      first = b;
    } else {
      third = second;
      second = b;
    }
    
    if (c >= first) {
      third = second;
      second = first;
      first = c;
    } else if (c >= second) {
      third = second;
      second = c;
    } else {
      third = c;
    }

    if (second + third > first) {
      return true;
    } else {
      return false;
    }
  }
};