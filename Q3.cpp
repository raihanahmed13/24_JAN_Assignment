#include <iostream>
#include <fstream>
using namespace std;
class book
{
public:
    string title;
    string author;
    string ISBN;
    double price;
    int stock;
};

int main()
{
    book b;
    b.title = "Book";
    b.author = "Author";
    b.ISBN = "ISBN100125";
    b.price = 250.56;
    b.stock = 15;

    fstream file;
    file.open("book", ios::binary | ios::out);
    file << b.title;
    file << endl;
    file << b.author;
    file << endl;
    file << b.ISBN;
    file << endl;
    file << b.price;
    file << endl;
    file << b.stock;
    file.close();
}