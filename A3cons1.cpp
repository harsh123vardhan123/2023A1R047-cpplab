#include <iostream>



using namespace std;


class Program // Class name


{


    public: Program()   //Default Constructor


    {


     cout<<"Default Constructor";


    }


    public: ~Program()  // Default Constructor


    {


        cout<<"\n Destructor";


    }


    public: void display(){


        cout<<"\n Hello World";


    }


};


int main(){


    Program obj;


    obj.display(); //Class object


    return 0;


}