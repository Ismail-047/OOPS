
//  ┌----------------------------------------------------------------------------------------------------------------┐
//  |                                           ENCAPSULATION                                                        |
//  └----------------------------------------------------------------------------------------------------------------┘


// MEANS WRAPPING THE DATA AND METHODS THAT WORK ON THE DATA WITHIN A SINGLE UNIT (CALLED CLASS)

// IT HIDES THE INTERNAL DETAILS OF HOW THINGS WORK AND ONLY SHOWS WHAT'S NECESSARY. 

// THIS IS DONE USING ACCESS SPECIFIERS. (PUBLIC, PRIVATE, PROTECTED) ). IN SHORT, THE CONCEPT OF ENCAPSULATION INVOLVES CREATING A CLASS AND USING ACCESS SPECIFIERS


// EXPLAINING TO A 5 YEAR OLD:

// IMAGINE YOU HAVE A TOY BOX.
// INSIDE IT, YOU KEEP YOUR TOYS (DATA) SAFE.

// YOU DON’T LET ANYONE JUST REACH IN AND GRAB THEM.
// IF SOMEONE WANTS A TOY, THEY HAVE TO ASK YOU NICELY — LIKE: “CAN I PLAY WITH THE RED CAR?”
// AND YOU DECIDE IF THEY CAN OR NOT.

// THAT TOY BOX IS LIKE A CLASS IN C++,
// AND ONLY YOU (OR YOUR CODE) CAN DECIDE HOW TO USE WHAT'S INSIDE.

// SO, ENCAPSULATION IS JUST:
// "KEEPING THINGS SAFE IN A BOX AND ONLY LETTING OTHERS USE IT IN A CONTROLLED WAY."

class BankAccount {
private:
    int balance;

public:
    void deposit(int amount) {
        if (amount > 0)
            balance += amount;
    }

    int getBalance() {
        return balance;
    }
};

// BENEFITS:
//     1.  DATA PROTECTION – PREVENTS DIRECT ACCESS TO VARIABLES, SO NO ACCIDENTAL CHANGES.
//     2.  CONTROLLED ACCESS – YOU CONTROL WHAT CAN BE READ OR CHANGED USING GETTERS/SETTERS.
//     3.  IMPROVED SECURITY – SENSITIVE LOGIC STAYS HIDDEN FROM OUTSIDE ACCESS.


