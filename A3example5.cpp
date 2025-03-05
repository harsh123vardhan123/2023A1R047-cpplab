/*Write a program to create a class with name MyApp and functions name, Accept() and Display(),



 Accept() function will accept email and password as parameter and Display() function will display


  the information  entered by the user on screen*/


#include <iostream>


using namespace std;


class MyApp


{


    public : 


    void Accept(string Email, string Password)


    {


        cout<<"Information Entered by the user is (Accept)\n";


        cout<<"Email \n= "<<Email<<"\n Password is = "<<Password;


    }





    void login(int pin = 123) {


        int enteredPin;


        cout << "Enter your PIN: ";


        cin >> enteredPin;


        if (enteredPin == pin) {


            cout << "Login successful!" << endl;


        } else {


            cout << "Invalid PIN!" << endl;


            exit(0);


        }


    }





    void Display_Info(string Name, string RegNo, float Marks, float Percentage, char Grade) {


        cout << "Welcome, " << Name << "!" << endl;


        cout << "Registration Number: " << RegNo << endl;


        cout << "Marks: " << Marks << endl;


        cout << "Percentage: " << Percentage << "%" << endl;


        cout << "Grade: " << Grade << endl;


    }


};





int main()


{


    MyApp obj; 


    obj.login(); // Call the login function





    string Name, RegNo;


    float Marks, Percentage;


    char Grade;





    cout << "Enter your Name: ";


    cin >> Name;


    cout << "Enter your Registration Number: ";


    cin >> RegNo;


    cout << "Enter your Marks: ";


    cin >> Marks;


    cout << "Enter your Percentage: ";


    cin >> Percentage;


    cout << "Enter your Grade: ";


    cin >> Grade;





    obj.Display_Info(Name, RegNo, Marks, Percentage, Grade); // Call the Display_Info function





    string Email1, Password1;


    cout<<"Enter your Email\n";


    cin>> Email1;


    cout<<"Enter your Password\n";


    cin>>Password1;


    obj.Accept(Email1,Password1);// Actual Parameters


    return 0;


}