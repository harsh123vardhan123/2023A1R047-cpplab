/*write a c++ program to demonstrate implementation of array using direct initialization method*/



#include <iosteam>


using namespace std;





class Program


{


    private :int adv[5]={1,2,3,4,5};// Declaration and direct Initialization


    int weak[5] = {6,7,55,88,9}; 


    int i;


    public : void Display()


    {


        cout<<"List of Advance Learners \t";


        for(i=0;i<5;i++){


            cout<<adv[i]<<"\t";


        }


        cout<<"\nList of Weak Learners \t";


        for(i=0;i<5;i++){


            cout<<weak[i]<<"\t";


    }


}


};