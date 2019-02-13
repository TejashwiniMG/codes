
#include <stdio.h>
#include <stdlib.h>
int *generate(void);
void star(int **);

int main()
{
   int m[10][10];
   int j;
       int **ptr=generate();
        for(int i=1;i<11;i++)
    {
        for(int j=1;j<5;j++)
        {
            printf("%d\t",ptr[i][j]);
            m[i][j]=ptr[i][j];

        }
       printf("\n");

    }// entering data in specific format



     for(int i=0;i<10;i++)
    {
        if((m[i][0]==(i+1)) && (m[i][0]<=5))
        {

            for(int j=0;j<=i;j++)
            {
                printf("* ");
                printf("\n");
            }
        }
        else
        {


            for(int k=j;k>0;k--)
            {
            printf("* ");
            }
            j=j-1;
             printf("\n");
        }
    }
    printf("\n");
}
int *generate()
{
    int **p,c=1;
    p=malloc(10*sizeof(int));

    for(int i=0;i<11;i++)
    {
            p[i]=malloc(5*sizeof(int));

    }
    for(int i=1;i<11;i++)
    {
        for(int j=1;j<6;j++)
        {
            *(*(p+i)+j)=i;
        }

    } 
   

    return p;
} // generating pattern and returning it to main

