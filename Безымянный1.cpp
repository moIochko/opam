#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
    float S1, S2;
    float R, a, r;
 
    printf("Введiть площу кола: ");
    scanf("%f", &S1);
    printf("Введiть площу трикутника: ");
    scanf("%f", &S2);
    R = sqrt(S1 / M_PI);
	a = sqrt(4*S2 / sqrt(3));
	r = sqrt(3)/6*a;
	
	if (r > R)
       printf("Можно вписати");
	else	
       printf("Не можно вписати");
    getch();
}
