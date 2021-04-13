#include <stdio.h>
main()
{
//Displaying the menu
printf("Pick a dish : \n1. Pasta \n2. Dosa \n3.Noodles \n4. Thepla");
//Read their choice
int choice=0;
scanf("%d",&choice);
//display their choice

switch(choice)
{
case 1:
printf("You picked Pasta.");
break;
case 2:
printf("You picked Dosa.");
break;
case 3:
printf("You picked Noodles.");
break;
case 4:
printf("You picked Thepla.");
break;
default : printf("Invalid dish");
}
}
