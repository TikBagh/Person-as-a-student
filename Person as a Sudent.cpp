// Person as a Sudent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Person
{
    std::string name;
    
    
public:
    Person(const std::string& Name) : name(Name) {}

    const std::string& getName() const {
        return name;
    }
};

class Student : public Person
{
private:
    bool is_excellent;
    double payment;

public:
    Student(const std::string& name,  double payment, bool is_excellent)
        : Person(name),  payment(payment), is_excellent(is_excellent) {}

    double getPayment() const {
        if (is_excellent)
        {
           std::cout << "Free" << std::endl;
           return 0;
        }
        else
        {
            std::cout << "Paid" << std::endl;
            return payment;
        }
    }
   
    
};





int main()
{
    Student student("Tigran", 3000, 1 );

    std::cout << "Student Name: " << student.getName() << std::endl;
    std::cout << "Study Payment: $" << student.getPayment() << std::endl;
    
}

