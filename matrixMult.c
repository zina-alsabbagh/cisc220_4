#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int rslt;
    int rowOne;
    int rowTwo;
    int columnOne;
    int columnTwo;
    int i;
    int j; 
    int k; 

    printf("Insert matrix 1 dimensions separated by a space: ");
    rslt=scanf("%d %d",&rowOne,&columnOne);
    if(rslt==EOF || rslt==0){
                fprintf(stderr,"Invalid input\n");
                exit(-1);
    }

    while(1) {
        printf("Insert matrix 2 dimensions separated by a space: ");
        rslt=scanf("%d %d",&rowTwo,&columnTwo);
        if(columnOne==rowTwo) {
            break;
        }

        if(rslt==EOF || rslt!=2){
                fprintf(stderr,"\nInvalid input\n");
                exit(-1);
        }
        fprintf(stderr,"Dimensions mismatch\n");
    }

    printf("Input matrix 1 elements separated by spaces: ");

    int mat1[rowOne][columnOne];
    int mat2[rowTwo][columnTwo];
    for(i=0;i<rowOne;i++) {
        for(j=0;j<columnOne;j++) {
            rslt=scanf("%d",&mat1[i][j]);
            if(rslt==0 || rslt==EOF){
                fprintf(stderr,"Invalid input\n");
                exit(-1);
            }
        }
    }

    printf("Input matrix 2 elements separated by spaces: ");
    for(i=0;i<rowTwo;i++) {
        for(j=0;j<columnTwo;j++) {
            rslt=scanf("%d",&mat2[i][j]);
            if(rslt==EOF || rslt==0){
                fprintf(stderr,"Invalid input\n");
                exit(-1);
            }
        }
    }
    printf("\nMatrix 1:\n");
    for(i=0;i<rowOne;i++) {
        for(j=0;j<columnOne;j++) {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for(i=0;i<rowTwo;i++) {
        for(j=0;j<columnTwo;j++) {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplcation result:\n");

    int finalOne[rowOne][columnTwo];
    for(i=0;i<rowOne;i++) {
        
        for(j=0;j<columnTwo;j++) {
            printf("Element [%d,%d] = ",i+1,j+1);
            int sum=0;

            for(k=0;k<columnOne;k++)
            {
        if (k == columnOne-1)
            printf("%d*%d = ",mat1[i][k],mat2[k][j]);
        else
            printf("%d*%d + ",mat1[i][k],mat2[k][j]);
                sum+=mat1[i][k]*mat2[k][j];
            }
            finalOne[i][j]=sum;
        printf("%d\n",sum);
        }
    }

    printf("\nFinal output:\n");
    for(i=0;i<rowOne;i++) {
        for(j=0;j<columnTwo;j++) {
        printf("%d\t",finalOne[i][j]);
    }
    printf("\n");
    }
}