#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
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
    for (Employee employee : data)
        ;
    // TODO Write your code here
}

// TASK: combine tasks 8 and 10 from the PDF
// Create several employees from file
// Output them
// Sort them (the operator is already overloaded)
// Output them again


bool wageCompare(Employee& a, Employee& b)
{
    return a.getAverageWages() < b.getAverageWages();
}

int main()
{
    std::ifstream file("/home/georgii/WORK/DSBA/repositories/workshop13/workshop13/data/employees.txt");
    std::vector<Employee> employees = getDataEmployees(file);
    
    std::cout << "Unsorted employees:\n";
    printAllEmployees(std::cout, employees);
    std::cout << "=======================\n";
    std::cout << "Sorted employees\n";
    
    std::sort(employees.begin(), employees.end(), wageCompare);
    printAllEmployees(std::cout, employees);
    
    
    Employee test = Employee::makeEmployee("test", "00.00.0000", 6);
    

    return 0;
}









