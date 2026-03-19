#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int val;
    struct Node *next;
} node;

node *head = NULL;

// Function prototypes with parameters
void insertatBegin(int);
void insertatEnd(int);
void insertatPos(int, int);
void insertVal(int, int);
void delatBegin();
void delatEnd();
void delatLoc(int);
void delatVal(int);
void traverse();
void search(int);
void freeList();  // Added for cleanup

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
    if (head == NULL) {
        printf("LIST IS EMPTY. CANNOT INSERT AFTER VALUE.\n");
        return;
    }
    
    node *newNode = (node *)malloc(sizeof(node));
    if(newNode == NULL){
        printf("MEMORY NOT ALLOCATED.\n");
        return;
    }
    newNode->val = item;
    
    node *temp = head;
    while(temp != NULL && temp->val != s){
        temp = temp->next;
    }
    
    if(temp == NULL){
        printf("ITEM %d NOT FOUND.\n", s);
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
    node *prev = NULL;
    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
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
        printf("NODE WITH VALUE %d DELETED SUCCESSFULLY.\n", val);
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
    printf("HEAD -> ");
    while(temp != NULL){
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

void search(int s){
    if(head == NULL){
        printf("List is empty.\nNothing to search.\n");
        return;
    }
    
    node *temp = head;
    int pos = 0;
    while(temp != NULL){
        if(temp->val == s){
            printf("Element %d found at position: %d\n", s, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Element %d not found in list.\n", s);
}

void freeList() {
    node *temp = head;
    while (temp != NULL) {
        node *next = temp->next;
        free(temp);
        temp = next;
    }
    head = NULL;
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
        printf("10. Search\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        
        switch(choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &item);
                insertatBegin(item);
                break;
                
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &item);
                insertatEnd(item);
                break;
                
            case 3:
                printf("Enter value and position: ");
                scanf("%d %d", &item, &pos);
                insertatPos(item, pos);
                break;
                
            case 4:
                printf("Enter value to insert and value to insert after: ");
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
                printf("Enter location to delete: ");
                scanf("%d", &pos);
                delatLoc(pos);
                break;
                
            case 8:
                printf("Enter value to delete: ");
                scanf("%d", &val);
                delatVal(val);
                break;
                
            case 9:
                traverse();
                break;
                
            case 10:
                printf("Enter value to search: ");
                scanf("%d", &val);
                search(val);
                break;
                
            case 0:
                freeList(); // Clean up memory before exiting
                printf("Exiting...\n");
                exit(0);
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}