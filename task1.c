#include<stdio.h>
#include<stdlib.h>

int main () {
 struct Node{
   int data;
   struct Node* next;
 };

 struct Node *head = NULL;
 struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
 struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
 struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));

 head = node1;
 node1->data = 10;
 node1->next = node2;

 node2->data = 20;
 node2->next = node3;

 node3->data = 30;
 node3->next = NULL;
 head = node1;

 struct Node* current = head;

 while(current !=NULL){
    printf("%d -> ",current->data);
    current = current->next;
 }
 printf("NULL\n");

 return 0;

}
