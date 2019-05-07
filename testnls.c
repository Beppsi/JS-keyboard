#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <time.h>

 int main() {


    srand(time(NULL)); //   0      1       2        3           4

    char hands[5][10] = {"Rock","Spock", "Paper","Lizard", "Scissors" }; //Options
    int u;
    int point = 0; //Points set to 0 before game
            for (u=0; u<3; u++) //Game loop, (best of 3 wins)
                {

                 if (u>0) { //Prints next round after the first one is done
                    printf("Next round!\n");
                   }
                    int i;
                    for (i=0; i<5; i++) { //Prints options in ordered list
                            printf("%d. %s \n", i+1, hands[i]);
                         }

                    int userHand;
                         printf("\n Number:  ");
                         scanf("%d", &userHand); //Reads users choice

                int computerHand = rand() % 6; //Defines computers hand randomly
                  //Allows to go from space 0 to 4 in array with 5 elements, lets printed list start at 1 
                userHand--; 
                 computerHand--;

                    printf("\nYou picked %s. Computer picked %s.\n", hands[userHand], hands[computerHand]); //This line isn't needed

                          if (userHand == 4 && computerHand == 0 ) { //4 Scissor vs 0 rock case
                              printf("\nComputer won with %s against your %s.\n\n", hands[computerHand], hands[userHand]);
                        }

                         else if (userHand<computerHand) {
                             printf("\nComputer won with %s against your %s.\n\n", hands[computerHand], hands[userHand]);
                        }

                         else if (userHand>computerHand) { //Win agaisnt computer
                             printf("\nComputer lost with %s against your %s.\n\n", hands[computerHand], hands[userHand]);
                             point++ ;
                         }

                         else if (userHand == computerHand) { //Tie
                             printf("\nComputer tied %s with your %s.\n\n",  hands[computerHand], hands[userHand]);
                         }

                }

       if (point>1) { //2/3 rights makes a total win
           printf("Congrats, you've won! %d out of 3 correct!\n", point);
       }

      else if (point<2) {
        printf("You've lost. %d out of 3 correct, pity\n", point);
      }
 }
