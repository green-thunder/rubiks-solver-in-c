#include <stdio.h>
#include <stdlib.h>

int w[3][3],o[3][3],y[3][3],r[3][3],g[3][3],b[3][3];
int i,i2,yordamchi;

// movements

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
        r[i][2]=b[0][i];
        b[0][i]=o[2-i][0];
        o[2-i][0]=g[2][2-i];
        g[2][2-i]=yordamchi;
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
        r[i][2]=g[2][2-i];
        g[2][2-i]=o[2-i][0];
        o[2-i][0]=b[0][i];
        b[0][i]=yordamchi;
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
        yordamchi=y[2-i][0];
        y[2-i][0]=b[2-i][0];
        b[2-i][0]=w[2-i][0];
        w[2-i][0]=g[2-i][0];
        g[2-i][0]=yordamchi;
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
        yordamchi=y[2-i][0];
        y[2-i][0]=g[2-i][0];
        g[2-i][0]=w[2-i][0];
        w[2-i][0]=b[2-i][0];
        b[2-i][0]=yordamchi;
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
        o[i][2]=b[2][2-i];
        b[2][2-i]=r[2-i][0];
        r[2-i][0]=g[0][i];
        g[0][i]=yordamchi;
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
        o[i][2]=g[0][i];
        g[0][i]=r[2-i][0];
        r[2-i][0]=b[2][2-i];
        b[2][2-i]=yordamchi;
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
        yordamchi=o[0][i];
        o[0][i]=y[2][2-i];
        y[2][2-i]=r[0][i];
        r[0][i]=w[0][i];
        w[0][i]=yordamchi;
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
        yordamchi=o[0][i];
        o[0][i]=w[0][i];
        w[0][i]=r[0][i];
        r[0][i]=y[2][2-i];
        y[2][2-i]=yordamchi;
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
        yordamchi=r[2][2-i];
        r[2][2-i]=y[0][i];
        y[0][i]=o[2][2-i];
        o[2][2-i]=w[2][2-i];
        w[2][2-i]=yordamchi;
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
        yordamchi=r[2][2-i];
        r[2][2-i]=w[2][2-i];
        w[2][2-i]=o[2][2-i];
        o[2][2-i]=y[0][i];
        y[0][i]=yordamchi;
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
    int n,n2,n3=0;
    printf("\n\t\t\t=======RUBIK`S CUBE SOLVER=======\n");
    printf("\n\t\t\t\twhite----1\n\t\t\t\t       orange---2\n\t\t\t\tyellow---3\n\t\t\t\tred------4\n\t\t\t\tgreen----5\n\t\t\t\tblue-----6\n");
    while(1){
        for(i=1;i<=3;i++){
            for(i2=1;i2<=3;i2++){
                printf("w[%d][%d]=",i,i2);
                scanf("%d",&w[i-1][i2-1]);
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
                printf("y[%d][%d]=",i,i2);
                scanf("%d",&y[i-1][i2-1]);
            }
        }
        for(i=1;i<=3;i++){
            for(i2=1;i2<=3;i2++){
                printf("b[%d][%d]=",i,i2);
                scanf("%d",&b[i-1][i2-1]);
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
                printf("r[%d][%d]=",i,i2);
                scanf("%d",&r[i-1][i2-1]);
            }
        }

    printf("\n");

    // stage1 starts from here

    while(g[0][0]!=5 || g[0][2]!=5 || g[2][0]!=5 || g[2][2]!=5 || w[0][2]!=1 || o[0][0]!=2 || o[0][2]!=2 || y[2][2]!=3 || y[2][0]!=3 || r[0][0]!=4 || r[0][2]!=4 || w[0][0]!=1){
        n2=0;
        if(((w[2][2]==1 || w[2][2]==2 || w[2][2]==5) && (o[2][0]==1 || o[2][0]==2 || o[2][0]==5) && (b[0][2]==1 || b[0][2]==2 || b[0][2]==5)) || ((w[0][2]==2 || w[0][2]==5) && (o[0][0]==1 || o[0][0]==5) && (g[2][2]==1 || g[2][2]==2))){
            n=0;
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            n3=0;
            while(g[2][2]!=5 || w[0][2]!=1 || o[0][0]!=2){
                Dn(); Rn(); D(); R();
                n++;
            }
                printf("\t%d ta ( D`  R`  D  R )\n",n); 
        }

        if(((o[2][2]==2 || o[2][2]==3 || o[2][2]==5) && (y[0][2]==2 || y[0][2]==3 || y[0][2]==5) && (b[2][2]==2 || b[2][2]==3 || b[2][2]==5)) || ((o[0][2]==3 || o[0][2]==5) && (y[2][2]==2 || y[2][2]==5) && (g[0][2]==2 || g[0][2]==3))){
            n=0;
             n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            n3=0;
            while(o[0][2]!=2 || y[2][2]!=3 || g[0][2]!=5){
                Dn(); Bn(); D(); B();
                n++;
            }
                printf("\t%d ta ( D`  B`  D  B )\n",n);            
        }

        if(((y[0][0]==3 || y[0][0]==4 || y[0][0]==5) && (r[2][0]==3 || r[2][0]==4 || r[2][0]==5) && (b[2][0]==3 || b[2][0]==4 || b[2][0]==5)) || ((y[2][0]==4 || y[2][0]==5) && (r[0][0]==3 || r[0][0]==5) && (g[0][0]==3 || g[0][0]==4))){
            n=0;
             n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            n3=0;
            while(y[2][0]!=3 || r[0][0]!=4 || g[0][0]!=5){
                Dn(); Ln(); D(); L();
                n++;
            }
                printf("\t%d ta ( D`  L`  D  L )\n",n);
        }

        if(((r[2][2]==4 || r[2][2]==1 || r[2][2]==5) && (w[2][0]==4 || w[2][0]==1 || w[2][0]==5) && (b[0][0]==4 || b[0][0]==1 || b[0][0]==5)) || ((r[0][2]==1 || r[0][2]==5) && (w[0][0]==4 || w[0][0]==5) && (g[2][0]==4 || g[2][0]==1))){
            n=0;
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            n3=0;
            while(r[0][2]!=4 || w[0][0]!=1 || g[2][0]!=5){
                Dn(); Fn(); D(); F();
                n++;
            }       
                printf("\t%d ta ( D`  F`  D  F )\n",n);
        }
        if(g[0][0]!=5 || g[0][2]!=5 || g[2][0]!=5 || g[2][2]!=5){
            if(n2==0){
            Dn();
            n3++;
            if(n3==4){
                Dn(); Fn(); D(); F();
                printf("\tD`  F`  D  F\n");
            }
            }
        }
    }
        printf("\n");

        // stage2 start from here
    n3=0;
    while(w[1][0]!=1 || w[1][2]!=1 || o[1][0]!=2 || o[1][2]!=2 || r[1][0]!=4 || r[1][2]!=4 || y[1][0]!=3 || y[1][2]!=3){
        n2=0;
        if(w[2][1]==1 && b[0][1]==2){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            n3=0;
            Dn(); Rn(); D(); R(); D(); F(); Dn(); Fn();
            printf("\tD`  R`  D  R  D  F  D`  F`\n");
        }
        if(w[2][1]==1 && b[0][1]==4){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            n3=0;
            D(); L(); Dn(); Ln(); Dn(); Fn(); D(); F();
            printf("\tD  L  D`  L`  D`  F`  D  F\n");
        }
        if(r[2][1]==4 && b[1][0]==1){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            n3=0;
            Dn(); Fn(); D(); F(); D(); L(); Dn(); Ln();
            printf("\tD`  F`  D  F  D  L  D`  L`\n");
        }
        if(r[2][1]==4 && b[1][0]==3){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            n3=0;
            D(); B(); Dn(); Bn(); Dn(); Ln(); D(); L(); 
            printf("\tD  B  D`  B`  D`  L`  D  L\n");
        }
        if(y[0][1]==3 && b[2][1]==4){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            n3=0;
            Dn(); Ln(); D(); L(); D(); B(); Dn(); Bn();
            printf("\tD`  L`  D  L  D  B  D`  B`\n");
        }
        if(y[0][1]==3 && b[2][1]==2){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            n3=0;
            D(); R(); Dn(); Rn(); Dn(); Bn(); D(); B();
            printf("\tD  R  D`  R`  D`  B`  D  B\n");
        }
        if(o[2][1]==2 && b[1][2]==3){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            n3=0;
            Dn(); Bn(); D(); B(); D(); R(); Dn(); Rn();
            printf("\tD`  B`  D  B  D  R  D`  R`\n");
        }
        if(o[2][1]==2 && b[1][2]==1){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            n3=0;
            D(); F(); Dn(); Fn(); Dn(); Rn(); D(); R();
            printf("\tD  F  D`  F`  D`  R`  D  R\n");
        }
        if(w[1][0]!=1 || w[1][2]!=1 || o[1][0]!=2 || o[1][2]!=2 || r[1][0]!=4 || r[1][2]!=4 || y[1][0]!=3 || y[1][2]!=3){
        if(n2==0){
                Dn();
                n3++;
                if(n3==4){
                    Dn(); Rn(); D(); R(); D(); F(); Dn(); Fn();
                    printf("\tD`  R`  D  R  D  F  D`  F`\n");
                }
            }    
        }
    }

    // stage3 starts from here

    while(b[0][1]!=6 || b[1][0]!=6 || b[1][2]!=6 || b[2][1]!=6){
        if(b[1][0]==6 && b[1][2]==6){
            F(); L(); D(); Ln(); Dn(); Fn();
            printf("\tF  L  D  L`  D`  F`\n");
        }else if(b[0][1]==6 && b[2][1]==6){
            L(); B(); D(); Bn(); Dn(); Ln();
            printf("\tL  B  D  B`  D`  L`\n");
        }else if(b[1][2]==6 && b[2][1]==6){
            F(); L(); D(); Ln(); Dn(); L(); D(); Ln(); Dn(); Fn();
            printf("\tF  L  D  L`  D`\n\tL  D  L`  D`  F`\n");
        }else if(b[0][1]==6 && b[1][2]==6){
            L(); B(); D(); Bn(); Dn(); B(); D(); Bn(); Dn(); Ln();
            printf("\tL  B  D  B`  D`\n\tB  D  B`  D`  L`\n");
        }else if(b[0][1]==6 && b[1][0]==6){
            B(); R(); D(); Rn(); Dn(); R(); D(); Rn(); Dn(); Bn();
            printf("\tB  R  D  R`  D`\n\tR  D  R`  D`  B`\n");
        }else if(b[1][0]==6 && b[2][1]==6){
            R(); F(); D(); Fn(); Dn(); F(); D(); Fn(); Dn(); Rn();
            printf("\tR  F  D  F`  D`\n\tF  D  F`  D`  R`\n");
        }else{
            F(); L(); D(); Ln(); Dn(); L(); D(); Ln(); Dn(); Fn(); D(); F(); L(); D(); Ln(); Dn(); Fn();
            printf("\tF  L  D  L`  D`\n\tL  D  L`  D`  F`\n");
            printf("\tD  F  L  D  L`  D`  F`\n");
        }
    }

    // stage4 starts from here 
    n2=0; n3=0;
    while(b[0][0]!=6 || b[0][2]!=6 || b[2][0]!=6 || b[2][2]!=6){
        if(b[0][0]==6 && o[2][0]==6 && y[0][2]==6 && r[2][0]==6){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            // algorithm 6
            Ln(); D(); D(); L(); D(); Ln(); D(); L();               
            printf("\tL`  2D  L  D  L`  D  L\n");
        }else if(b[0][0]==6 && w[2][2]==6 && o[2][2]==6 && y[0][0]==6){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            // algorithm 7
            Dn(); L(); Dn(); Dn(); Ln(); Dn(); L(); Dn(); Ln();
            printf("\tD`  L  2D`  L`  D`  L  D`  L`\n");
        }else if(b[0][2]==6 && b[2][0]==6 && y[0][2]==6 && r[2][2]==6){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            Ln(); D(); D(); L(); D(); Ln(); D(); L(); Dn(); L(); Dn(); Dn(); Ln(); Dn(); L(); Dn(); Ln();
            printf("\tL`  2D  L  D  L`  D  L\n");
            printf("\tD`  L  2D`  L`  D`  L  D`  L`\n");
        }else if(w[2][2]==6 && w[2][0]==6 && y[0][2]==6 && y[0][0]==6){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            Ln(); D(); D(); L(); D(); Ln(); Dn(); L(); D(); Ln(); D(); L(); 
            printf("\tL`  2D  L  D  L`  D`\n");
            printf("\tL  D  L`  D  L\n");
        }else if(b[0][2]==6 && b[2][2]==6 && w[2][0]==6 && y[0][0]==6){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            Dn(); L(); Dn(); Dn(); Ln(); Dn(); L(); Dn(); Ln(); Ln(); D(); D(); L(); D(); Ln(); D(); L();
            printf("\tD`  L  2D`  L`  D`  L  D`  L`\n");
            printf("\tL`  2D  L  D  L`  D  L\n");
        }else if(w[2][0]==6 && w[2][2]==6 && o[2][2]==6 && r[2][0]==6){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            Ln(); D(); D(); L(); D(); Ln(); D(); L(); Dn(); Ln(); D(); D(); L(); D(); Ln(); D(); L();               
            printf("\tL`  2D  L  D  L`  D  L  D`\n");
            printf("\tL`  2D  L  D  L`  D  L\n");
        }else if(w[2][0]==6 && w[2][2]==6 && b[2][0]==6 && b[2][2]==6){
            n2=1;
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
            Dn(); L(); Dn(); Dn(); Ln(); Dn(); L(); Dn(); Ln(); D(); D(); Ln(); D(); D(); L(); D(); Ln(); D(); L();
            printf("\tD`  L  2D`  L`  D`  L  D`  L`  2D\n");
            printf("\tL`  2D  L  D  L`  D  L\n");
        }
        if(b[0][0]!=6 || b[0][2]!=6 || b[2][0]!=6 || b[2][2]!=6){
            if(n2==0){
                Dn();
                n3++;
            }
        }
    }

    // stage5 starts from here
    n3=0;
    while(w[2][0]!=1 || w[2][2]!=1 || o[2][0]!=2 || o[2][2]!=2 || r[2][0]!=4 || r[2][2]!=4 || y[0][0]!=3 || y[0][2]!=3){
        if(w[2][0]==w[2][2] && o[2][0]!=o[2][2] && r[2][0]!=r[2][2] && y[0][0]!=y[0][2]){
        if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }
        n3=0;
        L(); Bn(); L(); F(); F(); Ln(); B(); L(); F(); F(); L(); L();
        printf("\tL  B`  L  F  F  L`  B  L  F  F  L  L\n"); 
        }

        if(n3==4){
        L(); Bn(); L(); F(); F(); Ln(); B(); L(); F(); F(); L(); L();
        printf("\tL  B`  L  F  F  L`  B  L  F  F  L  L\n");
        n3=0;
        }

        if(w[2][0]!=1 || w[2][2]!=1 || o[2][0]!=2 || o[2][2]!=2 || r[2][0]!=4 || r[2][2]!=4 || y[0][0]!=3 || y[0][2]!=3){
            Dn();
            n3++;
        }
    }
            if(n3==2){
                printf("\t%dD`\n",n3);
            }else if(n3==1){
                printf("\tD`\n");
            }else if(n3==3){
                printf("\tD\n");
            }

    // stage6 starts from here

    while(w[2][1]!=1 || o[2][1]!=2 || r[2][1]!=4 || y[0][1]!=3){
    if(y[0][1]==3){
        if(w[2][1]==4 && r[2][1]==2 && o[2][1]==1){
            L(); Dn(); L(); D(); L(); D(); L(); Dn(); Ln(); Dn(); L(); L();
            printf("\tL  D`  L  D  L  D  L  D`  L`  D`  L  L\n");
            break;
        }else{
            L(); L(); D(); L(); D(); Ln(); Dn(); Ln(); Dn(); Ln(); D(); Ln(); 
            printf("\tL  L  D  L  D  L`  D`  L`  D`  L`  D  L`\n");
            break;
        }
    }
    if(w[2][1]==3 && r[2][1]==2){
        L(); Dn(); L(); D(); L(); D(); L(); Dn(); Ln(); Dn(); L(); L(); D(); L(); Dn(); L(); D(); L(); D(); L(); Dn(); Ln(); Dn(); L(); L(); Dn(); 
        printf("\tL  D`  L  D  L  D  L  D`  L`  D`  L  L  D\n");
        printf("\tL  D`  L  D  L  D  L  D`  L`  D`  L  L  D`\n");
        break;
    }
    if(w[2][1]==4 && o[2][1]==3){
        L(); Dn(); L(); D(); L(); D(); L(); Dn(); Ln(); Dn(); L(); L(); Dn(); L(); Dn(); L(); D(); L(); D(); L(); Dn(); Ln(); Dn(); L(); L(); D(); 
        printf("\tL  D`  L  D  L  D  L  D`  L`  D`  L  L  D`\n");
        printf("\tL  D`  L  D  L  D  L  D`  L`  D`  L  L  D\n");
        break;
    }
    if(o[2][1]==2){
        if(r[2][1]==3 && y[0][1]==1 && w[2][1]==4){
            B(); Dn(); B(); D(); B(); D(); B(); Dn(); Bn(); Dn(); B(); B();
            printf("\tB  D`  B  D  B  D  B  D`  B`  D`  B  B\n");
            break;
        }else{
            B(); B(); D(); B(); D(); Bn(); Dn(); Bn(); Dn(); Bn(); D(); Bn();
            printf("\tB  B  D  B  D  B`  D`  B`  D`  B`  D  B`\n");
        }
    }
    if(r[2][1]==3 && w[2][1]==2){
        B(); Dn(); B(); D(); B(); D(); B(); Dn(); Bn(); Dn(); B(); B(); Dn(); B(); Dn(); B(); D(); B(); D(); B(); Dn(); Bn(); Dn(); B(); B(); D();
        printf("\tB  D`  B  D  B  D  B  D`  B`  D`  B  B  D`\n");
        printf("\tB  D`  B  D  B  D  B  D`  B`  D`  B  B  D\n");
        break;
    }
    if(w[2][1]==1){
        if(y[0][1]==2 && o[2][1]==4 && r[2][1]==3){
            R(); Dn(); R(); D(); R(); D(); R(); Dn(); Rn(); Dn(); R(); R();
            printf("\tR  D`  R  D  R  D  R  D`  R`  D`  R  R\n");
            break;
        }else{
            R(); R(); D(); R(); D(); Rn(); Dn(); Rn(); Dn(); Rn(); D(); Rn(); 
            printf("\tR  R  D  R  D  R`  D`  R`  D`  R`  D  R`\n");
            break;
        }
    }
    if(r[2][1]==4){
        if(o[2][1]==1 && w[2][1]==3 && y[0][1]==2){
            F(); Dn(); F(); D(); F(); D(); F(); Dn(); Fn(); Dn(); F(); F();
            printf("\tF  D`  F  D  F  D  F  D`  F`  D`  F  F\n");
            break;
        }else{
            F(); F(); D(); F(); D(); Fn(); Dn(); Fn(); Dn(); Fn(); D(); Fn(); 
            printf("\tF  F  D  F  D  F`  D`  F`  D`  F`  D  F`\n");
            break;
        }
    }
    }
printf("\n\n\t=======RUBIK`S CUBE SOLVED!=======\n\n");

}
    return 0;
}
