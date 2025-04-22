## Questions 📝


1. There is a bag that consists of items, each item has a number 1, 0, or -1 written on it.
    
    You are given four non-negative integers numOnes, numZeros, numNegOnes, and k.
    
    The bag initially contains:
        numOnes items with 1s written on them.
        numZeroes items with 0s written on them.
        numNegOnes items with -1s written on them.
    
    We want to pick exactly k items among the available items. Return the maximum possible sum of numbers written on the items.



2. Given an integer k, return the minimum number of Fibonacci numbers whose sum is equal to k. The same Fibonacci number can be used multiple times.
    
    The Fibonacci numbers are defined as:
    
    F1 = 1
    F2 = 1
    Fn = Fn-1 + Fn-2 for n > 2.

    It is guaranteed that for the given constraints we can always find such Fibonacci numbers that sum up to k.



3. You are given a non-negative integer array nums. In one operation, you must:

    Choose a positive integer x such that x is less than or equal to the smallest non-zero element in nums.

    Subtract x from every positive element in nums.

    Return the minimum number of operations to make every element in nums equal to 0.



4. You are given a positive integer n, you can do the following operation any number of times:
    
    Add or subtract a power of 2 from n.
    
    Return the minimum number of operations to make n equal to 0.

    A number x is power of 2 if x == 2^i where i >= 0.


5. Given two arrays a[] and b[] of the same size. Task is to find the minimum sum of two elements such that they belong to different arrays and are not at the same index in their arrays.