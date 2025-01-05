## Questions 📝

1. In a singly linked list, deletion of data requires modification of how many pointers?
    - 1
    - 2
    - 3
    - Depends upon the node being deleted.


2. Predict the output for linked list = 1->2->3->4->5:
    ```cpp
    void traverse(Node* head) {
        while(head and head->next) {
            cout << head->data << ‘ ‘;
            head = head->next->next;
        }
    }
    ```
    - 1 2 3 4 5
    - 1 3 5
    - 2 4
    - 1 3


Q3. Implement a Linked List class.
    The user defined LL should have insert (head,tail,idx) , delete(head,tail,idx) , get(idx) and display functions.