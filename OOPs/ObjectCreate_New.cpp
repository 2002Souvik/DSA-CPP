#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        // Attribute declaration
        int id;
        int age;
        string name;
        int rollNo;

        // Constructor declaration: Default constructor
        Student() {
            cout << "Student Default constructor called" << endl;
        }

        // Constructor declaration: Parameterized constructor
        Student(int id, int age, string name, int rollNo) {
            cout << "Student Parameterized constructor called" << endl;
            this->id = id; // Using 'this' pointer to refer to the current object
            this->age = age;
            this->name = name;
            this->rollNo = rollNo;   
        }

        // Copy constructor declaration
        Student(const Student &obj) {
            cout << "Student Copy constructor called" << endl;
            this->id = obj.id; // Using 'this' pointer to refer to the current object
            this->age = obj.age;
            this->name = obj.name;
            this->rollNo = obj.rollNo;   
        }

        // Behaviour/Methode /Function declaration
        void study() {
            cout << this->name << " is studying" << endl;
        }

        void sleep() {
            cout << this->name << " is sleeping" << endl;
        }
        
        void bunk() {
            cout << this->name << " is bunking" << endl;
        }

        // Destructor declaration
        ~Student() {
            cout << "Student Destructor called" << endl;
        }
};

int main() {
    // Student A; // Object creation using default constructor
    // A.name = "John Doe"; // Assigning name to the object
    // A.age = 20; // Assigning age to the object
    // A.rollNo = 101; // Assigning roll number to the object
    // A.id = 1; // Assigning ID to the object

    // A.study(); // Calling the study method

    // Student B;
    // B.name = "Rahul";
    // B.age = 22;
    // B.rollNo = 102;
    // B.id = 2;

    // B.study();

    Student C(1, 20, "John", 101); // Object creation using parameterized constructor
    // Student D(2, 21, "Raju", 102);
    // Student E(3, 22, "Ravi", 103);
    // Student F(4, 23, "Rani", 104);
    
    // cout << C.name << " " << C.age << endl;
    
    // Copy constructor
    // Student A = C; // Copying object C to object A
    // Student A(C); // Copying object C to object A using copy constructor
    
    // cout << A.name << " " << C.name << endl; 
    
    // Dynamic memory allocation using new operator
    Student* ptr = new Student(5, 24, "Rita", 105); // Creating a new object on the heap
    cout << ptr->name << " " << ptr->age << endl; // Accessing object members using pointer
    delete ptr; // Deleting the dynamically allocated object to free memory
    // Note: Destructor will be called automatically when the object is deleted
    return 0;
}