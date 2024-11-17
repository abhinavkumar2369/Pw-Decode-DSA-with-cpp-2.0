#include<iostream>
using namespace std;


// Using this keyword
class Student{    
    public:
        int rollno;
        string name;
        float marks;

        // Constructor with this
        Student(int rollno,string name,float marks){
            this->rollno = rollno;
            this->name = name;
            this->marks = marks;
        }
};


class Teacher{
    public:
        int emp_no;
        string name;
        float salary;

    Teacher(int e,string n, float s){
        emp_no = e;
        name = n;
        salary = s;
    }


    // This method won't work because 
    // ------ local scope variable get assigned it's value to assigned itself
    // ------ Global variable won't come into play, if it found variable in 

    // Teacher(int emp_no,string name, float salary){
    //     emp_no = emp_no;
    //     name = name;
    //     salary = salary;
    // }
};


int main(){
    Student s(1,"Abhinav",91.8);
    Teacher t(2,"Raghav",100000);

    cout << s.rollno << endl; 
    cout << s.name << endl;
    cout << s.marks << endl;

    cout << t.emp_no << endl;
    cout << t.name << endl;
    cout << t.salary << endl;
}