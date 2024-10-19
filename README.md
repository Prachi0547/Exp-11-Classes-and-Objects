# Exp-11-Classes-and-Objects
# Aim
Write a c++ program:
1. To show car details using class.
2. To make a class by using function.
3. To calculate area of rectangle using class.
4. To make a class by taking inputs from user.
# Software Used
VS Code and c++ online compiler.
# Theory
Object-oriented programming (OOP) is a programming pattern centered around the concept of "objects," which can pattern data and behavior. C++ is one of the prominent languages that supports OOP principles, providing a framework for organizing complex programs.

Class: A blueprint for creating objects. It defines a data type by bundling data and methods that operate on the data.

Object: An instance of a class. Each object can have its own state and behavior defined by the class.

C++ provides powerful tools for implementing object-oriented programming principles through classes and objects. By utilizing encapsulation, inheritance, polymorphism, and abstraction, developers can create modular, maintainable, and reusable code.

# Program Code
```
//Car details

#include<iostream>
using namespace std;
class Car{
    public:
    string make = "Kia";
    string model = "Seltos";
    int year = 2017;
};
int main()
{
    Car myCar;
    cout<< "Car details: "<<myCar.make<<" "<<myCar.model<<"("<<myCar.year<<")"<<endl;
    return 0;
}
```
```
//Class by function

#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    double price;
public:
    Book(string t, string a, double p) : title(t), author(a), price(p) {}
    void applyDiscount(double discountPercentage) {
        price -= price * (discountPercentage / 100);
    }
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};
int main() {
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", 15.99);
    cout << "Original Book Details:" << endl;
    myBook.display();
    myBook.applyDiscount(10);  
    cout << "\nBook Details After Discount:" << endl;
    myBook.display();
    return 0;
}
```
```
//Area of rectangle by class

#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length;
    double width;

    public:
    void setDimensions(double len,double wid){
        length = len;
        width = wid;
    }
    double calculateArea(){
return length*width;
    }
};
int main() {
    Rectangle rect;
    rect.setDimensions(5.0, 3.0);
    cout<< "Area: "<<rect.calculateArea()<<endl;
    return 0;
}
```
```
//User class

#include<iostream>
using namespace std;
class Car{
  public:
  string make;
  string model;
  int year;
  void userInput(){
  cout<<"Enter car make: "<<endl;
  cin>>make;

cout<< "Enter car model: "<<endl;
cin>>model;

cout<<"Enter car manufacturing year: "<<endl;
cin>>year;
  }
  
void displayInfo(){
    cout<<"Car Details: "<<make<<" "<< model<< " "<<"("<<year<<")"<<endl;

}

};
int main()
{
    Car myCar;
    myCar.userInput();
    myCar.displayInfo();
    return 0;
}
```

# Output
### Car details
![image](https://github.com/user-attachments/assets/7a87259b-2ee7-46d8-a026-48bea430a182)
### Class by function
![image](https://github.com/user-attachments/assets/fe418aab-2908-4bfd-b3ca-967c7e680ba3)
### Area of rectangle
![image](https://github.com/user-attachments/assets/727e902c-381f-4b7a-b6d2-271fb6508758)
### User Class
![image](https://github.com/user-attachments/assets/4ebe5fec-98c5-4574-a2f3-0be8cb47dfb9)

# Conclusion
We learnt how to declare a class, create a class by taking inputs from user and learnt to make a class by function.
