/*Program to demonstrate Working of Default constructor overloading */



#include <iostream>


using namespace std;


class Program  // class name


{


    public: Program(){         // Default constructor


        cout<<"Default Constructor";


    }


    public :Program(string username, int pin) // Parametrized Constructor


    {


        cout<<"\n Username ="<<username;


        cout<<"\n Pin="<< pin;


    }


    public: ~Program(){


        cout<<"\n Destructor ";


    }


};