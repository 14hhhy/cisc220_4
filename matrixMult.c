#include<stdio.h>

int main() {
int x,y,x2,y2;
do {
printf("Insert matrix 1 dimensions separated by a space: ");
} while (scanf(" %d %d", &y, &x)!=2);
do {
printf("Insert matrix 2 dimensions separated by a spcae: ");
scanf(" %d %d", &y2, &x2);
if (x!=y2) {
printf("Dimensions Mismatch\n");
}
} while (x!=y2);
int arr1[y][x], arr2[y2][x2], arr3[y][x2];
int i,j,k;
printf("Input matrix 1 elements separated by spaces: ");
for (i=0; i<y; i++) {
for (j=0; j<x; j++) {
scanf(" %d", &arr1[i][j]);
}
}
printf("Input matrix 2 elements separated by spaces: ");
for (i=0; i<y2; i=i+1) {
for (j=0; j<x2; j=j+1) {
scanf(" %d", &arr2[i][j]);
}
}
printf("\nMatrix 1:\n");
for (i=0; i<y; i++) {
for (j=0; j<x; j++) {
printf("%d\t",arr1[i][j]);
}
printf("\n");
}
printf("\nMatrix 2:\n");
for (i=0; i<y2; i++) {
for (j=0; j<x2; j++) {
printf("%d\t",arr2[i][j]);
}
printf("\n");
}
printf("\nMultiplication Results:");
for (i=0; i<y; i++) {
for (j=0; j<x2; j++) {
int sum = 0;
printf("\nElement [%d,%d] =",i+1,j+1);
for (k=0; k<x; k++) {
sum = sum + (arr1[i][k] * arr2[k][j]);
printf(" %d*%d ",arr1[i][k],arr2[k][j]);
if (k<x-1) {
printf("+");
}
}
arr3[i][j] = sum;
printf("= %d",sum);
}
}
printf("\n\nFinal output:\n");
for (i=0; i<y; i++) {
for (j=0; j<x2; j++) {
printf("%d\t",arr3[i][j]);
}
printf("\n");
}
}
