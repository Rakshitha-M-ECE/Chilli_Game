#include <stdio.h>

int main()
{
    int player1, player2, Chocolate=13;

    printf("\n-----Welcome To The Game-----\n");
    printf("\nTotal Number of chocolate=13\n\n");
     
    while(Chocolate>0)
    { 
        choco1:
        printf("Player 1 turn\n\n");
        printf("Pick chocolate (0-3):\n");
        scanf("%d",&player1);
        if(player1<1 || player1>3)
        {
            printf("\nEnter valid number between (0-3)\n\n");
            goto choco1;
        }
        if(Chocolate<player1){
            printf("\nInvalid! there is only %d chocolate left you cant select more than that\n",Chocolate);
            goto choco1;
        }
        Chocolate=Chocolate-player1;
        
        if(Chocolate==0)
        {
            printf("\nNow Only Chilli is remaining\n");
            printf("Player 2 gets chilli\n");
            printf("player 2 LOST the Game\n\n");
            printf("Player 1 WON the Game\n");
            break;
        }
        printf("\nChocolate Remaining = %d\n\n",Chocolate);

        choco2:

        printf("Player 2 turn\n\n");
        printf("Pick chocolate (0-3):\n");
        scanf("%d",&player2);
            if(player2<1 || player2>3)
               {
                   printf("\nEnter valid number between (0-3)\n\n");
                   goto choco2;
                }

            if(Chocolate<player2){
            printf("\nInvalid!there is only %d chocolate left you cant select more than that\n",Chocolate);
            goto choco2;
        }
        Chocolate=Chocolate-player2;
        
        if(Chocolate==0)
        {
            printf("\nNow Only Chilli is remaining\n");
            printf("Player 1 gets chilli\n");
            printf("player 1 LOST the Game\n\n");
            printf("Player 2 WON the Game\n");
            break;
        }
        printf("\nChocolate Remaining = %d\n\n",Chocolate);
    

    }

    return 0;

}