#include <stdio.h>
#include <stdlib.h>
int main(){
    int m,ma,rt[10],y=0,v,x,me=1;
    float pf=0;
    printf(" ingrese 10 numeros ");
    for(y=0;y<10;y++){
    scanf("%d",&rt[m]);
	ma=ma+rt[m];
	me=me*rt[m];
	}
pf=ma/10;

     for(y=0;y<10; y++){
       if(rt[m]<pf){
	v=v+1;
	}
	}

  printf("%d estan bajo el promedio, el promedio es %f , el producto es %d, la suma es %d",v,pf,me,ma);
 
}




