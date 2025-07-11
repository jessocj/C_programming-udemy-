//parameters &  returned

// calc & return avg grade
//-------------------------
#include<stdio.h>

float findavg(int grade1,int grade2,int grade3)
{

    float avg;
    avg=(grade1+grade2+grade3)/3.0;
    return avg;
}

int main()
    {

        int g1,g2,g3;
        printf("enter 3 grades :");
        scanf("%d %d %d",&g1,&g2,&g3);

        printf("avg=%.2f\n",findavg(g1,g2,g3));
        return 0;
    }

