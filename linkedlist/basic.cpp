#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
    }
};

class LinkedList {
private:
    Node *head;
    Node *tail;

public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insertbeg(int data) {
        Node *newnode = new Node(data);
        if (head == NULL && tail == NULL) {
            head = tail = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
    }

    void insertinbet(int data, int pos) {
        Node *newnode = new Node(data);
        Node *temp = head;
        int count = 0;
        if (pos < 0) {
            return;
        }
        if (pos == 0) {
            insertbeg(data);
            return;
        }
        while (temp->next != NULL && count < pos - 1) {
            temp = temp->next;
            count++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    void insertatend(int data) {
        Node *newnode = new Node(data);
        if (head == NULL && tail == NULL) {
            head = tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    void delbeg() {
        if (head == NULL && tail == NULL) {
            cout << "ll is empty";
        }
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    void delend() {
        if (head == NULL && tail == NULL) {
            cout << "ll is empty";
        }
        Node *temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        delete temp;
    }

    void printlist() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }

    void search(int data) {
        Node *temp = head;
        int index = 0;
        bool found = false;
        while (temp != NULL) {
            if (temp->data == data) {
                cout << "Found at index: " << index << endl;
                found = true;
                break;
            }
            temp = temp->next;
            index++;
        }
        if (!found) {
            cout << -1 << endl;
        }
    }
};

int main() {
    LinkedList ll;
    ll.insertbeg(10);
    ll.insertbeg(20);
    ll.insertbeg(30);
    cout << "List after inserting at the beginning: ";
    ll.printlist();
    ll.insertinbet(25, 2);
    cout << "List after inserting 25 at index 2: ";
    ll.printlist();
    ll.delend();
    cout << "List after deleting from the end: ";
    ll.printlist();
    cout << "Searching for 20 in the list: ";
    ll.search(20);
    cout << "Searching for 50 in the list: ";
    ll.search(50);
    return 0;
}
