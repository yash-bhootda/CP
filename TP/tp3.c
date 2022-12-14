#include<stdio.h>
#define max 50

int bf[max] , ff[max];
int fra[max] , b[max] , f[max] , i , j , nb , nf , temp , highest =0 , lowest =10000;

//first fit function

void ffit()
{
    printf("\nFirst Fit");

    for(i =1 ;i<=nf ; i++)
    {
        for(j=1 ;j<=nb ; j++)
        {
            if(bf[j] != 1)
            {
                temp =b[j] - f[i];
                if(temp >= 0)
                {
                    ff[i] = j;
                    break;
                }
            }
        }
        fra[i] = temp;
        bf[ff[i]] = 1;
    }

    printf("\n Process_no\tProcess_size \tMP_no\t MP_size\tFragment");
    for(i=1;i<=nf;i++)
    {
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d" , i ,f[i] , ff[i] , b[ff[i]] , fra[i]);

    }
    printf("\n");
    for( i=1;i<=nf && ff[i]!=0 ;i++)
    {
        fra[i] =0;
        bf[i] =0;
        ff[i] =0;
    }
}

//Best fit function

void Bfit()
{
    printf("\nBest Fit");
    for(i=1;i<=nf;i++)
    {
        for(j=1;j<=nb;j++)
        {
            if(bf[j]!=1)
            {
                temp = b[j]-f[i];
                if(temp>=0)
                {
                    if(lowest > temp)
                    {
                        ff[i]=j;
                        lowest=temp;
                    }
                }
            }
        }


        fra[i]=lowest;
        bf[ff[i]]=1;
        lowest=10000;
    }

    printf("\nProcess_no \tProcess_size \tMP_no \t MP_size \tFragment");
    for(i=1;i<=nf && ff[i]!=0 ;i++)
    {
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d" , i , f[i] , ff[i] , b[ff[i]] , fra[i]);
    }
    printf("\n\n");
    for(i=1;i<=nf && ff[i]!=0 ; i++)
    {
        fra[i]=0;
        bf[i]=0;
        ff[i]=0;
    }
}

void Wfit()
{
    printf("\nWorst Fit");
    for(i=1;i<=nf;i++)
    {
        for(j=1;j<=nb;j++)
        {
            if(bf[j]!=1)
            {
                temp = b[j]-f[i];
                if(temp>=0)
                {
                    if(highest < temp)
                    {
                        ff[i]=j;
                        highest=temp;
                    }
                }
            }
        }


        fra[i]=highest;
        bf[ff[i]]=1;
        highest=0;
    }
    printf("\nProcess_no \tProcess_size \tMP_no \t MP_size \tFragment");
    for(i=1;i<=nf  ;i++)
    {
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d" , i , f[i] , ff[i] , b[ff[i]] , fra[i]);
    }
    printf("\n\n");

}

int main()
{
    printf("\nEnter the number of memory Partitions : ");
    scanf("%d" , &nb);
    printf("\nEnter the number of Processes : ");
    scanf("%d" , &nf);
    printf("\nEnter the size of Memory Partions :\n");
    for(i=1;i<=nb;i++)
    {
        printf("Memory Partition %d : " , i);
        scanf("%d" , &b[i]);
    }

    printf("Enter the size of process \n");
    for(i=1;i<=nf;i++)
    {
        printf("Mmory Partition %d : " , i);
        scanf("%d" , &f[i]);
    }

    ffit();
    Bfit();
    Wfit();
}