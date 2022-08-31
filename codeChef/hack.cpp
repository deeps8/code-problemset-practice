#include <iostream>
using namespace std;
int func(int x, int *pj, int **pk)
{
  int y, z;
  **pk += 1; 
   z  = **pk;
  *pj += 2;
   y = *pj;
   x += 3;
   return x + y + z;
}
  
int main()
{
   int c, *b, **a;
   c = 4;
   b = &c;
   a = &b; 
   cout<<func(c,b,a);
}