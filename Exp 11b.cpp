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

