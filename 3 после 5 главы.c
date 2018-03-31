#include <stdio.h>

int main ()
{
int n, triangularNumber;
triangularNumber = 0;
for (n = 5; n <= 50; n = n + 5)
{
triangularNumber = (n * (n + 1)) / 2;
printf (" %2i %2i\n", n, triangularNumber);
}
return 0;

}