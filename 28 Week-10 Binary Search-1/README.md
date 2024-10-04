## Questions 📝

1. Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’ does not exist return -1.

   ```sh
   Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
   Output 1: 6
   ```


2. Given a sorted binary array, efficiently count the total number of 1’s in it.

   ```sh
   Input 1 : a = [0,0,0,0,1,1]
   Output 1: 2
   ```


3. Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the maximum number of 1’s.

   ```sh
   Input matrix :
   0 1 1 1
   0 0 1 1
   1 1 1 1 // this row has maximum 1s
   0 0 0 0

   Output: 2
   ```


4. Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive in sorted order.
   There is only one repeated number in nums, return this repeated number.

   ```sh
   Input 1: arr[] = {1,2,3,3,4}
   Output 1: 3
   
   Input 2: arr[] = {1,2,2,3,4,5}
   Output 2: 2
   ```


5. Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.

   ```sh
   Input 1: n = 36
   Output 1: yes

   Input 2: n = 45
   Output 2: no
   ```


6. You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
   Given the integer n, return the number of complete rows of the staircase you will build.

   ```sh
   Example 1:
   Input: n = 5
   Output: 2
   Explanation: Because the 3rd row is incomplete, we return 2.
   
   Example 2:
   Input: n = 8
   Output: 3
   Explanation: Because the 4th row is incomplete, we return 3.
   ```
