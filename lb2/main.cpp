// variant 13
// x = min(a, max(b, c))
#include <stdio.h>
#include <clocale>

int main() {
  setlocale(LC_ALL, "Rusian");
  int a, b, c, d, min, max, x;
  int i;

start:

  printf("Введите значения a, b, c, d: ");
  scanf("%i%i%i%i", &a, &b, &c, &d);

  if (b > c) max = b;
  else max = c; 

  if (a < max) x = a;
  else x = max;

  printf("Использование структуры Выбор: x = %i\n", x);

  max = c;
  if (b > c) max = b;

  x = max;
  if (a < max) x = a;

  printf("Использование структуры Обход: x = %i\n", x);

  printf("\n Повторить-1, Выход-2: ");
  scanf("%i", &i) ;
  if (i == 1) goto start;

  return 0;
}