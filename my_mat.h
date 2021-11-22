#ifndef EX2_MY_MAT_H
#define EX2_MY_MAT_H

/*
 * This function gets 100 scanf's to build a 10x10 matrix that represents a graph.
*/
int fooA(int mat[10][10]);
/* Will return if our graph has a route from point i to point j */
int fooB(int mat[10][10],int helpingMat[10],int i, int j);
/* Will return the lowest weight route there is from point i to point j */
int fooC(int mat[10][10],int i,int j);


#endif //EX2_MY_MAT_H
