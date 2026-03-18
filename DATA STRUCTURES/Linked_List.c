#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int val;
    struct Node *next;
} node;
node *head = NULL;
void insertatBegin(int);
void insertatEnd(int);
void insertatPos(int, int);
void insertVal(int, int);
void delatBegin();
void delatEnd();
void delatLoc(int);
void delatVal(int);
void traverse();
void insertatBegin(int item){
    node *newNode = (node *)malloc(sizeof(node));
    if(newNode == NULL){
        printf("MEMORY NOT ALLOCATED.\n");
        return;
    }
    newNode->val = item;
    newNode->next = head;
    head = newNode;
    printf("NODE INSERTED\n");
}
void insertatEnd(int item){
    node *newNode = (node *)malloc(sizeof(node));
    if(newNode == NULL){
        printf("MEMORY NOT ALLOCATED.\n");
        return;
    }
    newNode->val = item;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        printf("NODE INSERTED\n");
        return;
    }
    node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("NODE INSERTED\n");
}
void insertatPos(int item, int pos){
    if (pos < 0) {
        printf("INVALID POSITION.\n");
        return;
    }
    node *newNode = (node *)malloc(sizeof(node));
    if(newNode == NULL){
        printf("MEMORY NOT ALLOCATED.\n");
        return;
    }
    newNode->val = item;
    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        printf("NODE INSERTED\n");
        return;
    }
    node *temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("INVALID POSITION.\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    printf("NODE INSERTED\n");
}
void insertVal(int item, int s){
    node *newNode = (node *)malloc(sizeof(node));
    if(newNode == NULL){
        printf("MEMORY NOT ALLOCATED.\n");
        return;
    }
    newNode->val = item;
    newNode->next = NULL;
    node *temp = head;
    while(temp != NULL && temp->val != s){
        temp = temp->next;
    }
    if(temp == NULL){
        printf("ITEM NOT FOUND.\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    printf("NODE INSERTED\n");
}
void delatBegin(){
    if(head == NULL){
        printf("EMPTY LIST.\nNOTHING TO DELETE.\n");
        return;
    }
    node *temp = head;
    head = head->next;
    free(temp);
    printf("NODE DELETED SUCCESSFULLY.\n");
}
void delatEnd(){
    if(head == NULL){
        printf("EMPTY LIST.\nNOTHING TO DELETE.\n");
        return;
    }
    if(head->next == NULL){
        free(head);
        head = NULL;
        printf("NODE DELETED SUCCESSFULLY.\n");
        return;
    }
    node *temp = head;
    node *p = NULL;
    while(temp->next != NULL){
        p = temp;
        temp = temp->next;
    }
    p->next = NULL;
    free(temp);
    printf("NODE DELETED SUCCESSFULLY.\n");
}
void delatLoc(int loc){
    if(head == NULL){
        printf("EMPTY LIST.\nNOTHING TO DELETE.\n");
        return;
    }
    if(loc < 0){
        printf("INVALID LOCATION.\n");
        return;
    }
    if(loc == 0){
        node *temp = head;
        head = head->next;
        free(temp);
        printf("NODE DELETED SUCCESSFULLY.\n");
        return;
    }
    node *temp = head;
    for(int i = 0; i < loc - 1 && temp != NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL){
        printf("INVALID LOCATION.\n");
        return;
    }
    node *T = temp->next;
    temp->next = T->next;
    free(T);
    printf("NODE DELETED SUCCESSFULLY.\n");
}
void delatVal(int val){
    if(head == NULL){
        printf("EMPTY LIST.\nNOTHING TO DELETE.\n");
        return;
    }
    if(head->val == val){
        node *temp = head;
        head = head->next;
        free(temp);
        printf("NODE DELETED SUCCESSFULLY.\n");
        return;
    }
    node *temp = head;
    while(temp->next != NULL && temp->next->val != val){
        temp = temp->next;
    }
    if(temp->next == NULL){
        printf("VALUE %d DOES NOT EXIST.\n", val);
        return;
    }
    node *T = temp->next;
    temp->next = T->next;
    free(T);
    printf("NODE WITH VALUE %d DELETED SUCCESSFULLY.\n", val);
}
void traverse(){
    if(head == NULL){
        printf("List is empty.\n");
        return;
    }
    node *temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    int choice, item, pos, val;
    while(1) {
        printf("\n--- LINKED LIST MENU ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Insert after Value\n");
        printf("5. Delete from Beginning\n");
        printf("6. Delete from End\n");
        printf("7. Delete from Location\n");
        printf("8. Delete by Value\n");
        printf("9. Traverse\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                scanf("%d", &item);
                insertatBegin(item);
                break;
            case 2:
                scanf("%d", &item);
                insertatEnd(item);
                break;
            case 3:
                scanf("%d %d", &item, &pos);
                insertatPos(item, pos);
                break;
            case 4:
                scanf("%d %d", &item, &val);
                insertVal(item, val);
                break;
            case 5:
                delatBegin();
                break;
            case 6:
                delatEnd();
                break;
            case 7:
                scanf("%d", &pos);
                delatLoc(pos);
                break;
            case 8:
                scanf("%d", &val);
                delatVal(val);
                break;
            case 9:
                traverse();
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
}