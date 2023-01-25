#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("book", ios::in);
    string s;
    while (file >> s)
    {
        cout << s << " " << endl;
    }
    file.close();
    return 0;
}