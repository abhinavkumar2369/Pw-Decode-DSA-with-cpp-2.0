## Questions 📝

Given an integer array nums , handle multiple queries of the following type:

1.  Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.

    Implement the NumArray class:

    NumArray(int[] nums) Initializes the object with the integer array nums .
    
    int sumRange(int left, int right) Returns the sum of the elements of nums betweenindices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right] ). [Leetcode 303]
    
    Example:
    
    - Input
      ["NumArray", "sumRange", "sumRange", "sumRange"]
      [[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]

    - Output
      [null, 1, -1, -3]



2.  Given an array of integers nums , calculate the pivot index of this array.

    The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
    
    If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
    
    Return the leftmost pivot index. If no such index exists, return -1 . [Leetcode 724]
    
    - Example 1:
        Input: nums = [1,7,3,6,5,6]
        Output: 3

    - Example 2:
        Input: nums = [1,2,3]
        Output: -1
    
    - Example 3:
        Input: nums = [2,1,-1]
        Output: 0



3.  We define the conversion array conver of an array arr as follows:

    conver[i] = arr[i] + max(arr[0..i]) where max(arr[0..i]) is the maximum value of arr[j] over 0 <= j <= i.
    We also define the score of an array arr as the sum of the values of the conversion array of arr .
    
    Given a 0-indexed integer array nums of length n , return an array ans of length n where ans[i] is the score of the prefix nums[0..i] . [Leetcode 2640]

    - Example 1:
        Input: nums = [2,3,7,5,10]
        Output: [4,10,24,36,56]

    - Example 2:
        Input: nums = [1,1,2,4,8,16]
        Output: [2,4,8,16,32,64]



4.  There are n flights that are labeled from 1 to n.
    You are given an array of flight bookings bookings , where bookings[i] = [firsti, lasti, seatsi] represents a booking for flights firsti through lasti (inclusive) with seatsi seats reserved for each flight in the range.
    
    Return an array answer of length n , where answer[i] is the total number of seats reserved for flight i . [Leetcode 1109]

    - Example 1:
        Input: bookings = [[1,2,10],[2,3,20],[2,5,25]], n = 5
        Output: [10,55,45,25,25]

    - Example 2:
        Input: bookings = [[1,2,10],[2,2,15]], n = 2
        Output: [10,25]