

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void help(int**a ,int*b,int n,int m)
{
    int k=0;
    int rstart=0,cstart=0,rend=n-1,cend=m-1;
    while(rstart<=rend && cstart<=cend)
    {
        for(int j=cstart;j<=cend;j++)
        {
            b[k++]=a[rstart][j];
        }
        rstart++;
        for(int i=rstart;i<=rend;i++)
        {
            b[k++]=a[i][cend];
        }
        cend--;
        for(int j=cend;j>=cstart && rstart<=rend;j--)
        {
             b[k++]=a[rend][j];
        }
        rend--;
        for(int i=rend;i>=rstart &&cstart<=cend;i--)
        {
             b[k++]=a[i][cstart];
        }
        cstart++;
        
    }
}
    
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
 int*a=(int*)malloc(sizeof(int)*matrixSize*matrixColSize[0]);
    int n=matrixSize,m=matrixColSize[0];
    help(matrix,a,n,m);
    *returnSize=n*m;
    return a;
    
}