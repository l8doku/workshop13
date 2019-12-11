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
    std::string inputDataEmployee = "John;13.04.1989;1.5;1.9\n";
    std::stringstream inputStreamEmployee(inputDataEmployee);
    inputStreamEmployee >> employeeDave;
    std::cout << employeeDave << std::endl;
    if(employeeDave < employeeJohn)
    {
        std::cout << "John2 is lower sorted than John" << std::endl;
    }
    else
    {
        std::cout << "John2 is not lower sorted than John" << std::endl;
    }
    return 0;
}
