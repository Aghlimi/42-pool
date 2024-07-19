#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the linked list node structure

// // Function to create a new node
// struct Node* createNode(char* data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if (newNode == NULL) {
//         printf("Memory allocation failed\n");
//         exit(1);
//     }
//     newNode->data = strdup(data); // Copy the string data
//     newNode->next = NULL;
//     return newNode;
// }

// // Function to append a node to the end of the list
// void appendNode(struct Node** head, char* data) {
//     struct Node* newNode = createNode(data);
//     if (*head == NULL) {
//         *head = newNode;
//     } else {
//         struct Node* temp = *head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
// }

// // Function to print the linked list
// void printList(struct Node* head) {
//     struct Node* temp = head;
//     while (temp != NULL) {
//         printf("%s -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// // Function to free the linked list
// void freeList(struct Node* head) {
//     struct Node* temp;
//     while (head != NULL) {
//         temp = head;
//         head = head->next;
//         free(temp->data); // Free the duplicated string
//         free(temp);
//     }
// }

// int main() {
//     // Sample array of strings
//     char* strings[] = {"Hello", "World", "This", "Is", "Linked", "List"};
//     int numStrings = sizeof(strings) / sizeof(strings[0]);

//     struct Node* head = NULL;

//     // Insert strings into the linked list
//     for (int i = 0; i < numStrings; i++) {
//         appendNode(&head, strings[i]);
//     }

//     // Print the linked list
//     printList(head);

//     // Free the linked list
//     freeList(head);

//     return 0;
// }

typedef struct Node {
    int data;
    struct Node* next;
}r;

r *create(int* list,int len)
{
    int i = 0;
    r *l = malloc(sizeof(r));
    r *t = l;
    while (i < len)
    {
        l->data = (int)list[i];
        i ++;
        if(i < len)
            l->next = malloc(sizeof(r));
        l = l->next;
    }
    return t;
}
void ft_remove(r ** t,int x)
{
    r *p = *t;
    r *yo = p;
    int b = 1;
    while (p)
    {
        if (p->data == x)
        {
            if(b)
                *t = (*t)->next;
            else
                yo->next = p->next;
        }
        yo = p;
        p = p->next;
        b = 0;
    }
    
}
#include<stdio.h>
int main()
{
    int l[] = {1,2,3,4,6,7,8};
    r* list = create(l,7);
    ft_remove(&list,1);
    while (list)
    {
        printf("%d\n",list->data);
        list = list->next;
    }
    return 0;
}
 