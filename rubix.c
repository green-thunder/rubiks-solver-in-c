#include <stdio.h>
#include <stdlib.h>
int w[3][3],o[3][3],y[3][3],r[3][3],g[3][3],b[3][3];
int i,i2,yordamchi;
int R();

int main(){
    while(1){
        for(i=1;i<=3;i++){
            for(i2=1;i2<=3;i2++){
                printf("w[%d][%d]=",i,i2);
                scanf("%d",&w[i][i2]);
            }
        }
        for(i=1;i<=3;i++){
            for(i2=1;i2<=3;i2++){
                printf("o[%d][%d]=",i,i2);
                scanf("%d",&o[i-1][i2-1]);
            }
        }
        for(i=1;i<=3;i++){
            for(i2=1;i2<=3;i2++){
                printf("y[%d][%d]=",i,i2);
                scanf("%d",&y[i-1][i2-1]);
            }
        }
        for(i=1;i<=3;i++){
            for(i2=1;i2<=3;i2++){
                printf("r[%d][%d]=",i,i2);
                scanf("%d",&r[i-1][i2-1]);
            }
        }
        for(i=1;i<=3;i++){
            for(i2=1;i2<=3;i2++){
                printf("g[%d][%d]=",i,i2);
                scanf("%d",&g[i-1][i2-1]);
            }
        }
        for(i=1;i<=3;i++){
            for(i2=1;i2<=3;i2++){
                printf("b[%d][%d]=",i,i2);
                scanf("%d",&b[i-1][i2-1]);
            }
        }
        R();
        printf("%d",o[1][2]);

    }
    return 0;
}

int R(){
    for(i=0;i<3;i++){
        yordamchi=w[i][2];
        w[i][2]=b[i][2];
        b[i][2]=y[i][2];
        y[i][2]=g[i][2];
        g[i][2]=yordamchi;
    }
    yordamchi=o[0][0];
    o[0][0]=o[2][0];
    o[2][0]=o[2][2];
    o[2][2]=o[0][2];
    o[0][2]=yordamchi;
    yordamchi=o[0][1];
    o[0][1]=o[1][0];
    o[1][0]=o[2][1];
    o[2][1]=o[1][2];
    o[1][2]=yordamchi;
}

int R`(){
    for(i=0;i<3;i++){
        yordamchi=w[i][2];
        w[i][2]=g[i][2];
        g[i][2]=y[i][2];
        y[i][2]=b[i][2];
        b[i][2]=yordamchi;
    }
    yordamchi=o[0][0];
    o[0][0]=o[0][2];
    o[0][2]=o[2][2];
    o[2][2]=o[2][0];
    o[2][0]=yordamchi;
    yordamchi=o[0][1];
    o[0][1]=o[1][2];
    o[1][2]=o[2][1];
    o[2][1]=o[1][0];
    o[1][0]=yordamchi;
}

int