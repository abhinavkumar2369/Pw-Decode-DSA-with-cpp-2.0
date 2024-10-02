## Questions 📝

1. Write a program to print the elements of both the diagonals in a square matrix.

   Input 1:
   ```sh
   1 2 3
   4 5 6
   7 8 9
   ```
   
   Output 1:
   ```sh
   1   3
     5
   7   9
   ```

2. Write a program to rotate the matrix by 90 degrees anti-clockwise.

   Input 1:
   ```sh
   1 2 3
   4 5 6
   7 8 9
   ```

   Output 1:
   ```sh
   3 6 9
   2 5 8
   1 4 7
   ```

   
3. Write a program to print the matrix in wave form.

   Input :
   ```sh
   1 2 3
   4 5 6
   7 8 9
   ```
   
   Output :
   ```sh
   7 4 1 2 5 8 9 6 3
   ```


4. Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.

    Input 1: `n = 3`
    Output 1:
    ```sh
    [[1,2,3],[8,9,4],[7,6,5]]
    ```
   
    Input 2: `n = 1`
    Output 2:
    ```sh
    [[1]]
    ```


5. Predict the output :

    ```cpp
    int main(){
        int a[][2] = {{1,2},{3,4}};
        int i, j;
        for (i = 0; i < 2; i++)
            for (j = 0; j < 2; j++)
                cout << a[i][j];
        return 0;
    }
