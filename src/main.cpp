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
    while(inputStream >> emplCurrent)
    {
        emplData.push_back(emplCurrent);        
    }
    return emplData;
}

void printAllEmployees(std::ostream& outputStream, std::vector<Employee> data)
{
    // TODO Write your code here
}

// TASK: combine tasks 8 and 10 from the PDF
// Create several employees from file
// Output them
// Sort them (the operator is already overloaded)
// Output them again





int main()
{
    std::ifstream file("/home/georgii/WORK/DSBA/repositories/workshop13/workshop13/data/employees.txt");
    std::vector<Employee> employees = getDataEmployees(file);
    
    printAllEmployees(std::cout, employees);
    std::cout << "=======================\n";
    
    
    Employee test = Employee::makeEmployee("test", "00.00.0000", 6);
    

    return 0;
}









