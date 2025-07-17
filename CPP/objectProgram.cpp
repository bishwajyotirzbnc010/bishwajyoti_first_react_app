// C++ Program to Find the Greatest of Three Numbers Using if...else
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;

//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;

//     if (a >= b && a >= c) {
//         cout << "The greatest number is: " << a << endl;
//     } else if (b >= a && b >= c) {
//         cout << "The greatest number is: " << b << endl;
//     } else {
//         cout << "The greatest number is: " << c << endl;
//     }

//     return 0;
// }

// C++ Program Using a Class Named Teacher
//  #include <iostream>
//  using namespace std;

// class Teacher {
// public:
//     string name;
//     int age;
//     float salary;
//     string address;

//     void input() {
//         cout << "Enter Name: ";
//         getline(cin >> ws, name);
//         cout << "Enter Age: ";
//         cin >> age;
//         cout << "Enter Salary: ";
//         cin >> salary;
//         cout << "Enter Address: ";
//         getline(cin >> ws, address);
//     }

//     void displayNameAddress() {
//         cout << "Name: " << name << ", Address: " << address << endl;
//     }
// };

// int main() {
//     Teacher t[5];  // Create 5 teacher objects

//     cout << "--- Enter details of 5 teachers ---" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << "\nTeacher " << i + 1 << ":" << endl;
//         t[i].input();
//     }

//     cout << "\n--- Name and Address of all Teachers ---" << endl;
//     for (int i = 0; i < 5; i++) {
//         t[i].displayNameAddress();
//     }

//     return 0;
// }

// 1.Program for calculating area and perimeter of a rectangle by user input data using concept of class and object
#include <iostream>
using namespace std;

class Rectangle {
    public:
    float length, breadth;
    
    void input() {
        cout << "Enter length and breadth of rectangle: ";
        cin >> length >> breadth;
    }
    
    void areaPerimeter() {
        float area = length * breadth;
        float perimeter = 2 * (length + breadth);
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;
    }
};

int main() {
    Rectangle rect;
    rect.input();
    rect.areaPerimeter();
    
    return 0;
}    

// 2. Program to display general information of the student like account no, phone number, roll no using class and object
#include <iostream>
using namespace std;

class Student {
public:
    char name[50];
    int roll;
    long long phone;

    void input() {
        cout << "\nEnter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter phone number: ";
        cin >> phone;
    }

    void display() {
        cout << "\nStudent Info:\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Phone No: " << phone << endl;
    }
};

int main() {
    Student std;
    std.input();
    std.display();

    return 0;
}

// 3. Program to covert Indian currency into Nepali currency using the concept of class and objects

#include <iostream>
using namespace std;

class CurrencyConverter {
public:
    float INR;
    float Rate = 1.6; // 1 INR = 1.6 NPR

    void input() {
        cout << "\nEnter amount in Indian Rupees: ";
        cin >> INR;
    }

    void convert() {
        float NPR = INR * Rate;
        cout << "The converted mount in Nepali Rupees is : " << NPR << endl;
    }
};

int main() {
    CurrencyConverter currency;
    currency.input();
    currency.convert();

    return 0;
}

// 4. Write a program to check whether the given number is prime or object using the concept of class and object
#include <iostream>
using namespace std;

class PrimeChecker {
public:
    int num;

    void input() {
        cout << "\nTo check whether the number is prime or not, enter a number. ";
        cout << "\nEnter a number: ";
        cin >> num;
    }

    void checkPrime() {
        int i, count = 0;

        if (num <= 1) {
            cout << num << " is not a prime number.\n";
            return;
        }

        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                count++;
            }
        }

        if (count == 2) {
            cout << num << " is a prime number.\n";
        } else {
            cout << num << " is not a prime number.\n";
        }
    }
};

int main() {
    PrimeChecker prime;
    prime.input();
    prime.checkPrime();

    return 0;
}
