## Questions 📝

1. Calculate the time complexity for the following code snippet.

   ```cpp
   int c = 0;
   for(int i = n; i > 0; i /= 2) {
        c++;
   }
   ```

   
2. Calculate the time complexity for the following code snippet.

   ```cpp
   int c = 0;
   for(int i = n; i > 1; i /= i) {
        c++;
   }
   ```

   
3. Calculate the time complexity for the following code snippet where k is some constant (k<<n).

   ```cpp
   int c = 0;
   for(int i = 0; i < n; i += k) {
        c++;
   }


4. Calculate the time complexity for the following code snippet.

   ```cpp
   int c = 0;
   for(int i = 1; i < n; i *= 2) {
        c++;
   }
   ```

   
5. Calculate the time complexity for the following code snippet.

   ```cpp
   int c = 0;
   for(int i = 0; i < n; i++) {
       c+=i;
   }
   ```

   
6. Calculate the time complexity for the following code snippet.

   ```cpp
   int c = 0;
   for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++){
            c++;
        }
   }
   ```
