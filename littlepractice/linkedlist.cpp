#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Global head pointer, initialized to null
Node* head = nullptr;

// Function to insert a node at the beginning of the list
void insertAtBeginning(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to insert a node at a specified position
void insertAtPosition(int value, int position) {
    Node* newNode = new Node(value);
    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    if (temp == nullptr) {
        cout << "Position out of range!" << endl;
        delete newNode;
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Function to delete a node from the beginning
void deleteFromBeginning() {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

// Function to delete a node from the end
void deleteFromEnd() {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
    } else {
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }
}

// Function to delete a node from a specified position
void deleteFromPosition(int position) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    for (int i = 1; i < position - 1 && temp->next != nullptr; i++) {
        temp = temp->next;
    }
    if (temp->next == nullptr) {
        cout << "Position out of range!" << endl;
    } else {
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
    }
}

// Function to display the list
void displayList() {
    if (head == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    int choice, value, position;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert at the beginning\n";
        cout << "2. Insert at the end\n";
        cout << "3. Insert at a position\n";
        cout << "4. Delete from the beginning\n";
        cout << "5. Delete from the end\n";
        cout << "6. Delete from a position\n";
        cout << "7. Display the list\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (head == nullptr) {
            cout << "The head is currently null.\n";
        } else {
            cout << "The head is not null.\n";
        }

        switch (choice) {
            case 1:
                cout << "Enter value to insert at the beginning: ";
                cin >> value;
                insertAtBeginning(value);
                break;
            case 2:
                cout << "Enter value to insert at the end: ";
                cin >> value;
                insertAtEnd(value);
                break;
            case 3:
                cout << "Enter value and position to insert: ";
                cin >> value >> position;
                insertAtPosition(value, position);
                break;
            case 4:
                deleteFromBeginning();
                break;
            case 5:
                deleteFromEnd();
                break;
            case 6:
                cout << "Enter position to delete: ";
                cin >> position;
                deleteFromPosition(position);
                break;
            case 7:
                displayList();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
