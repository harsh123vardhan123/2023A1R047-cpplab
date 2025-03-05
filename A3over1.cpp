/* Program to demonstrate the concpet of function Overloading,



Create a class with name Shapes, create a function with name Area(),


with area function calculate Area of Circle, Area of Rectangle, Area of triangle,


using function overloading in C++.


*/


#include <iostream>


#include <cmath> // For M_PI constant





using namespace std;





class Shapes {


public:


    // Function to calculate the area of a circle


    double Area(double radius) {


        return M_PI * radius * radius;


    }





    // Function to calculate the area of a rectangle


    double Area(double length, double width) {


        return length * width;


    }





    // Function to calculate the area of a triangle


    double Area(double base, double height, char) {


        return 0.5 * base * height;


    }


};





int main() {


    Shapes shape;





    // Calculate area of a circle


    double circleArea = shape.Area(5.0);


    cout << "Area of Circle: " << circleArea << endl;





    // Calculate area of a rectangle


    double rectangleArea = shape.Area(4.0, 6.0);


    cout << "Area of Rectangle: " << rectangleArea << endl;





    // Calculate area of a triangle


    double triangleArea = shape.Area(3.0, 4.0, 't');


    cout << "Area of Triangle: " << triangleArea << endl;





    return 0;


}