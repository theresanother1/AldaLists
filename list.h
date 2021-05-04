//
//  list.h
//  ALDA_ExerciseLists
//
//  Created by Michael Strommer on 26.04.21.
//

#ifndef list_h
#define list_h

#include <stdio.h>
struct lightElement *insertLightElement(char color, int placeInList, struct lightElement **listOfLights);
void hasElements (struct lightElement *aList);
struct lightElement *createFirstElementof(struct lightElement **listOfLights, char c);
struct lightElement *addElementToEnd(char c, struct lightElement **listOfLights);
void deleteItem(int position, struct lightElement **listOfLights);
void reverseList(struct lightElement **thisList);
#endif /* list_h */

