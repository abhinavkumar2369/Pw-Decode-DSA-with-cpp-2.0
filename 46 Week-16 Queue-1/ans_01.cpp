#include <iostream>
#include <vector>
using namespace std;

class MyCircularDeque {
    vector<int> data;
    int front, rear, size, cap;
public:
    MyCircularDeque(int k) : data(k), front(0), rear(0), size(0), cap(k) {}

    bool insertFront(int value) {
        if(isFull()) return false;
        front = (front - 1 + cap) % cap;
        data[front] = value;
        size++;
        return true;
    }

    bool insertLast(int value) {
        if(isFull()) return false;
        data[rear] = value;
        rear = (rear + 1) % cap;
        size++;
        return true;
    }

    bool deleteFront() {
        if(isEmpty()) return false;
        front = (front + 1) % cap;
        size--;
        return true;
    }

    bool deleteLast() {
        if(isEmpty()) return false;
        rear = (rear - 1 + cap) % cap;
        size--;
        return true;
    }

    int getFront() {
        if(isEmpty()) return -1;
        return data[front];
    }

    int getRear() {
        if(isEmpty()) return -1;
        return data[(rear - 1 + cap) % cap];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == cap;
    }
};

int main() {
    int k, q;
    cin >> k >> q;
    MyCircularDeque dq(k);
    while(q--) {
        string op;
        cin >> op;
        if(op == "insertFront") {
            int x; cin >> x;
            cout << dq.insertFront(x) << endl;
        } else if(op == "insertLast") {
            int x; cin >> x;
            cout << dq.insertLast(x) << endl;
        } else if(op == "deleteFront") {
            cout << dq.deleteFront() << endl;
        } else if(op == "deleteLast") {
            cout << dq.deleteLast() << endl;
        } else if(op == "getFront") {
            cout << dq.getFront() << endl;
        } else if(op == "getRear") {
            cout << dq.getRear() << endl;
        } else if(op == "isEmpty") {
            cout << dq.isEmpty() << endl;
        } else if(op == "isFull") {
            cout << dq.isFull() << endl;
        }
    }
    return 0;
}
