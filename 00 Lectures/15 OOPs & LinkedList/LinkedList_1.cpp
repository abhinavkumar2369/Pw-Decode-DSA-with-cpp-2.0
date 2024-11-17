#include <iostream>
using namespace std;

class Student{
    public:
        int rollno;
        string name;
        float marks;
};


int main(){
    Student s;

    s.rollno = 1;
    s.name = "Abhinav";
    s.marks = 91.8;

    cout << s.rollno << endl;
    cout << s.name << endl;
    cout << s.marks << endl;

    return 0;
}