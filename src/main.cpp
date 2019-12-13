#include <iostream>
#include <sstream>
#include <fstream>
#include "employee.h"
//        employee.cpp
//        main.cpp


std::vector<Employee> getDataEmployees(std::istream& inputStream)
{
    std::vector<Employee> emplData;
    Employee emplCurrent;
    while(!inputStream.eof())
    {
        inputStream >> emplCurrent;
        emplData.push_back(emplCurrent);        
    }
    return emplData;
}


int main()
{
    std::string firstName = "John";
    std::string firstDateOfBirth = "13.04.1990";
    std::vector<double> firstWages = {1.5, 10.2, 11.9, 4.9};
    Employee employeeJohn(firstName, firstDateOfBirth, firstWages);
    
    std::cout << employeeJohn;

    std::ifstream file("../workshop13/data/employees.txt");
    std::vector<Employee> employees = getDataEmployees(file);
    std::cout << employees[0] << std::endl;

    
    if(employees[0] < employeeJohn)
    {
        std::cout << "John2 is lower sorted than John" << std::endl;
    }
    else
    {
        std::cout << "John2 is higher sorted than John (or is equal to him)" << std::endl;
    }
    return 0;
}
