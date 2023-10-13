#include <iostream>

// Define the structure for a node in the singly linked list
struct Node {
    int data;
    Node* next;
};

// Class for singly linked list operations
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a new element at the beginning of the list
    void insertAtBeginning(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    // Function to display the elements in the list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    LinkedList list;

    // Insert elements at the beginning of the list
    list.insertAtBeginning(3);
    list.insertAtBeginning(2);
    list.insertAtBeginning(1);

    // Display the elements in the list
    std::cout << "Linked List: ";
    list.display();

    return 0;
}
