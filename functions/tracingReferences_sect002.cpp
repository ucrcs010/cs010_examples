#include <iostream>
using namespace std;

void f(int a, int &b)
{
  a = a + 4;
  b = a * b;
}

int g(int &a)
{
  a /= 2;
  return a % 3;
}

int h(int &a)
{
  f(a, a);
  return g(a) * 2;
}
int main()
{
  int a = 4, b = 3, c = 0;
  f(a, b);
  cout << a << ' ' << b << endl; // Q1
  a = 4; b = 3;
  c = g(a) + g(b);
  cout << a << ' ' << b << ' '   // Q2
    << c << endl;                // Q2
  a = 4; b = 3;
  a = h(b);
  cout << a << ' ' << b << endl; // Q3
 
  return 0;
}