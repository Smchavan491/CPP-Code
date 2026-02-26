// type casting : type casting is basically a conersion of one data type to another
// in c++ we have two types of type casting 
// 1. implicit type casting : it is automatically done by the compiler
// 2. explicit type casting : it is done by the user using the cast operator
// in c++ we have four types of explicit type casting
// 1. static_cast : it is used to convert one data type to another data type
// 2. dynamic_cast : it is used to convert one data type to another data type at runtime
// 3. const_cast : it is used to convert a const data type to a non-const data type
// 4. reinterpret_cast : it is used to convert one data type to another data type at a low level
// 5. C-style cast (Cast notation): it is used to convert one data type to another data type using the C-style cast operator
// 6. function-style cast : it is used to convert one data type to another data type using the function-style cast operator

#include<iostream>
using namespace std;

int main(){
    // implicit type casting
    //char to int
    int a = 3;
    char b = 'A';
    int c = a + b; // implicit type casting
    cout<<"the value of c :"<<c <<endl;


    //explicit type casting
    //int to char
    int s = 10;
    char sum = char(s) + 'k';      //explicit type casting
    cout<<"the value of sum :"<<sum <<endl;


    //Types conversion operators
    //static_cast
    //float to int
    float f = 6.78;
    int br = static_cast<int>(f); // static_cast
    cout<<"The ans of b using static cast :"<<br<<endl;

}