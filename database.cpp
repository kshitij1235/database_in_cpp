// idea

// data to be kept private

// vars :
// 1)id
// 2)salary
// 3)name

// public :

// 1)get info functions
// 2)display functions

// patten of display code

// cout << "______________________________" << endl;
// cout << "|id  |name       |salary     |" << endl;
// cout << "| " << id;
// cout << "  | " << name;
// cout << "      | " << salary;
// cout << "      |";
// cout << endl;
// cout << "______________________________" << endl;

//rules
// 1)maxiumim data to enter : 5
// 2)few edting options
// 1)less than or more than
// 2)removing user
// 3)updating users info

// stages
// BETA ; INRODUCTION
// 1) get data
// 2)display
// 3) make it editable
// 3)display it

// ediiting options :

// 1)sort it according to salary
// 2)remove any element
// 3)update the data

//pakages included
#include <iostream>
#include <windows.h>
using namespace std;

//classes

class database
{
private:
    int salary;
    char name[20];

public:
    int id;
    void get()
    {
        cout << "-----ENTER DETAILS ------" << endl;
        cout << "ENTER THE ID : ";
        cin >> id;
        cout << "ENTER THE name : ";
        cin >> name;
        cout << "ENTER THE salary : ";
        cin >> salary;
    }
    void display()
    {
        cout << "|" << id << "        "
             << "|" << name << "                                  "
             << "|" << salary << "              "
             << "|" << endl;
    }
};

int main()
{
    //variable initalise

    database d1, d2, d3, d4, d5;
    int user;

    //storage values for editing
    int id1;

    //program

    //beta

    cout << "----------PLASMA DATABASE--------------" << endl;
    system("pause");
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "ENTER YOUR DATA : " << endl;
    //stage 1

    d1.get();
    d2.get();
    d3.get();
    d4.get();
    d5.get();

    //stage2
    cout << "_________________________________________________________________________________" << endl;
    cout << "|id       |name                                  |salary                        |" << endl;
    d1.display();
    d2.display();
    d3.display();
    d4.display();
    d5.display();
    cout << "---------------------------------------------------------------------------------" << endl;
    cout << "Should this be loaded in system : " << endl;
    cout << "press 1 for yes" << endl;
    cout << "press 2 for no " << endl;

    cin >> user;
    if (user == 1)
    {
        cout << "\x1B[2J\x1B[H";
        cout << "data is been stored " << endl;
        cout << "your data :  " << endl;
        cout << "_________________________________________________________________________________" << endl;
        cout << "|id       |name                                  |salary                        |" << endl;
        d1.display();
        d2.display();
        d3.display();
        d4.display();
        d5.display();
        cout << "---------------------------------------------------------------------------------" << endl;

        // stage 3
        while (true)
        {

            cout << "EDITING OPTIONS : " << endl;
            cout << "press 1 for sorting accoding to salary  : " << endl;
            cout << "press 2 for updating  accoding to salary  : " << endl;
            cin >> user;
            if (user == 1)
            {
            }

            if (user == 2)
            {
                cout << "PLease enter the id : ";
                cin >> id1;
                if (d1.id == id1)
                {
                    d1.get();
                }
                else if (d2.id == id1)
                {
                    d1.get();
                }
                else if (d3.id == id1)
                {
                    d1.get();
                }
                else if (d4.id == id1)
                {
                    d1.get();
                }
                else if (d5.id == id1)
                {
                    d1.get();
                }
                else
                {
                    cout << "ID dont exist" << endl;
                }

                cout << "data sucessfully edited " << endl;
                cout << "data is been stored " << endl;
                cout << "your data :  " << endl;
                cout << "_________________________________________________________________________________" << endl;
                cout << "|id       |name                                  |salary                        |" << endl;
                d1.display();
                d2.display();
                d3.display();
                d4.display();
                d5.display();
                cout << "---------------------------------------------------------------------------------" << endl;
            }
        }
    }
    else if (user == 2)
    {
        cout << "This data is removed" << endl;
        main();
    }

    return 0;
}