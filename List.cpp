#include "List.h"

void addNode(int value, ListNode* startNode) {

    ListNode* last = startNode;
    while (last->nextNode != nullptr) {
        last = last->nextNode;
    }

    last->nextNode = (ListNode*) malloc(sizeof(ListNode));
    last->nextNode->value = value;
    last->nextNode->nextNode = nullptr;
}


ListNode* getNode(int value, ListNode* startNode) {

    ListNode* last = startNode;
    while (last->nextNode != nullptr) {
    
        if (last->value == value) {

            return last;

        }

        last = last->nextNode;
    
    }

    return nullptr;

}

void printNodes(ListNode* startNode) {

    ListNode* last = startNode;

    if (last == nullptr) return;

    int i = 0;

    while (last->nextNode != nullptr) {
        printf("\nNode%d with value %d", i, last->value);

        i++;
        last = last->nextNode;
    }

}

void removeLast(ListNode* startNode) {
    
    if (startNode->nextNode == NULL) {
        retval = startNode->value;
        free(startNode);
    }

    ListNode* current = startNode;
    while (current->nextNode->nextNode != NULL) {
        current = current->nextNode;
    }

    retval = current->nextNode->value;
    free(current->nextNode);
    current->nextNode = NULL;

}
