#include <iostream>

#define AND &
#define OR  |
#define XOR ^
#define NOT ~

using namespace std;

int main() {
  unsigned char a, b, c, d;
  a =  119 AND 11;
  cout << " 119 \033[003;33mAND\033[000m 11 = (3)   = " << int(a) << endl;
  b = -119 XOR 11;
  cout << "-119 \033[003;33mXOR\033[000m 11 = (252) = " << int(b) << endl;
  c =  119 >> 2;
  cout << " 119 \033[003;33m>>\033[000m  2  = (29)  = " << int(c) << endl;
  d =  119 OR -13 AND (34 OR NOT 46);
  cout << " 119 \033[003;33mOR\033[000m -13 \033[003;33mAND\033[000m (34 \033[003;33mOR\033[000m \033[003;33mNOT\033[000m 46) = (243) = " << int(d) << endl;
  return 0;
}