#include <stdio.h>
#include <stdlib.h>

// Structure for a linked list node
struct ListNode {
    int val;
    struct ListNode* next;
};

// Create a new node
struct ListNode* createNode(int value) {
    struct ListNode* newNode =
        (struct ListNode*)malloc(sizeof(struct ListNode));

    newNode->val = value;
    newNode->next = NULL;

    return newNode;
}

// Reverse the linked list
struct ListNode* reverseList(struct ListNode* head) {

    struct ListNode* prev = NULL;
    struct ListNode* current = head;

    while (current != NULL) {

        struct ListNode* next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }

    return prev;
}

// Print the linked list
void printList(struct ListNode* head) {

    while (head != NULL) {
        printf("%d", head->val);

        if (head->next != NULL) {
            printf(" -> ");
        }

        head = head->next;
    }

    printf(" -> NULL\n");
}

int main() {

    // Test Case 1: Typical case
    struct ListNode* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    head1->next->next->next = createNode(4);
    head1->next->next->next->next = createNode(5);

    head1 = reverseList(head1);

    printf("Test Case 1: ");
    printList(head1);


    // Test Case 2: Edge case - single node
    struct ListNode* head2 = createNode(1);

    head2 = reverseList(head2);

    printf("Test Case 2: ");
    printList(head2);

    return 0;
}