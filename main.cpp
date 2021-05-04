
#include "list.h"
#include <stdlib.h>


int main(){

    struct lightElement *myList = nullptr;
    char c;
    int p = 0;
    char menu;
    printf("To start the simulation, please chose a letter from the menu: \n");
    printf("a to add a color at the start\n");
    printf("e to add color at the end\n");
    printf("i to insert a color\n");
    printf("l to delete a color\n");
    printf("u to reverse the list\n");
    printf("x to end the simualtion\n");
    do {
        printf("enter menu letter: \n");
        scanf(" %c", &menu);
        if (menu == 'x'){
            break;
        }
        if (menu == 'u'){
            reverseList(&myList);
            hasElements(myList);
            continue;
        }
        printf("\nenter color:");
        scanf(" %c",&c);

       if (c == 'r' || c == 'g' || c == 'b' || c == 'w' || c == 'o' || c == 'm') {
           if (menu == 'a') {
               while (c != '0'){
                   createFirstElementof(&myList, c);
                   printf("l: ");
                   scanf(" %c", &c);
               }
               hasElements(myList);
               continue;
           }
           else if (menu == 'e'){
               addElementToEnd(c, &myList);
               while (c != '0'){
                   printf("l: ");
                   scanf(" %c", &c);
                   if (c != '0'){
                       addElementToEnd(c, &myList);
                   }
               }
               hasElements(myList);
               continue;
           }
           else if (menu == 'i'){
               printf("enter position: ");
               scanf(" %d", &p);
               insertLightElement(c, p, &myList);
               hasElements(myList);
               continue;
           }
           else if (menu == 'l'){
               printf("enter position: ");
               scanf(" %d", &p);
               deleteItem(p, &myList);
               hasElements(myList);
               continue;
           }
       } else {
           printf("please enter a light");
           continue;
       }

    } while (menu != 'x');

    hasElements(myList);
    return 0;
}






