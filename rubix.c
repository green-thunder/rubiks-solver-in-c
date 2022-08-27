#include <stdio.h>
#include <stdlib.h>

int w[3][3],o[3][3],y[3][3],r[3][3],g[3][3],b[3][3];
int i,i2,yordamchi;

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

int Rn(){
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

int F(){
    for(i=0;i<3;i++){
        yordamchi=r[i][2];
        r[i][2]=b[i][2];
        b[i][2]=o[i][2];
        o[i][2]=g[i][2];
        g[i][2]=yordamchi;
    }
    yordamchi=w[0][0];
    w[0][0]=w[2][0];
    w[2][0]=w[2][2];
    w[2][2]=w[0][2];
    w[0][2]=yordamchi;
    yordamchi=w[0][1];
    w[0][1]=w[1][0];
    w[1][0]=w[2][1];
    w[2][1]=w[1][2];
    w[1][2]=yordamchi;
}

int Fn(){
    for(i=0;i<3;i++){
        yordamchi=r[i][2];
        r[i][2]=g[i][2];
        g[i][2]=o[i][2];
        o[i][2]=b[i][2];
        b[i][2]=yordamchi;
    }
    yordamchi=w[0][0];
    w[0][0]=w[0][2];
    w[0][2]=w[2][2];
    w[2][2]=w[2][0];
    w[2][0]=yordamchi;
    yordamchi=w[0][1];
    w[0][1]=w[1][2];
    w[1][2]=w[2][1];
    w[2][1]=w[1][0];
    w[1][0]=yordamchi;
}

int L(){
    for(i=0;i<3;i++){
        yordamchi=y[i][2];
        y[i][2]=b[i][2];
        b[i][2]=w[i][2];
        w[i][2]=g[i][2];
        g[i][2]=yordamchi;
    }
    yordamchi=r[0][0];
    r[0][0]=r[2][0];
    r[2][0]=r[2][2];
    r[2][2]=r[0][2];
    r[0][2]=yordamchi;
    yordamchi=r[0][1];
    r[0][1]=r[1][0];
    r[1][0]=r[2][1];
    r[2][1]=r[1][2];
    r[1][2]=yordamchi;
}

int Ln(){
    for(i=0;i<3;i++){
        yordamchi=y[i][2];
        y[i][2]=g[i][2];
        g[i][2]=w[i][2];
        w[i][2]=b[i][2];
        b[i][2]=yordamchi;
    }
    yordamchi=r[0][0];
    r[0][0]=r[0][2];
    r[0][2]=r[2][2];
    r[2][2]=r[2][0];
    r[2][0]=yordamchi;
    yordamchi=r[0][1];
    r[0][1]=r[1][2];
    r[1][2]=r[2][1];
    r[2][1]=r[1][0];
    r[1][0]=yordamchi;
}

int B(){
    for(i=0;i<3;i++){
        yordamchi=o[i][2];
        o[i][2]=b[i][2];
        b[i][2]=r[i][2];
        r[i][2]=g[i][2];
        g[i][2]=yordamchi;
    }
    yordamchi=y[0][0];
    y[0][0]=y[2][0];
    y[2][0]=y[2][2];
    y[2][2]=y[0][2];
    y[0][2]=yordamchi;
    yordamchi=y[0][1];
    y[0][1]=y[1][0];
    y[1][0]=y[2][1];
    y[2][1]=y[1][2];
    y[1][2]=yordamchi;
}

int Bn(){
    for(i=0;i<3;i++){
        yordamchi=o[i][2];
        o[i][2]=g[i][2];
        g[i][2]=r[i][2];
        r[i][2]=b[i][2];
        b[i][2]=yordamchi;
    }
    yordamchi=y[0][0];
    y[0][0]=y[0][2];
    y[0][2]=y[2][2];
    y[2][2]=y[2][0];
    y[2][0]=yordamchi;
    yordamchi=y[0][1];
    y[0][1]=y[1][2];
    y[1][2]=y[2][1];
    y[2][1]=y[1][0];
    y[1][0]=yordamchi;
}

int U(){
    for(i=0;i<3;i++){
        yordamchi=o[i][2];
        o[i][2]=y[i][2];
        y[i][2]=r[i][2];
        r[i][2]=w[i][2];
        w[i][2]=yordamchi;
    }
    yordamchi=g[0][0];
    g[0][0]=g[2][0];
    g[2][0]=g[2][2];
    g[2][2]=g[0][2];
    g[0][2]=yordamchi;
    yordamchi=g[0][1];
    g[0][1]=g[1][0];
    g[1][0]=g[2][1];
    g[2][1]=g[1][2];
    g[1][2]=yordamchi;
}

int Un(){
    for(i=0;i<3;i++){
        yordamchi=o[i][2];
        o[i][2]=w[i][2];
        w[i][2]=r[i][2];
        r[i][2]=y[i][2];
        y[i][2]=yordamchi;
    }
    yordamchi=g[0][0];
    g[0][0]=g[0][2];
    g[0][2]=g[2][2];
    g[2][2]=g[2][0];
    g[2][0]=yordamchi;
    yordamchi=g[0][1];
    g[0][1]=g[1][2];
    g[1][2]=g[2][1];
    g[2][1]=g[1][0];
    g[1][0]=yordamchi;
}
int D(){
    for(i=0;i<3;i++){
        yordamchi=r[i][2];
        r[i][2]=y[i][2];
        y[i][2]=o[i][2];
        o[i][2]=w[i][2];
        w[i][2]=yordamchi;
    }
    yordamchi=b[0][0];
    b[0][0]=b[2][0];
    b[2][0]=b[2][2];
    b[2][2]=b[0][2];
    b[0][2]=yordamchi;
    yordamchi=b[0][1];
    b[0][1]=b[1][0];
    b[1][0]=b[2][1];
    b[2][1]=b[1][2];
    b[1][2]=yordamchi;
}

int Dn(){
    for(i=0;i<3;i++){
        yordamchi=r[i][2];
        r[i][2]=w[i][2];
        w[i][2]=o[i][2];
        o[i][2]=y[i][2];
        y[i][2]=yordamchi;
    }
    yordamchi=b[0][0];
    b[0][0]=b[0][2];
    b[0][2]=b[2][2];
    b[2][2]=b[2][0];
    b[2][0]=yordamchi;
    yordamchi=b[0][1];
    b[0][1]=b[1][2];
    b[1][2]=b[2][1];
    b[2][1]=b[1][0];
    b[1][0]=yordamchi;
}

int main(){
    while(1){
        for(i=1;i<=3;i++){
            for(i2=1;i2<=3;i2++){
                printf("w[%d][%d]=",i,i2);
                scanf("%d",&w[i-1][i2-1]);
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
      
    }
    return 0;
}
