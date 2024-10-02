## Questions 📝

1. Take 2 integers input and print the greatest of them

   ```sh
    Input 1: a = 5 b = 7
    Output 1: second number 7 is the largest.
    Input 2: a = 12 b = 1
    Output 2 : first number 12 is the largest.
    ```
    
    > Note : It is ensured that the two numbers will be different.


2. Given the radius of the circle, predict whether numerically the area of this circle is larger than the circumference or not.

    ```sh
    Input 1: radius = 4
    Output 1: Area is greater than circumference.
    Explanation: area = 3.14 * 4 * 4 = 50.24 unit2
    Perimeter = 2 * 3.14 * 4 = 25.12 unit
    Therefore area > perimeter.
    ```

3. Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)

    ```sh
    Input 1: 1976
    Output: yes
    Input 2: 2003
    Output: no
    ```


4. Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.

    ```sh
    Input 1: length = 5 breadth = 7

    Output 1: Area is greater than perimeter.
    ```

    
5. Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.

    ```sh
    Input : side1 = 5 side2 = 4 side3 = 4
    Output: This is an Isosceles triangle.
    ```

    
6. If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring the least marks.

    ```sh
    Input 1: A = 23 , B = 34 , C = 71
    Output : ‘A’ has the least marks.
    ```


7. Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

   ```sh
   Input 1: 2 0
   Output 1: the point lies on the x - axis.
   ```


8. Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

   ```sh
   Input 1: x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
   Output 1: All 3 points lie on the same line.
   ```


9. Write a C++ program to input any character and check whether it is the alphabet, digit or special character.

    ```sh
    Input 1: ch = ‘9’
    Output 1: digit
    ```


10. Predict the output of the below code:

    ```cpp
    #include<iostream>
    using namespace std;
    
    int main() {
        int a = 500, b, c;
        if (a >= 400)
            b = 300;
        c = 200;
        cout << "value of b and c are respectively " << b << " and " << c;
        return 0;
    }
