## Questions 📝

1. Write a program to calculate the sum of the digits of a given positive integer using recursion.

2. Write a program to calculate the reverse of a given positive integer using recursion.

3. Given an integer num, return the number of steps to reduce it to zero. In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it. [Leetcode 1342]

4. Predict the output:

    ```cpp
    int fun(int n) {
        if (n <= 1) return 1;
        if (n % 2 == 0) return fun(n / 2);
            return fun(n / 2) + fun(n / 2 + 1);
    }
    ```