/*Program to create a class and a function, function will accept user name,



Registration Number from student and display the details entered by the user on screen*/


#include <iostream>


using namespace std;


class Program


{


    private : string Name;


    private : int RegNo;


    public:void Accept()


    {


        cout<<"\n Enter your Name: ";


        cin>>Name;


        cout<<"\n Enter your registration Number: ";


        cin>>RegNo;


        cout<<"\n Information Entered by the user is: ";


        cout<<"\n Name = " <<Name<<"\n Registration number is = "<<RegNo;


    }


};


int main()


{


    Program obj;


    obj.Accept();


    return 0;


    


}