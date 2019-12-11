#include <iostream>
#include <sstream>
#include "employee.h"
//        employee.cpp
//        main.cpp

int main()
{
    std::string firstName = "John";
    std::string firstDateOfBirth = "13.04.1990";
    std::vector<double> firstWages = {1.5, 10.2, 11.9, 4.9};
    Employee employeeJohn(firstName, firstDateOfBirth, firstWages);
    
    std::cout << employeeJohn;
    
    Employee employeeDave;
    std::string inputDataEmployee = "Dave;13.04.1989;1.5;1.9\n";
    std::stringstream inputStreamEmployee(inputDataEmployee);
    std::cin >> employeeDave;
    std::cout << employeeDave;
    return 0;
}
