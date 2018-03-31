#include <stdio.h>

int main(void)
{
float a, b, resc=.0, resn=.0;
int kolc, koln, e=1;

printf("Введите числа\n");

while (e != 0) {
    scanf ("%i", &e);
    if (e == 0){
        printf("Кол-во четных: %i\n", kolc);
        printf("Среднее значение четных: %f\n", resc / a);
        printf("Кол-во нечетных: %i\n", koln);
        printf("Среднее значение нечетных: %f\n", resn / b);
    }
    else if(e % 2 == 0) {
        kolc++;
        resc += e;
        a = kolc;
    }
    else {
        koln++;
        b = koln;
        resn += e;
    }
}
return 0;
}