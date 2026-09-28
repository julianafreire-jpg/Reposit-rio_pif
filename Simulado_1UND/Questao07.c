#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double R;
    const double pi = 3.14159265;
    double volumeEsfera;
    double areaSuperficie;


    printf("Digite o valor do raio:");
    scanf("%lf",&R);

   
    areaSuperficie = 4.0 * pi * pow(R,2) ;
    volumeEsfera= (4.0/3.0) * pi * pow(R,3);
   
    printf ("A área da superfície da esfera %.3F\n", areaSuperficie);
    printf ("O volume da esfera: %.3f\n, volumeEsfera");

    return 0;
}