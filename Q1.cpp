#include <iostream>
#include <fstream>
using namespace std;
class student
{
public:
    string name;
    int age;
    double grade;
};
int main()
{
    student s;
    s.name = "Raj";
    s.age = 18;
    s.grade = 7.84;
    fstream file;
    file.open("student", ios::out);
    file << s.name;
    file << endl;
    file << s.age;
    file << endl;
    file << s.grade;
    file.close();
}