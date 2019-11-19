#include<stdio.h>
void main()
{
        int a[10][10],b[10][10],c[10][10];
        int m,n,i,j;
        printf("Enter size of matrix A as m,n:");
        scanf("%d%d",&m,&n);
        printf("\nEnter elements of matrix A rowwise m*n\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
        printf("enter the elements of second matrix\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        c[i][j]=b[i][j]+a[i][j];
                }
        }
        printf("\nSUM OF MATRIX A&B \n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d    ",c[i][j]);
                }
                printf("\n");
        }       
}       
