#include<stdio.h>
#include<conio.h>
main()
{
printf("Pick an food item: \n1. french fies \n2. Burger \n3. Sandwitch \n4. Pasta \n5. Pizza");
int num=0;
scanf("%d",&num);
switch(num)
{
case 1:
     printf("Food item: French fries\n");
     printf("Price: Rs 99");
     break;
case 2:
     printf("Food item: Burger\n");
     printf("Price: Rs 129");
     break;
case 3:
     printf("Food item: Sandwitch\n");
     printf("Price: Rs 149");
     break;
case 4:
     printf("Food item: Pasta\n");
     printf("Price: Rs 179");
     break;
case 5:
     printf("Food item: Pizza\n");
     printf("Price: Rs 239");
     break;
default: printf("Invalid Choice");}
return 0;
}
