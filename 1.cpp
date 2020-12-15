#include <stdio.h>
#include <stdlib.h>
int main()//Sin funciones.
{
int a,rtt=0,rt[5]{0};//Falta tamaño
for (a=0;a<5;a++)
{
printf("Ingrese las resistencias ");
scanf("%d",&rt[a]);
}
for (a=0;a<5;a++)
{
printf("\n Las resistencias son %d",rt[a]);
rtt=rtt+rt[a];
}
printf("\n La resistencia total es %d",rtt);
return 0;
}
 

