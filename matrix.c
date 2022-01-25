#include <stdio.h>
void matrixInput(int mat[][COL]);
void matrixPrint(int mat[][COL]);
void matrixMultiply(int mat[][COL]);
int main()

{
   int mat1[ROW][COL];
   int mat2[ROW][COL];
   int product[ROW][COL];
printf("enter elements in first matrix of size %dx%d\n",row,col);
matrixInput(mat1);
printf("enter elements in second matrix of size %dx%d\n",row,col);
matrixInput(mat2);
matrixMultiply(mat1,mat2,product);
printf("product of both matrices is:\n");
matrixPrint(product);
return 0;


}
void matrixInput(int mat[][COL])
{
int row,col;
for(row=0;row<ROW;row++)
{
for(col=0;col<COL;col++)
{
scanf("%d",(*(mat+row)+col));
}
}
}
void matrixPrint(int mat[][COL])
{
int row,col;
for(row=0;row<ROW;row++)
{
for(col=0;col<COL;col++)
{
printf("%d",*(*(mat+row)+col));
}
}
}
void matrixMultiply(int mat1[][Col],int mat2[][COL],int res[][COL])
{
int row,col,i;
int sum;
for(row=0;row<ROW;row++)
{
for(col=0;col<COL;col++)
{
sum=o;
for(i=0;i<COL;i++)
{
sum+=(*(*(mat1+row)+i))*(*(*(mat2+i)+col));
}

}
*(*(res+row)+col)=sum;
}
}
