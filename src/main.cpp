extern "C"{
    // Add the header files required to run your main 
    #include "insertion_sort.h"
    #include "linked_list.h"
    #include "list_queue.h"

}

// File for sandboxing and trying out code
/*int main(int argc, char **argv)
{
    int testlist[] ={4,3,10,1,6};
    {
    linked_list* test = createLinkedList();
    for (int i = 0; i < 5; ++i)
    {
        insertFront(createNode(testlist[5-i-1]), test);
    }
    
    printLL(test);
    sort(test);
    printLL(test);
    queue q;
    init_queue(&q);
    printf("%d\n", empty(&q));
    //Above test is my test for sorting a list
   /* queue q;
    init_queue(&q);
    printf("%d\n", empty(&q));
    enqueue(&q, 10);
    enqueue(&q, 5);
    enqueue(&q, 15);
    printf("%d\n", empty(&q));
    printf("%d\n", q.front->data);
    //printf("%d", q.front->next->data);
    printf("%d", q.rear->data);
    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));
    printf("%d", empty(&q));*/
    //return 0;

int main(int argc, char **argv)
{

    linked_list* list = createLinkedList();
    node_t* addThis = createNode(5);
    insertFront(addThis, list);
    addThis = createNode(9);
    insertFront(addThis, list);
    addThis = createNode(13);
    insertFront(addThis, list);
    addThis = createNode(18);
    insertFront(addThis, list);
    addThis = createNode(55);
    insertFront(addThis, list);
    addThis = createNode(0);
    insertFront(addThis, list);
    addThis = createNode(-5);
    insertFront(addThis, list);
    addThis = createNode(10);
    insertFront(addThis, list);
    addThis = createNode(67);
    insertFront(addThis, list);
    addThis = createNode(1);
    insertFront(addThis, list);

    
    //printLL(list);
    sort(list);
    //list->head = swap(list->head, list->head->next);
    //printLL(list);



    // printf("Is  empty after creation: %d", isempty(list));

    return 0;
}