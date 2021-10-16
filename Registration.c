//Student ID: 2240760
//BEng Mechatronic and Robotic Engineering
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    int loop = 0, N;
    char registration[7];
    printf("Enter The Registration Number (Enter 'THE_END' to exit):\n");
    do{
    scanf("%s", registration);
    if(strcmp(registration, "THE_END") != 0) //If the strings are identical the value is zero thus the not equal operator is used
   {
    if(strlen(registration) == 7)
        {
    if(registration[0] == 'A' || registration[0] == 'B' || registration[0] == 'C' || registration[0] == 'D') // if statement is used to print an error message if the output is invalid
    {
      switch(registration[0])
      {
      case 'A':
        printf("Anglia");
        break;
      case 'B':
        printf("Birmingham");
        break;
      case 'C':
        printf("Cymru");
        break;
      case 'D':
        printf("Deeside");
        break;
      }
      N = atoi(registration+2);
      printf(" %02d %d", (6*(N/50))+3, (N % 50)+2000);
      printf(" %.3s\n", registration+4); //.3 indicates the values to display and +4 indicates where the value starts
    }
    else
    {
        printf("Invalid Region\n");
    }
        }
    else
    {
        printf("Input is not 7 Characters Long\n");
    }
   }
    else
    {
        loop = 1;
    }
    }while(!loop);
    return 0;
}
