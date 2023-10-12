#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}
    void insert(int key) {
        Node* newNode = new Node(key);
        if (!head) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    void search(int key) {
        int position = 1;
        Node* current = head;
        bool found = false;

        while (current) {
            if (current->data == key) {
                std::cout << "Key found at position: " << position << std::endl;
                found = true;
            }
            current = current->next;
            position++;
        }

        if (!found) {
            std::cout << "NOT FOUND" << std::endl;
        }
    }

    void countDuplicates(int key) {
        int count = 0;
        Node* current = head;

        while (current) {
            if (current->data == key) {
                count++;
            }
            current = current->next;
        }

        if (count == 0) {
            std::cout << "NO DUPLICATES" << std::endl;
        } else {
            std::cout << "Number of duplicates for key: " << count << std::endl;
        }
    }

    void removeDuplicates(int key) {
        if (!head) {
            return;
        }

        Node* current = head;
        while (current && current->next) {
            if (current->next->data == key) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                current = current->next;
            }
        }
    }

    void insertPosition(int key, int pos) {
        if (pos <= 0) {
            std::cout << "Invalid position" << std::endl;
            return;
        }

        if (pos == 1) {
            Node* newNode = new Node(key);
            newNode->next = head;
            head = newNode;
            return;
        }

        int currentPosition = 1;
        Node* current = head;

        while (current && currentPosition < pos - 1) {
            current = current->next;
            currentPosition++;
        }

        if (!current) {
            std::cout << "LIST TOO SMALL" << std::endl;
            return;
        }

        Node* newNode = new Node(key);
        newNode->next = current->next;
        current->next = newNode;
    }

    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;

    list.insert(5);
    list.insert(10);
    list.insert(15);
    list.insert(10);
    list.insert(20);
    std::cout << "Original list: ";
    list.display();
    list.search(10);
    list.countDuplicates(10);
    list.removeDuplicates(10);
    std::cout << "List after removing duplicates of key 10: ";
    list.display();
    list.insertPosition(25, 3);
    std::cout << "List after inserting 25 at position 3: ";
    list.display();
    return 0;
}
