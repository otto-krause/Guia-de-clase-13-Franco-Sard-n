#include <stdio.h>
#include <stdlib.h>
int main(){
int a,rtt=0,rt[]{1,2,3,4,5};
for (a=0;a<5;a++){
printf("Ingrese las resistencias ");
scanf("%d",&rt[a]);}
for (a=0;a<5;a++){
printf("\n Las resistencias son %d",rt[a]);
rtt=rtt+rt[a];
}
printf("\n La resistencia total es %d",rtt);
return 0;
}
 

