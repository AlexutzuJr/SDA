#include<stdio.h>
#include<stdlib.h>


struct JUCATOR
{
    char nume[100];
    int carte1;
    int carte2;
    int carte3;
    int suma;
    int max;
};

void citire(struct JUCATOR *a, int n)
{
    int i;
  
    for( i=0;i<n;i++)
    {
        scanf("%s",&(a+i)->nume);
        scanf("%d",&(a+i)->carte1);(a+i)->max=(a+i)->carte1;
        scanf("%d",&(a+i)->carte2);if((a+i)->max<(a+i)->carte2) {(a+i)->max=(a+i)->carte2;}
        scanf("%d",&(a+i)->carte3);if((a+i)->max<(a+i)->carte3) {(a+i)->max=(a+i)->carte3;}
        (a+i)->suma=(a+i)->carte1+(a+i)->carte2+(a+i)->carte3;
    } 
}

void afisare(struct JUCATOR *a, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s\n",(a+i)->nume);
        printf("%d\n",(a+i)->carte1);
        printf("%d\n",(a+i)->carte2);
        printf("%d\n",(a+i)->carte3);
    }
}

void solve(struct JUCATOR *a, int n)
{ 
    int smax=a->suma, j=0, vmax=a->max;
  
    for(int i=0;i<n;i++)
    {
        if(smax<(a+i)->suma)
        {
            smax=(a+i)->suma; 
            j=i;
        }
        else if (smax==(a+i)->suma)
        {
            if(vmax<(a+i)->max)
            {
                vmax=(a+i)->max;j=i; 
            }
        }
    }
    printf("%s",(a+j)->nume);   
}


int main()
{
    int n, test;
    scanf("%d", &test);
    scanf("%d", &n);
  
    struct JUCATOR *meci;
    meci=(struct JUCATOR *)malloc(n*sizeof(struct JUCATOR));
    citire(meci, n);
  
    if(test==1) 
    {
        afisare(meci, n);
    }
      
    else if(test==2)
    {
        solve(meci, n);
    }
    
    return 0;
}
