#include <iostream>



using namespace std;





class Program {


public:


    Program(string username, int pin) // Parametrized Constructor


    {


        cout << "\n Username = " << username;


        cout << "\n Pin = " << pin;


    }


};





int main() {


    string username;


    int pin;





    // Taking input from the user


    cout << "Enter Username: ";


    cin >> username;


    cout << "Enter Pin: ";


    cin >> pin;





    // Creating objects with user-defined values


    Program obj1(username, pin);


    return 0;


}