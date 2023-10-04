// var 12
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main()
{
  setlocale(LC_ALL, "rus");
  int i = 0;
  float x, y, s;
  cout << "\nВведите координаты точки: x, y: ";
  cin >> x >> y;
  if (x*x+(y-1)*(y-1)>1&&(x-1)*(x-1)+(y*y)>1&&(x-1)*(x-1)+(y-1)*(y-1)<=1) i = 1;
  else if ((x+1)*(x+1)+(y-1)*(y-1)<=1&&(x+1)*(x+1)+(y*y)<=1&&(x*x)+(y-1)*(y-1)>1&&(x*x)+(y*y)>1) i = 2;
  else if ((x+1)*(x+1)+(y-1)*(y-1)<=1&&(x*x)+(y-1)*(y-1)<=1&&(x+1)*(x+1)+(y*y)>1) i = 3;
  else if ((x-1)*(x-1)+(y*y)<=1&&(x*x)+(y-1)*(y-1)<=1&&(x-1)*(x-1)+(y-1)*(y-1)<=1&&x*x+y*y<=1) i = 4;
  else if ((x*x)+(y*y)>1&&(x*x)+(y+1)*(y+1)<=1&&(x+1)*(x+1)+(y+1)*(y+1)>1&&(x-1)*(x-1)+(y+1)*(y+1)>1) i = 5;
  if (i == 0)
    cout << "\033[031mТочка вне выделенных областей\033[0m";
  else
    cout << "\033[033mТочка в области М" << i << ". ";
  cout.precision(4);
  switch (i)
  {
  case 1:
    cout << "S1 = " << (s = M_PI/12+sqrt(3)/2);
    break;
  case 2:
    cout << "S2 = " << (s = M_PI/6-sqrt(3)/2+1);
    break;
  case 3:
    cout << "S3 = " << (s = (sqrt(3)/2)+(M_PI/3)-(M_PI/4)-1);
    break;
  case 4:
    cout << "S4 = " << (s = (M_PI/3)+1-sqrt(3));
    break;
  case 5:
    cout << "S5 = " << (s = (sqrt(3)/2)-(M_PI/6));
  }
  cout << "\033[0m";
  cout << "\n\033[003mПовторить-1, Выход-0: ";
  cout << "\033[0m";
  cin >> i;
  if (i == '1')
    main();
  return 0;
}