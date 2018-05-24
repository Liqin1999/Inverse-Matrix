#include <stdio.h>
#include <stdlib.h>
//修改下列值可以改变矩阵的规格
#define A1 2
#define A2 2

#define B1 A2 // A2==B1
#define B2 2

#define C1 A1//Auto deal with Juzheng C
#define C2 B2//Auto deal with Juzheng C
int main()
{
    int a[A1][A2],b[B1][B2],c[A1][B2]={0};
    int i,j;int k;

    printf("\nPlease text %dx%d Juzheng A :\n",A1,A2);//Input A
    for(i=0;i<A1;i++){
        for(j=0;j<A2;j++){
            scanf("%d",&a[i][j]);
        }//putchar('\n');
    }

    printf("\nPlease text %dx%d Juzheng B :\n",B1,B2);//Input B
    for(i=0;i<B1;i++){
        for(j=0;j<B2;j++){
            scanf("%d",&b[i][j]);
        }//putchar('\n');
    }

    for(i=0;i<A1;i++){
        for(j=0;j<B2;j++){
            for(k=0;k<A2;k++){
                c[i][j]+=a[i][k]*b[k][j];//Calculating Juzheng C
            }
        }
    }

    printf("\nThe product of JuzhengA and JuzhengB is :\n");//Output Juzheng C
    for(i=0;i<C1;i++){
        for(j=0;j<C2;j++){
            printf("\t%d",c[i][j]);
        }putchar('\n');
    }

    return 0;
}
