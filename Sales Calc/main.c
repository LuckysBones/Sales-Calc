/*Luc Gremillion
  February 8, 2023
  C Programming
  Rebecca Dewitt*/

  /*3.18 - A program that will input each salesperson�s
  gross sales for last week and will calculate
  and display that salesperson�s earnings*/

#include <stdio.h>

 //Main function 
int main() {
    //Declare variable to store sales info
    float salesLoop = 0;

    //While loop contunes until "salesLoop" is -1
    while (salesLoop != -1) {
        //Prompt to the user what is needed to run the program
        printf("\nEnter sales in dollars (-1 to end): ");
        scanf("%f", &salesLoop);

        //Control structure, tests to see if the input was -1
        if (salesLoop != -1)
            //Print out to the user what the weekly earings.
            printf("\nSalary is: $%.2f\n", (salesLoop * .09) + 200.0);
    }
}//End Main Function