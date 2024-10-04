## Questions 📝

1. Write a program to apply binary search in array sorted in decreasing order.


2. You have a sorted array of infinite numbers, how would you search an element in the array?


3. You are given an m x n integer matrix matrix with the following two properties:
    - Each row is sorted in non-decreasing order.
    - The first integer of each row is greater than the last integer of the previous row.
    Given an integer target , return true if target is in matrix or false otherwise.  
    You must write a solution in O(log(m * n)) time complexity.

    ```sh
    Example 1:
    Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
    Output: true
    Example 2:
    Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
    Output: false
    ```


4. There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).
    Before being passed to your function, nums is rotated at an unknown pivot index k ( 0 <= k< nums.length ) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).  
    For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4] .
    Given the array nums after the rotation and an integer target , return true if target is in nums , or false if it is not in nums .
    You must decrease the overall operation steps as much as possible.

    ```sh
    Example 1:
    Input: nums = [2,5,6,0,0,1,2], target = 0
    Output: true
    Example 2:
    Input: nums = [2,5,6,0,0,1,2], target = 3
    Output: false
    ```
