#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <time.h>

 int main() {


    srand(time(NULL)); //   0      1       2        3           4

    char hands[5][10] = {"Rock","Spock", "Paper","Lizard", "Scissors" };
    int u;
    int point = 0;
            for (u=0; u<3; u++)
                {

                 if (u<0) { //How do i make this work if u is outside?
                    printf("Next round!\n");
                   }
                    int i;
                    for (i=0; i<5; i++) { //Prints options in ordered list
                            printf("%d. %s \n", i+1, hands[i]);
                         }

                    int userHand;
                         printf("\n Number:  ");
                         scanf("%d", &userHand);

                int computerHand = rand() % 6;

                userHand--;
                 computerHand--;

                    printf("\nYou picked %s. Computer picked %s.\n", hands[userHand], hands[computerHand]);

                          if (userHand == 4 && computerHand == 0 ) { //4 Scissor vs 0 rock case
                              printf("\nComputer won with %s against your %s.\n\n", hands[computerHand], hands[userHand]);
                        }

                         else if (userHand<computerHand) {
                             printf("\nComputer won with %s against your %s.\n\n", hands[computerHand], hands[userHand]);
                        }

                         else if (userHand>computerHand) {
                             printf("\nComputer lost with %s against your %s.\n\n", hands[computerHand], hands[userHand]);
                             point++ ;
                         }

                         else if (userHand == computerHand) { //Thai
                             printf("\nComputer tied %s with your %s.\n\n",  hands[computerHand], hands[userHand]);
                         }

                }

       if (point>1) {
           printf("Congrats, you've won! %d out of 3 correct!\n", point);
       }

      else if (point<2) {
        printf("You've lost. %d out of 3 correct, pity\n", point);
      }
 }
