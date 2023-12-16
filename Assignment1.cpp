/*
//Take 2 integer values in two variables x and y and print their product.

#include<iostream>
using namespace std;

int main(){
    int a,b;

    // Taking input from the user 

    cout<<"enter the value of a : ";
    cin>>a;
    cout<<"enter the value of b : ";
    cin>>b;

    // creating a variable name product to give output of two integers by multiplying it

    int product = a*b;

    cout<<"product is : "<<product;

    return 0;


}

*/

/*
//- Print the ASCII value of character ‘U’.

#include <iostream>
using namespace std;

int main(){
    char character;
    cout<<"enter any character from a to z or A to Z"<<endl;
    cout<<"Character entered : ";
    cin>>character;
    int valueOfCharacter = int(character);
    cout<<"ASCII Value of U is : "<<valueOfCharacter;
    return 0;
}

*/

//- Write a C++ program to take length and breadth of a rectangle and print its area.

/*

#include<iostream>
using namespace std;

int main(){
    float length , breadth;
    cout<<"Enter the length of the Rectangle : ";
    cin>>length;
    cout<<"Enter the breadth of the Rectangle : ";
    cin>>breadth;
    float area = length*breadth;
    cout<<"Area of the ractangle : "<<area<<endl;
    return 0;
}

*/

//- Write a C++ program to calculate the cube of a number.

/*

# include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number whose cube you want : ";
    cin>>num;
    cout<<"cube of the entered number is : "<<num*num*num<<endl;
    return 0;
}

*/

//- Write a C++ program to find size of basic data types.

/*
#include<iostream>
using namespace std;

int main(){
    cout<<"size of fundamental datatypes :"<<endl;
    cout<<"The sizeof(char) : "<<sizeof(char)<<"bytes"<<endl;
    cout<<"The sizeof(short) : "<<sizeof(short)<<"bytes"<<endl;
    cout<<"The sizeof(int) : "<<sizeof(int)<<"bytes"<<endl;
    cout<<"The sizeof(long) : "<<sizeof(long)<<"bytes"<<endl;
    cout<<"The sizeof(long long) : "<<sizeof(long long)<<"bytes"<<endl;
    cout<<"The sizeof(float) : "<<sizeof(float)<<"bytes"<<endl;cout<<"The sizeof(double) : "<<sizeof(double)<<endl;
    cout<<"The sizeof(long double) : "<<sizeof(long double)<<"bytes"<<endl;
    cout<<"The sizeof(bool) : "<<sizeof(bool)<<"bytes"<<endl;
    return 0;
}
*/


// - Write a C++ program to swap two numbers with the help of a third variable.

/*
#include<iostream>
using namespace std;

int main(){
     int a, b ;
    cout<<"enter the value of a : ";
    cin>>a;
    cout<<"enter the value of b : ";
    cin>>b;
    cout<<"Value of a before swapping : "<<a<<endl;
    cout<<"Value of b before swapping : "<<b<<endl;
    int temp;
    temp = a ;
    a = b;
    b = temp;
    cout<<"Value of a before swapping : "<<a<<endl;
    cout<<"Value of b before swapping : "<<b<<endl;
    return 0;
}
*/