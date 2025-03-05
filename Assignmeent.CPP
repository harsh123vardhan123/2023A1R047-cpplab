/* Write a program to print the area of rectangle by creating a class named 'Area; having two functions.



 First function named as 'setDim' takes the length and breadth of the rectangle as parameters, and the 


 function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are 


 entered through keyboard. */


 #include <iostream>





 using namespace std;


 


 class Area {


 private:


     int length, breadth;


 


 public:


     void set_Dimensions(int l, int b) {


         length = l;


         breadth = b;


     }


 


     int getArea() {


         return length * breadth;


     }


 };


 


 int main() {


     Area rect;


     int length, breadth;


 


     cout << "Enter length: ";


     cin >> length;


     cout << "Enter breadth: ";


     cin >> breadth;


 


     rect.set_Dimensions(length, breadth);


     cout << "Area of the rectangle: " << rect.getArea() << endl;


 


     return 0;


 }