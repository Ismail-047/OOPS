
// GETTERS AND SETTERS ARE FUNCTION USED TO GET AND SET THE PRIVATE ATTRIBUTES OF A CLASS AS THEY CANNOT BE ACCESSED DIRECTLY
//      GETTERS - GET A PRIVATE VLUE 
//      SETTERS - SET A PRIVATE VALUE

// REAL LIFE EXAMPLE 
//
// THINK OF A TV 
//      YOU CANT DIRECLTY TOUCH ITS INTERNAL PARTS (private)
//      BUT YOU CAN USE REMOTE TO
//          1. SEE THE VLOUME - GETTER
//          2. CAHNGE THE VLOUME - SETTER

class Person {
private:
    int age;

public:
    // SETTER
    void setAge(int a) {
        if (a > 0) age = a;
    }

    // GETTER
    int getAge() {
        return age;
    }
};

int main () {

    Person p;
    p.setAge(20);        // SETTING AGE
    cout << p.getAge();  // GETTING AGE

    return 0;
}

//  WHY ARE GETTERS / SETTERS USEFUL
//      1. CONTROL WHAT VALUES ARE ALLOWED (E.G., NO NEGATIVE AGE)
//      2. KEEP VARIABLES SAFE FROM DIRECT ACCESS
//      3. ADD LOGIC WHEN SETTING OR GETTING VALUES