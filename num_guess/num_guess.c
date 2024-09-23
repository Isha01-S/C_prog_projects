/*I am creating a number guessing game in which player has 5 lives*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int rNumber, guess;
int lives =5;
srand(time(NULL));

printf("\n!!Welcome To Number Guessing Game!!\n");
rNumber =rand() * 20 + 1;//generating between 0 to 20.

do {
printf("lives remaining : %d\n",lives);
printf("\nPlease Guess Your Number(between 1 to 20):\n"); 
scanf("%d",&guess);
lives--;

if (guess < rNumber){
printf("\nYou Have Entered A Smaller Number!!!\n");
}

else if (guess > rNumber){
printf("\nYou Have Entered a Larger Number!!!\n");
}
else {
printf("\n!!!Congratulations!!!You are Successful!!!\n");
}
if (lives == 0) {
printf("\n!!!Game Over!!!");
break;
}

}
while (guess != rNumber);

printf("\n!!!Thanks For Playing!!!\n");

printf("\nDeveloped BY - ISHA SRIWASTAV\n");
return 0;
}
