#include <stdio.h>

int main() {
    int checker;
    int i,j,k,m;
    int helpingMat[10]={0,0,0,0,0,0,0,0,0,0};
    int mat[10][10];
    while(1){
        char ch;
        scanf("%c",&ch);
        switch (ch) {
            case 'A':
                fooA(mat);
                break;

            case 'B':
                for(i=0;i<10;i++){helpingMat[i]=0;}
                scanf(" %d %d",&i,&j);
                checker = fooB(mat,helpingMat,i,j);
                if(checker==0){printf("False");}
                else{printf("True");}
                break;


            case 'C':
                scanf(" %d %d",&k,&m);
                checker = fooC(mat,k,m);
                printf("%d",checker);
                break;

            case 'D':
                return 0;
        }
    }




    return 0;
}