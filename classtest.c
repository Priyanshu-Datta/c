#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertion(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
    printf("elements are inserted");
}
void displaylist(struct Node* head) {
    if (head == NULL) {
        printf("list is empty\n");
        return;
    }
    struct Node* temp = head;
    printf("list elements are: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void sorting(struct Node *head){
    while(head->next==NULL){
        if(head== head->next){
            head->next=head;
        }else if(head>head->next){
            int t=head;
            head=head->next;
            head->next=head;
        }
        head=head->next;
    }
}

int main() {
    
    struct Node* head = NULL;
    int a,b,c,d,e,f;
    printf("elements:");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

    insertion(&head, a);
    insertion(&head, b);
    insertion(&head, c);
    insertion(&head, d);
    insertion(&head, e);
    insertion(&head, f);
    displaylist(head);

    sorting(head);
    printf("list after sortint\n");
    displaylist(head);
}