// var 12
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <locale>
#include <stdint.h>
using namespace std;
typedef struct circle
{
  float x, y, r;
  bool isIn(float x, float y);
} circle_t;
bool circle::isIn(float x, float y)
{
  float x_, y_;
  x_ = (x - this->x);
  y_ = (y - this->y);
  if (x_ * x_ + y_ * y_ <= this->r * this->r)
    return true;
  return false;
}
bool isInsideM1(float x, float y)
{
  circle c1, c2, c3;
  c1 = {0.0f, 1.0f, 1.0f};
  c2 = {1.0f, 0.0f, 1.0f};
  c3 = {1.0f, 1.0f, 1.0f};
  if (!c1.isIn(x, y) && !c2.isIn(x, y) && c3.isIn(x, y))
    return true;
  return false;
}
bool isInsideM2(float x, float y)
{
  circle c1, c2, c3, c4;
  c1 = {-1.0f, 1.0f, 1.0f};
  c2 = {-1.0f, 0.0f, 1.0f};
  c3 = {0.0f, 1.0f, 1.0f};
  c4 = {0.0f, 0.0f, 1.0f};
  if (c1.isIn(x, y) && c2.isIn(x, y) && !c3.isIn(x, y) && !c4.isIn(x, y))
    return true;
  return false;
}
bool isInsideM3(float x, float y)
{
  circle c1, c2, c3;
  c1 = {-1.0f, 1.0f, 1.0f};
  c2 = { 0.0f, 1.0f, 1.0f};
  c3 = {-1.0f, 0.0f, 1.0f};
  if (c1.isIn(x, y) && c2.isIn(x, y) && !c3.isIn(x, y))
    return true;
  return false;
}
bool isInsideM4(float x, float y)
{
  circle c1, c2, c3, c4;
  c1 = {1.0f, 0.0f, 1.0f};
  c2 = {0.0f, 1.0f, 1.0f};
  c3 = {1.0f, 1.0f, 1.0f};
  c4 = {0.0f, 0.0f, 1.0f};
  if (c1.isIn(x, y) && c2.isIn(x, y) && c3.isIn(x, y) && c4.isIn(x, y))
    return true;
  return false;
}
bool isInsideM5(float x, float y)
{
  circle c1, c2, c3, c4;
  c1 = { 0.0f, -1.0f, 1.0f};
  c2 = {-1.0f, -1.0f, 1.0f};
  c3 = { 1.0f, -1.0f, 1.0f};
  c4 = { 0.0f,  0.0f, 1.0f};
  if (c1.isIn(x, y) && !c2.isIn(x, y) && !c3.isIn(x, y) && !c4.isIn(x, y))
    return true;
  return false;
}

int main()
{
  setlocale(LC_ALL, "rus");
  int8_t i = 0;
  float x, y, s;
  wcout << L"\nВведите координаты точки: x, y: ";
  cin >> x >> y;
  if (isInsideM1(x, y))
    i = 1;
  else if (isInsideM2(x, y))
    i = 2;
  else if (isInsideM3(x, y))
    i = 3;
  else if (isInsideM4(x, y))
    i = 4;
  else if (isInsideM5(x, y))
    i = 5;
  if (i == 0)
  {
    wcout << L"\033[031mТочка вне выделенных областей\033[0m";
  }
  else
  {
    wcout << L"\033[033mТочка в области М" << i << ". ";
  }
  wcout.precision(4);
  switch (i)
  {
  case 1:
    wcout << L"S1 = " << (s = 2 - M_PI / 4);
    break;
  case 2:
    wcout << L"S2 = " << (s = ((M_PI - 2) / 2) + (1 - ((2 * M_PI) / 3) + 3 - sqrt(3)));
    break;
  case 3:
    wcout << L"S3 = " << (s = ((M_PI / 3) + (sqrt(3) / 2) - (sqrt(3) / 4)-1) / 2);
    break;
  case 4:
    wcout << L"S4 = " << (s = ((2 * M_PI) / 3) + 3 - sqrt(3));
    break;
  case 5:
    wcout << L"S5 = " << (s = ((sqrt(3)/2)-(M_PI/6)));
  }
  wcout << L"\033[0m";
  wcout << L"\n\033[003mПовторить-1, Выход-0: ";
  wcout << L"\033[0m";
  cin >> i;
  if (i == '1')
    main();
  return 0;
}
