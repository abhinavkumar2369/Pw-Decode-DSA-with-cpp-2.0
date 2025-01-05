## Questions 📝

1. Given an array of integers arr and two integers k and threshold , return the number of sub-arrays of size k and average greater than or equal to threshold.     [Leetcode 1343]

    Example 1:
    Input: arr = [2,2,2,2,5,5,5,8], k = 3, threshold = 4
    Output: 3
    
    Example 2:
    Input: arr = [11,13,17,23,29,31,7,5,2,3], k = 3, threshold = 5
    Output: 6



2. The score of an array is defined as the product of its sum and its length.

    For example, the score of [1, 2, 3, 4, 5] is (1 + 2 + 3 + 4 + 5) * 5 = 75.
    Given a positive integer array nums and an integer k, return the number of non-empty subarrays of nums whose score is strictly less than k. [Leetcode 2302]

    A subarray is a contiguous sequence of elements within an array.

    Example 1:
    Input: nums = [2,1,4,3,5], k = 10
    Output: 6

    Example 2:
    Input: nums = [1,1,1], k = 5
    Output: 5



3. Given an array of integers nums and an integer k. A continuous subarray is called nice if there are k odd numbers on it.
    Return the number of nice sub-arrays. [Leetcode 1248]

    Example 1:
    Input: nums = [1,1,2,1,1], k = 3
    Output: 2
    
    Example 2:
    Input: nums = [2,4,6], k = 1
    Output: 0
    
    Example 3:
    Input: nums = [2,2,2,1,2,2,1,2,2,2], k = 2
    Output: 16