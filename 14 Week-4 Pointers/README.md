## Questions 📝

1. Write a program to find the product of two numbers using pointers.


2. ```int *p, q;```
    - p is a pointer and q is an integer.
    - p and q both are pointers.
    - P and q both are integers.
    - Syntax is incorrect.


3. Find the output of the following code snippet.

    ```cpp
    int a = 10, b = 20;
    int *ptr = &a;
    b = *ptr + 1;
    ptr = &b;
    cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;
    ```
    
    - 11 11 10
    - 10 10 10
    - 11 10 11
    - 10 11 10
  

4. Find the output of the following code snippet.

   ```cpp
   int a = 15, b = 20;
   int *ptr = &a;
   int *ptr2 = &b;
   *ptr = *ptr2;
   ```

   - ptr now points to b
   - ptr2 now points to a
   - a gets value of b
   - b gets value of a


5. Is the following program snippet correct?

    ```cpp
    int a = 10, b = 20;
    int *ptr;
    *ptr = 5;
    ```
