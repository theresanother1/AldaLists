//
//  list.c
//  ALDA_ExerciseLists
//
//  Created by Michael Strommer on 26.04.21.
//

#include <stdlib.h>
#include "list.h"

struct lightElement {
    char color;
    struct lightElement *next;
};

struct lightElement *createFirstElementof(struct lightElement **listOfLights, char color){
    //create new element of list with value given
    struct lightElement *elementToPutIn;
    elementToPutIn = (struct lightElement * ) malloc(sizeof(struct lightElement));
    elementToPutIn->color = color;

    //if list is completely empty, element is first item & points to nothing
    if (*listOfLights == nullptr){
        //printf("\nlistoflights is NULL");
        *listOfLights = elementToPutIn;
        elementToPutIn->next = nullptr;
    }
    //if list is not empty, new element points to beginning of list, beginning of list is now new element
    else {
        //printf("\nadd at beginning");
        elementToPutIn->next = *listOfLights;
        *listOfLights = elementToPutIn;

    }
    //printf("\nput in element");
    return elementToPutIn;
}
struct lightElement *addElementToEnd(char color, struct lightElement **listOfLights) {
    //create the new element
    struct lightElement *newElement;
    newElement = (struct lightElement*) malloc(sizeof(struct lightElement));
    newElement->color = color;

   //check if list is NULL
    if (*listOfLights == nullptr){
        *listOfLights = newElement;
        newElement->next = nullptr;
        return newElement;

    }
    //iterate over list to get to the end of it
    struct lightElement *currentElement = *listOfLights;
    while (currentElement->next != nullptr){
        currentElement=currentElement->next;
    }
    currentElement->next = newElement;
    newElement->next = NULL;

    return newElement;
}

struct lightElement *insertLightElement(char color, int placeInList, struct lightElement **listOfLights) {
   // printf("\nInside insertLightElement");
    struct lightElement *l = *listOfLights; //temporary pointer to start of list!!!!

    //the actual element to put into list
    struct lightElement *elementToPutIn;
    elementToPutIn = (struct lightElement * ) malloc(sizeof(struct lightElement));
    elementToPutIn->color = color;
    //printf("\nCreated Element");

    //check if list is NULL
    if (*listOfLights == nullptr) {
        *listOfLights = elementToPutIn;
       elementToPutIn->next = nullptr;
        return elementToPutIn;
    }
    //if light to be put in first place
    if (placeInList == 0){
       return createFirstElementof(listOfLights, color);
    }
    else {
        //loop through the list until you find element before the place in List
        int i = 0;
        while (i!=(placeInList-1)){
            l=l->next;
            i++;
        }
        elementToPutIn->next = l->next;
        l->next = elementToPutIn;
        return elementToPutIn;
    }



}
void deleteItem(int position, struct lightElement **listOfLights){
    struct lightElement *current = *listOfLights;
    //check if list is NULL
    if (*listOfLights == nullptr) {
      printf("List is empty already");
    }

    int i = 0;
    while (i!=(position-1)){
        current=current->next;
        i++;
    }
    struct lightElement *temp = NULL;
    temp = current->next;
    temp->color = current->color;
    current->next = current->next->next;
    free((temp));
    //printf("deleted item");
}


void hasElements (struct lightElement *aList){
    //printf("\nEntered hasElements \n");
    if (aList == nullptr){
        printf("\nList has no elements.");
        return;
    }
    else {
        //define element to iterate over list, starting at head of list
        struct lightElement *p = aList;
        printf(" %c", p->color);
        p = p->next;
        while (p!= nullptr){
           printf(" - %c", p->color);
           p=p->next;
       }
       printf("\n");
    }
}
void reverseList(struct lightElement **thisList){
    if (*thisList == NULL){return;}
    struct lightElement *current = *thisList;
    struct lightElement *previous = NULL;
    struct lightElement *nextElement = NULL;
    //looses the last letter ??
    do{
        nextElement = current->next;
        current->next = previous;
        previous = current;
        current=nextElement;
    }while (current != nullptr);
    *thisList = previous;
}



