#include <iostream>

using namespace std;

int main()
{
    // OR operators ||
    // AND operators &&

    int age;
    int money;
    int companions;

    cout << "Enter your age" << endl;
    cin >> age;

    cout << "State your current financial value" << endl <<endl;
    cin >> money;

    //if( age >= 4 && age <= 24){
      //  cout << "You are qualified to proceed." << endl;
   //} else
//cout << "You are not qualified to proceed." << endl;


    if (money > 2000 && age > 18){
        cout << "You are almost ready..." << endl <<endl;

        cout << "How many companions are you with?" << endl;
        cin >> companions;

        if (companions > 1){
        cout << "This is not allowed." << endl;
        } else{
            cout << "You are good to go!" << endl;
        }

    } else {
        cout << "You cannot enter into the hotel." << endl;}
    }

