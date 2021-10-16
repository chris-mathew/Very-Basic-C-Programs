//Christopher Mathew
//Student ID: 2240760
//BEng Mechatronic and Robotic Engineering
#include <stdio.h>
#include <math.h> //The absolute value function is required in the program
#define Lbolt 50 //The constants are defined here since it would be easier to change it here than going through each function.
#define Dbolt 12 // The letters L and D stand for length and diameter which makes it easier to identify them

int main(void)
{
    float tolerance, length, diameter, Tlength, Tdiameter; // This problem does not require the precession of a double variable and thus using a float is effective and efficient since it processes faster than a double. Int variables are used for counters and loop requirements as they are whole numbers
    int total = 0, loop = 0, passed = 0; //The names are short and hint at the function it will be used in such as loop which is used to control the do while loop. Another example is length as the program needs a variable to store the total length, the capital T in Tlength makes it easy to differentiate the variables
    printf("Enter the tolerance in mm:\n");
    scanf("%f", &tolerance);
    tolerance = abs(tolerance); //Incase the user inputs a negative tolerance it'll be converted to a positive value
    printf("Enter the bolt length then enter the diameter in mm (Input a negative number to end)\n");
    do {
    scanf("%f %f", &length, &diameter); //Input of length and diameter is put into one statement as they need to be entered one after another
    if (length >= 0 && diameter >= 0){ //Intital check to signal whether the program should continue based on the validity of the input
    Tlength += length, Tdiameter += diameter, total++;
    if (abs(Lbolt - length) <= tolerance && abs(Dbolt - diameter) <= tolerance){ //The absolute value is taken to find the difference between the values incase the result is negative and is checked to see if it is within tolerance. The Dbolt and Lbolt are constants defined earlier
        printf("Within Tolerance\n");
        passed ++;
    }
    else {
        printf("Not Within Tolerance\n");
     } //A space is used to make the brackets look organized
    }
    else{
    loop = 1; // Ends the loop. Using ++ would also work, however it is safer to keep it as 1 incase there is an error in the previous value of the vriable
     }
    }while(!loop);
    printf("\nBolts within tolerance : %d", passed);
    printf("\nPercentage of bolts were within tolerance : %f", (float)passed*100/(float)total); //Converting the int to float for higher precession
    printf("\nAverage length of bolt : %f", Tlength/total); //Average is made simple as we already have the number of inputs and the sum of inputs
    printf("\nAverage diameter of bolt : %f", Tdiameter/total);
    return 0;
}
