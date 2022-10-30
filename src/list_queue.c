#include "list_queue.h"
#include <assert.h>


void init_queue(queue *q)
{
  // Add your init_queue
  //Initialize of the queue
  q->front = NULL; //
  q->rear = NULL; //The rear pointer has no value
  q->size = 0; //Sets size to 0
}

int empty(queue *q)
{
  // Add your empty function
  return(q -> size <= 0); //The size of queue has to be zero or smaller than zero for it to be empty
}

void enqueue(queue *q, int x)
{
  // Add your enqueue function
  qnode *new = malloc(sizeof(qnode)); //Creating new node 
  if(q -> rear == NULL) //If the end of node has an undefined size
  {
    q -> rear = new; //The new node points to last node
    q -> rear -> data = x; //Adds data to the new node 
    q -> size++;
  }
  else if(q -> front == NULL) //If front has an undefined size 
  {
    q -> front = new; //The node new becomes q's first node
    q -> front -> data = x; //Adds data to the node new
    q -> rear -> next = q -> front; //Makes the front and last node the same value
    q -> size++;
  }
  else
  {
    q -> front -> next = new; //New next front node
    q -> front = new; //New front node
    q -> front -> data = x; //Adds data to new node
    q -> size++;
  }

}
int dequeue(queue *q)
{
  // Add your dequeue function
  int return_value = q -> rear -> data;
  qnode *temp = q -> rear; //Start at rear of queue
  q -> rear = q -> rear -> next; 
  q -> size = q -> size - 1; //After dequeue remove 1 from size
  free(temp);
  return return_value;
}