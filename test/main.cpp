#include <iostream>

using namespace std;

int main() {
  for (int i = 0; i<27; i++) {
    cout 
      << i      << " : " << "\033[" << i      << "m" << "text" << "\033[0m" << "\t"
      << i+27   << " : " << "\033[" << i+27   << "m" << "text" << "\033[0m" << "\t"
      << i+27*2 << " : " << "\033[" << i+27*2 << "m" << "text" << "\033[0m" << "\t"
      << i+27*3 << " : " << "\033[" << i+27*3 << "m" << "text" << "\033[0m\n";
  }
}