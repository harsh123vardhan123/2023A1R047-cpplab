/* 1.Write a C++ program to print area of rectangle by creating a class named 'Area' having one function.



Length and Breadth of the Rectangle sare entered through keyboard using Parameterized constructor.*/


// #include <iostream>


// using namespace std;





// // Define the class 'Area'


// class Area {


// private:


//     float length;


//     float breadth;





// public:


//     // Parameterized constructor to initialize length and breadth


//     Area(float l, float b) {


//         length = l;


//         breadth = b;


//     }





//     // Function to calculate and print the area of the rectangle


//     void calculateArea() {


//         float area = length * breadth;


//         cout << "The area of the rectangle is: " << area << endl;


//     }


// };





// int main() {


//     float l, b;





//     // Input length and breadth from the user


//     cout << "Enter the length of the rectangle: ";


//     cin >> l;


//     cout << "Enter the breadth of the rectangle: ";


//     cin >> b;





//     // Create an object of the class 'Area' using the parameterized constructor


//     Area rectangle(l, b);





//     // Call the function to calculate and print the area


//     rectangle.calculateArea();





//     return 0;


// }





/*2.Write a C++ program to display addition, subtraction, multiplication and division of two integers on screen.


Declare Class Calculation


Write Parameterized constructor for initialize num1 and num2


Write member function for each operation.*/





// #include <iostream>


// using namespace std;





// // Define the class 'Calculation'


// class Calculation {


// private:


//     int num1, num2;





// public:


//     // Parameterized constructor to initialize num1 and num2


//     Calculation(int n1, int n2) {


//         num1 = n1;


//         num2 = n2;


//     }





//     // Member function to perform addition


//     void add() {


//         cout << "Addition: " << num1 + num2 << endl;


//     }





//     // Member function to perform subtraction


//     void subtract() {


//         cout << "Subtraction: " << num1 - num2 << endl;


//     }





//     // Member function to perform multiplication


//     void multiply() {


//         cout << "Multiplication: " << num1 * num2 << endl;


//     }





//     // Member function to perform division


//     void divide() {


//         if (num2 != 0) {


//             cout << "Division: " << (float)num1 / num2 << endl;


//         } else {


//             cout << "Division by zero is not allowed!" << endl;


//         }


//     }


// };





// int main() {


//     int n1, n2;





//     // Input two integers from the user


//     cout << "Enter the first integer: ";


//     cin >> n1;


//     cout << "Enter the second integer: ";


//     cin >> n2;





//     // Create an object of the class 'Calculation' using the parameterized constructor


//     Calculation calc(n1, n2);





//     // Call member functions to perform and display operations


//     calc.add();


//     calc.subtract();


//     calc.multiply();


//     calc.divide();





//     return 0;


// }





// 3.C++ Program to calculate Volume of Cube using parameterized constructor.


#include <iostream>


using namespace std;





// Define the class 'Cube'


class Cube {


private:


    float side; // Side length of the cube





public:


    // Parameterized constructor to initialize the side length


    Cube(float s) {


        side = s;


    }





    // Member function to calculate and display the volume of the cube


    void calculateVolume() {


        float volume = side * side * side; // Volume = side^3


        cout << "The volume of the cube with side " << side << " is: " << volume << endl;


    }


};





int main() {


    float s;





    // Input the side length of the cube from the user


    cout << "Enter the side length of the cube: ";


    cin >> s;





    // Create an object of the class 'Cube' using the parameterized constructor


    Cube cube(s);





    // Call the member function to calculate and display the volume


    cube.calculateVolume();





    return 0;


}


// 4.C++ Program to calculate Area of Box using parameterized constructor.