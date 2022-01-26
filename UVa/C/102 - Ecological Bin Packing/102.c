#include<stdio.h>

int main(void){
    int b1,b2,b3,g1,g2,g3,c1,c2,c3,total;
    int steps[6],min,minindex,i;
    while(scanf("%d%d%d%d%d%d%d%d%d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)!=EOF){
        total = b1+g1+c1+b2+g2+c2+b3+c3+g3;
        steps[0] = total-b1-c2-g3;
        steps[1] = total-b1-g2-c3;
        steps[2] = total-c1-b2-g3;
        steps[3] = total-c1-g2-b3;
        steps[4] = total-g1-b2-c3;
        steps[5] = total-g1-c2-b3;

        min = steps[0];
        minindex=0;
        for(i=1;i<6;i++)
            if(min>steps[i]){
                min = steps[i];
                minindex = i;
            }

        if(minindex==0)printf("BCG %d\n",min);
        else if(minindex==1)printf("BGC %d\n",min);
        else if(minindex==2)printf("CBG %d\n",min);
        else if(minindex==3)printf("CGB %d\n",min);
        else if(minindex==4)printf("GBC %d\n",min);
        else printf("GCB %d\n",min);
    }
	return 0;
}
