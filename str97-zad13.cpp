//Програмата извежда всички 4-цифрени числа, които имат поне 2 равни цифри
#include <iostream>
using namespace std;
int main()
{
    for(int i=1000; i<=9999; i++)
    {
      int x=i%10;
      int y=i/10%10;
      int z=i/100%10;
      int w=i/1000;

      if
        (
         x==y || x==z || x==w
         ||
         y==z || y==w
         ||
         z==w
        )
      {cout<<i<<" ";}
    }
}
