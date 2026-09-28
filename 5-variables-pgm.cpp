#include <iostream>
using namespace std;

int main() {
    std::string name;
    int age;
    long int phno;
    char gender;
    float mark1;
    float mark2;
    float avg;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << "\n";
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter gender [M/F]: ";
    cin >> gender;
    cout << "Enter your phone: ";
    cin >> phno;
    cout << "Enter mark1: ";
    cin >> mark1;
    cout << "Enter mark2: ";
    cin >> mark2;

    avg = (mark1+mark2)/2;
    std::cout << "Your average: " << avg << "\n";
}
