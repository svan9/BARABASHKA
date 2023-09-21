// variant 13
#include <iostream>

#define uchar unsigned char

#define AND &
#define OR  |
#define XOR ^
#define NOT ~

using namespace std;

int main() {
  uchar a, b, c, d;
  a =  119 AND 11;
  b = -119 XOR 11;
  c =  119 >> 2;
  d =  119 OR -13 AND (34 OR NOT 46);

  cout << " 119 AND 11 = (3)   = " << int(a) << endl;
  cout << "-119 XOR 11 = (130) = " << int(b) << endl;
  cout << " 119 >>  2  = (29)  = " << int(c) << endl;
  cout << " 119 OR -13 AND (34 OR NOT 46) = (247) = " << int(d) << endl;

  return 0;
}