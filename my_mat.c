#include <stdio.h>
#include <math.h>
#define MATSIZE 10

int fooA(int mat[MATSIZE][MATSIZE]){
    int i,j;
    for(i=0; i<MATSIZE;i++){
        for(j=0;j<MATSIZE;j++){
            scanf(" %d", &mat[i][j]);
            if (mat[i][j]==0 && i!=j){
                mat[i][j]=1000000;
            }
        }
    }
    return 1;
}

int fooB(int mat[MATSIZE][MATSIZE],int i, int j){
    int checker = fooC(mat,i,j);
    if(checker == -1){
        return 0;
    }
    else{
        return 1;
    }
}

int mat_builder (int mat0[MATSIZE][MATSIZE],int mat1[MATSIZE][MATSIZE],int k ){
    int checker1,checker2,x,y;
    for (int i = 0; i <MATSIZE ; i++) {
        for (int j = 0; j <MATSIZE ; j++) {
            if (i==j){
                mat1[i][j]=0;
            }
            else if(i==k){
                mat1[k][j]=mat0[k][j];
            }
            else if(j==k){
                mat1[i][k]=mat0[i][k];
            }
            else{
                checker1=INFINITY;
                x=mat0[i][k];
                y=mat0[k][j];
                checker2=INFINITY;
                if (x!=INFINITY && y!=2147483647){
                    checker2=x+y;
                }
                if (mat0[i][j]!=INFINITY){
                    checker1=mat0[i][j];
                }
                if (checker1==INFINITY && checker2==INFINITY){
                    mat1[i][j]=INFINITY;
                    continue;
                }
                if (checker1!=INFINITY && checker2==INFINITY){
                    mat1[i][j]=checker1;
                    continue;
                }
                if (checker1==INFINITY && checker2!=INFINITY){
                    mat1[i][j]=checker2;
                    continue;
                }
                if (checker1<checker2){
                    mat1[i][j]=checker1;
                }
                else{
                    mat1[i][j]=checker2;
                }
            }
        }
    }
    return 1;
}

int fooC(int mat[MATSIZE][MATSIZE],int i,int j){
    int* checker2;
    int k;
    int checker= mat[i][j];
    int mat1[MATSIZE][MATSIZE],mat2[MATSIZE][MATSIZE],mat3[MATSIZE][MATSIZE],mat4[MATSIZE][MATSIZE],mat5[MATSIZE][MATSIZE],mat6[MATSIZE][MATSIZE],mat7[MATSIZE][MATSIZE],mat8[MATSIZE][MATSIZE],mat9[MATSIZE][MATSIZE],mat10[MATSIZE][MATSIZE];
    mat_builder(mat,mat1,0);
    mat_builder(mat1,mat2,1);
    mat_builder(mat2,mat3,2);
    mat_builder(mat3,mat4,3);
    mat_builder(mat4,mat5,4);
    mat_builder(mat5,mat6,5);
    mat_builder(mat6,mat7,6);
    mat_builder(mat7,mat8,7);
    mat_builder(mat8,mat9,8);
    mat_builder(mat9,mat10,9);
    int* pointers[]={mat1,mat2,mat3,mat4,mat5,mat6,mat7,mat8,mat9,mat10};
    for (k=0;k<MATSIZE;k++){
        checker2= pointers[k]+(MATSIZE*i)+ j;
        if (*checker2<checker){
            checker=*checker2;
        }
    }
    if (checker!=0 && checker!=INFINITY && checker<1000000){
        return checker;
    }
    else{
        return -1;
    }
}