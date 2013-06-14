#include <stdio.h>
#include <strings.h>
struct Node
{
        int data;
        struct Node* next;
};
struct Node* getNode()
{
        struct Node* node = NULL;
        node = (struct Node*) malloc(sizeof(struct Node));
        if( NULL == node )
        {
                return NULL;
        }
        node->next = NULL;
        return node;
}
struct Node* insert_front( int data, struct Node* first)
{
        struct Node* node = getNode();
        if( NULL == node)
                return first;
        node->next = first;
        node->data = data;
        return node;
}
int getLength( struct Node* first )
{
        int i = 0;
        struct Node* node = first;
        //      while( node->next != NULL ) This Line Will Miss out last node so making node == Null
        while( node != NULL )
        {
                i++;
                node = node->next;
        }
        return i;
}
struct Node* insert_back(int data, struct Node* first)
{
        struct Node* node = first;
        while(node != NULL)
        {
                node = node->next;
        }
        if(node == NULL )
                node = getNode();
        node->data = data;
}
void display( struct Node* first )
{
        struct Node* node = first;

        while( node != NULL)
        {
                printf("%d, ", node->data);
                node = node->next;
        }
}
void deleteNode(int index, struct Node* first)
{
        struct Node* node = first;
        struct Node* tmp;
        int i = 0;
        while( node != NULL )
        {
                i++;
                tmp = node;
                node = node->next;
                if( i == index )
                        break;
        }

        if( i == index )
        {
                struct Node* tmp1 = tmp->next->next;
                free(tmp->next);
                tmp->next = tmp1;
        }
}
main()
{
        struct Node* first;
        first = insert_front(1,first);
        first = insert_front(2,first);

        first = insert_front(3,first);
        first = insert_front(4,first);
        first = insert_front(5,first);
        display(first);
        printf("\n");
        deleteNode(2,first);
        display(first);
        printf("\n");
}
                                        