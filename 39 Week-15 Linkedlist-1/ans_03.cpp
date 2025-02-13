#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

class LinkedList {
    Node* head;
    Node* tail;
    int sz;
public:
    LinkedList() : head(nullptr), tail(nullptr), sz(0) {}

    void insertHead(int val) {
        Node* n = new Node(val);
        n->next = head;
        head = n;
        if (!tail) tail = n;
        sz++;
    }

    void insertTail(int val) {
        Node* n = new Node(val);
        if (!tail) {
            head = tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
        sz++;
    }

    void insertAt(int idx, int val) {
        if (idx == 0) {
            insertHead(val);
            return;
        }
        if (idx == sz) {
            insertTail(val);
            return;
        }
        Node* prev = head;
        for (int i = 0; i < idx - 1; i++) prev = prev->next;
        Node* n = new Node(val);
        n->next = prev->next;
        prev->next = n;
        sz++;
    }

    void deleteHead() {
        if (!head) return;
        Node* temp = head;
        head = head->next;
        delete temp;
        sz--;
        if (!head) tail = nullptr;
    }

    void deleteTail() {
        if (!head) return;
        if (head == tail) {
            delete head;
            head = tail = nullptr;
            sz = 0;
            return;
        }
        Node* prev = head;
        while (prev->next != tail) prev = prev->next;
        delete tail;
        tail = prev;
        tail->next = nullptr;
        sz--;
    }

    void deleteAt(int idx) {
        if (idx == 0) {
            deleteHead();
            return;
        }
        if (idx == sz - 1) {
            deleteTail();
            return;
        }
        Node* prev = head;
        for (int i = 0; i < idx - 1; i++) prev = prev->next;
        Node* temp = prev->next;
        prev->next = temp->next;
        delete temp;
        sz--;
    }

    int get(int idx) {
        Node* curr = head;
        for (int i = 0; i < idx; i++) curr = curr->next;
        return curr->data;
    }

    void display() {
        Node* curr = head;
        while (curr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};
