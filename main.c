#include <stdio.h>
#define MATSIZE 10

int main() {
    int checker;
    int i,j,k,m;
    int mat[MATSIZE][MATSIZE];
    while(1){
        char ch;
        scanf("%c",&ch);
        switch (ch) {
            case 'A':
                fooA(mat);
                break;

            case 'B':
                scanf(" %d %d",&i,&j);
                checker = fooB(mat,i,j);
                if(checker==0){printf("False\n");}
                else{printf("True\n");}
                break;


            case 'C':
                scanf(" %d %d",&k,&m);
                checker = fooC(mat,k,m);
                printf("%d\n",checker);
                break;

            case 'D':
                return 0;
        }
    }

    return 0;
}