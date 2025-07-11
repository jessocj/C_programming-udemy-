#include <stdio.h>
#include <stdlib.h>
//"very ascending " or "not vry ascending"
int main()
{
        int seqsize;
        int previousvalue=0,currentvalue=0;
        int veryasendingflag=1;
        printf("enter the seq size: ");
        scanf("%d",&seqsize);
        if(seqsize<=0)
            printf("wait a min..try again plz!! \n");
        else
        {
            do
            {
                printf("insert value :");
                scanf("%d",&currentvalue);
                //1,5,6
                //3,5,8,1,10
                if(currentvalue<0)
                    printf("number isnt positive !\n");//**come back here**//
                else
                {
                    if(currentvalue<=previousvalue)//not very ascending
                        veryasendingflag=0;
                    previousvalue=currentvalue;
                    seqsize--;
                }

            }while(seqsize>0);
            if(veryasendingflag==1)
                printf("seq is  very ascending");
            else
                printf("the seq is not very ascending");
        }

        return 0;
}
 



/*optimum code
---------------------

#include <stdio.h>
#include <stdlib.h>
//"very ascending " or "not vry ascending"
int main()
{
        int seqsize;
        int previousvalue=0,currentvalue=0;
        int veryasendingflag=1;
        do{
            printf("enter the seq size (greater than zero): ");
            scanf("%d",&seqsize);
        }while(seqsize<=0);


        do
        {
                printf("insert value :");
                scanf("%d",&currentvalue);
                //1,5,6
                //3,5,8,1,10
                if(currentvalue<0)
                    printf("number isnt positive !\n");//come back here/
                else
                {
                    if(currentvalue<=previousvalue)//not very ascending
                        veryasendingflag=0;
                    previousvalue=currentvalue;
                    seqsize--;
                }

            }while(seqsize>0);
            if(veryasendingflag==1)
                printf("seq is  very ascending");
            else
                printf("the seq is not very ascending");


        return 0;

}

*/