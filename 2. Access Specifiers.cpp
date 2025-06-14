/*
    ACCESS SPECIFIERS (CONTROL WHO CAN ACCESS WHAT.)
      
        3 TYPES
            1. private
            2. public
            3. protected
*/

//  ---------------------------- 1. PUBLIC ----------------------------  
//  CAN BE ACCESSED FROM ANYWHERE (INSIDE AND OUTSIDE OF THE CLASS)
//  EX: LIKE A PUBLIC PARK — ANYONE CAN USE IT.
class Car { 
public:
    string brand;
};

//  ┌---------------------------------------------------------------------------------------------------------┐
//  │     NOTE: BY DEFAULT IF NO ACCESS SEPCIFIER IS MENTIONED ALL THE METHODS AND PROPERTIES ARE             |
//  |          IN CLASS : PRIVATE                                                                             |
//  |          IN STRUCT : PUBLIC                                                                             |  
//  └---------------------------------------------------------------------------------------------------------┘

//  ---------------------------- 2. PRIVATE ----------------------------  
//  CAN BE ACCESSED ONLY WITHIN THE CLASS
//  EX: LIKE A PHONE NO OR PASSWORD — ONLY YOU CAN USE IT.
class Car { 
private:
    int engineNo;
};

//  ---------------------------- 3. PROTECTED ----------------------------  
//  CAN BE ACCESSED INSIDE A CLASS AND ITS CHILD CLASSES
//  EX: LIKE A FAMILY CAR — NOT PUBLIC, BUT YOUR CHILDREN CAN ACCESS IT.
class Car { 
protected:
    int topSpeed;
};