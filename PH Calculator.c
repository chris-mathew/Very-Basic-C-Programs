//Christopher Mathew
//Student ID: 2240760
//BEng Mechatronic and Robotic Engineering
#include <stdio.h>
#include <math.h>
int main(void)
{
    double m, PH, POH;//Using a double since the ph utilizes the precession //Using capital for pH and pOH makes it easier to recognize
    printf("Enter the concentration of Hydrogen ions:");
    scanf("%le", &m);
    if (m <= 1 && m >= pow(10, -14)) {   //Intital condition to check if the input is valid
        PH = abs(-log10(m)); //absolute value is used as the result shows negative 0 when a value of 1 is entered
        POH = abs(-log10(1.0/(m*pow(10, 14)))); // Uses brackets to perform the multiplication of the denominator before the division
        printf("\npH : %f", PH); //Using %f as the output is in decimal format. The default decimal figures is sufficient for this task.
        printf("\npOH : %f", POH);
        printf("\nSum of the acidity and alkalinity : %f", PH+POH);
        printf("\nThe solution is a "); //Statement is printed here as it is used despite the type of solution the input falls under
        // Using only one printf would make it difficult to change the text if the need arises, thus I made individual functions as it is more organized
        if (PH <= 6.9) // The value cannot be lower than zero because of the first if statement so a second condition is not needed
        {
            printf("Acid");
        }
        else if (PH >= 7.1) // The value cannot be higher than 14 because of the first if statement
        {
            printf("Alkaline");
        }
        else {
            printf("Neutral"); //This is placed last as the only remaining value would satisfy its condition, thus not requiring a condition and making the program efficient
        }
    }
    else{
        printf("\n**Incompatible value was entered**\n(Input a value lower than 1 and higher than 10^-14)\n"); //Informing the user the limit of the value that could be entered
    }
    return 0;
}
