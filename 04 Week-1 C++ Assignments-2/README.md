## C++ Assignments 2 | Week1
## Questions 📝

1. Find the output for this code. Let input:- 2 3 6

```cpp
    #include <iostream>
    using namespace std;
    int main()
    {
        int x;
        cout << "Enter first number\n";
        cin >> x; // user will give ‘x’ a value.
        int y, m;
        cout << "Enter second number and value for taking modulus\n";
        cin >> y >> m; // user will give ‘y’ a value.
        int Z = (x * y) % m;
        cout << "Output is: " << Z;
    }
```

2. Find the output for this code. Let `input:- 3 2`

```cpp
    #include <iostream>
    using namespace std;
    int main()
    {
        int x;
        cout<<"Enter first number\n";
        cin>>x; // user will give 'x' a value.
        int y;
        cout<<"Enter second number\n";
        cin>>y; // user will give 'y' a value.
        cout<<(x!=y)<<" "<<(x>=y);
    }
```

3. Find the output for this code. `Let input:- 2 3`

```cpp
    #include <iostream>
    using namespace std;
    int main(){
        int x,y;
        cin>>x>>y;
        x+=y;
        x-=y;
        x%=y;
        cout<<x;
    }

4. WAP for finding the volume of the cylinder by taking radius and height as input.

5. WAP to find the difference between ASCII of two characters ,take them as input .

6. Find the output of the below code
```cpp
    #include <iostream>
    using namespace std;
    int main(){
        int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
    cout<<i;
    }