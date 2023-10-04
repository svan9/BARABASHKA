#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");
  float s, A, B, x;
  int i, m, n;

  cout << "Введите A -> ";
  cin >> A;
  cout << "Введите B -> ";
  cin >> B;
  cout << "Введите m -> ";
  cin >> m; // start i
  cout << "Введите n -> ";
  cin >> n; // max i

  i = m, s = 0;
  while (i <= n)
  {
    x = (2 * i) / 5 + 1.2;
    s += (pow(-1, i + 1) * ((x * (A - i / n)) / (x + i * B)));
    i++;
  }
  s *= 2 / m + B;

  cout << "Для цикла WHILE результат     = " << s << endl;

  i = m, s = 0;
  do
  {
    x = (2 * i) / 5 + 1.2;
    s += (pow(-1, i + 1) * ((x * (A - i / n)) / (x + i * B)));
    i++;
  } while (i <= n);
  s *= 2 / m + B;

  cout << "Для цикла DO..WHILE результат = " << s << endl;

  for (i = m, s = 0; i <= n; i++)
  {
    x = (2 * i) / 5 + 1.2;
    s += (pow(-1, i + 1) * ((x * (A - i / n)) / (x + i * B)));
    i++;
  }
  s *= 2 / m + B;

  cout << "Для цикла FOR результат       = " << s << endl;

  return 0;
}