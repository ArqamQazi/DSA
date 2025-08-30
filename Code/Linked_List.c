#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    int size;
} MyLinkedList;


MyLinkedList* myLinkedListCreate() {
    MyLinkedList* obj = (MyLinkedList*) malloc(sizeof(MyLinkedList));
    obj->head = NULL;
    obj->size = 0;
    return obj;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    if (index < 0 || index >= obj->size) {
        return -1;
    }
    Node *curr = obj->head;
    for (int i = 0; i < index; i++) {
        curr = curr->next;
    }
    return curr->data;
}   

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = obj->head;
    obj->head = newNode;
    obj->size++;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    if (obj->head == NULL) {
        obj->head = newNode;
        obj->size++;
        return;
    }
    Node *tempNode = obj->head;
    while(tempNode->next != NULL) {
        tempNode = tempNode->next;
    }
    tempNode->next = newNode;
    obj->size++;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    if (index < 0 || index > obj->size) {
        return;
    }
    if (index == 0) {
        myLinkedListAddAtHead(obj, val);
        return;
    }
    if (index == obj->size) {
        myLinkedListAddAtTail(obj, val);
        return;
    }

    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    
    Node *curr = obj->head;
    for (int i = 0; i < index-1; i++) {
        curr = curr->next;
    }

    newNode->next = curr->next;
    curr->next = newNode;
    obj->size++;
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    if (index < 0 || index >= obj->size) {
        return;
    }
    Node *curr = obj->head;
    if (index == 0) {
        obj->head = obj->head->next;
        free(curr);
        obj->size--;
        return;
    }
    for (int i = 0; i < index-1; i++) {
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = temp->next;
    free(temp);
    obj->size--;
}

void myLinkedListFree(MyLinkedList* obj) {
    Node* tempNode = obj->head;
    while (tempNode != NULL) {
        Node* fNode = tempNode->next;
        free(tempNode);
        tempNode = fNode;
    }
    free(obj);
}
