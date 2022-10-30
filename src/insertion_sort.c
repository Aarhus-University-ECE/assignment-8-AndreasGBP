#include "insertion_sort.h"
#include "linked_list.h"



void sort(linked_list *llPtr)
{
    node_t *pointer = llPtr->head; //Keeps track of which node is the current
    node_t *temporary; 
    node_t *temporary_pointer = llPtr->head;

    while(pointer -> next != NULL) //Keeps going through the loop until we hit the end of the list
    {
        if(pointer -> data >= (pointer -> next -> data)) //If the value of data is larger than the next element, it moves along
        {
            temporary = pointer -> next;
            printLL(llPtr); 
            pointer -> next = pointer -> next -> next;
            while(temporary_pointer != pointer -> next) //
            {
                if(temporary -> data <= temporary_pointer -> data) //If the value of data is smaller than the value we want to move then it stops
                {
                    temporary -> next = temporary_pointer;
                    llPtr -> head = temporary;
                    break;
                }
                else if ((temporary -> data) <= (temporary_pointer -> next -> data)) //If the value of data is smaller than the next data we move to stop
                {
                    temporary -> next = temporary_pointer -> next;
                    temporary_pointer -> next = temporary;
                    break;
                }
                temporary_pointer = temporary_pointer -> next;
            }
            temporary_pointer = llPtr -> head;
        }
        else 
            pointer = pointer -> next; //If next node is larger than the current. 
    }
}