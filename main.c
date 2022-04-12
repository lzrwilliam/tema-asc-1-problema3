#include <unistd.h>
#include <stdio.h>

char minus = '-';
char a[2];
char b[2];
char c;

void print(int n)
{
    if(n < 0)
    {
        write(1, &minus, 1);
        n *= -1;
    }

    n += '0';
    c = n;

    write(1, &c, 1);
}

int main()
{
   read(0, a, 2);
   read(0, b, 2);

   int tmp = 0;
   tmp = *a;
   tmp -= *b;

   print(tmp);

   return 0;
}
