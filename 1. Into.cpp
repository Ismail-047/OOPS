# include <iostream>
# include <string>
using namespace std;

// BASIC CLASS SYNTAX
class Teacher {
private: // --------> ACCESS SPECIFIERS

    // PROPERTIES / ATTRIBUTES
    string name;
    int age;
    string department;
    double salary;
    
public: // --------> ACCESS SPECIFIERS

    // METHODS / MEMBER FUNCTIONS
    void changeDept(string department) {
        // THIS OPERATOR
        this.department = department; 
    }
};



int main() {
    Teacher t1;



    return 0;
}