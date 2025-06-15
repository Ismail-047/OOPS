# include <iostream>
# include <string>
using namespace std;

// OBJECT ORIENTED PROGRAMMING (OOP): BETTER WAY TO WRITE CODE
// 2 MAIN CONCEPTS:
//     1. CLASSES (BLUEPRINT)
//     2. OBJECTS (INSTANCES OF A CLASS)

    // BASIC CLASS SYNTAX
    class Teacher {
    private: // --------> ACCESS SPECIFIERS

        // PROPERTIES / ATTRIBUTES
        string name;
        int age;
        string department;
        double salary;
        
    public: // --------> ACCESS SPECIFIERS

        // CONSTRUCTOR
        Teacher(string name, int age, string department, double salary) {
            this->name = name;
            this->age = age;
            this->department = department;
            this->salary = salary;
        }

        // METHODS / MEMBER FUNCTIONS
        void changeDept(string dep) {
            department = dep; 
        }

    };

int main() {
    Teacher t1("John", 30, "Math", 10000);



    return 0;
}