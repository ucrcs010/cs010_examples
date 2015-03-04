#include <iostream>
using namespace std;

void g(int n, int m)
{
  if (n <= m)
  {
    cout << f(n) << ' ';
  }
  else
  {
    cout << f(n / 2) << ' ';
  }
}

int f (int n)
{
  n = n * n;
  if (n > 100)
  {
    return n / 2;
  }
  else
  {
    if (n < 10)
	  {
	    return n;
	  }
  }
}

int main ()
{
  cout << f (10);
  cout << g (10, 10);
  return 0;
}
