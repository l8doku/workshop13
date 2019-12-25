#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include "employee.h"
//        employee.cpp
//        main.cpp

struct Complex
{
    double real;
    double imag;
};

Complex operator*(const double& b, const Complex& a)
{
    Complex temp;
    temp.real = b * a.real;
    temp.imag = b * a.imag;
}

void test()
{
    Complex a;
    a.imag = 1;
    a.real = 2;
    double b = 0;
//    Complex c = b + a;
}

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
        outputStream << employee;
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

bool nameWageCompare(Employee& a, Employee& b)
{
//    a.name;
    
}

int main2()
{
    std::ifstream file("/home/georgii/WORK/DSBA/repositories/workshop13/workshop13/data/employees.txt");
    std::vector<Employee> employees = getDataEmployees(file);
    
    std::cout << "Unsorted employees:\n";
    printAllEmployees(std::cout, employees);
    std::cout << "=======================\n";
    std::cout << "Sorted employees (by wage)\n";
    
    std::sort(employees.begin(), employees.end(), wageCompare);
    printAllEmployees(std::cout, employees);
    
    std::cout << "=======================\n";
    std::cout << "Sorted employees (by name and wage)\n";

    std::sort(employees.begin(), employees.end(), nameWageCompare);
    printAllEmployees(std::cout, employees);
    
    Employee test = Employee::makeEmployee("test", "00.00.0000", 6);
    

    return 0;
}

int add2(int a, int b)
{
    return a + b;
}

std::vector<int>;

template <typename T, typename T2> 
T add(T a, T2 b)
{
    return a + b;
};

int main()
{
   int a = 1;
   int b = 2;
   int c = add(a, b);
   std::cout << c << "\n";
   
   
   double aa = 1.1;
   double bb = 2.6;
   double cc = add(aa, b);
   std::cout << cc << "\n";
   
   double d = aa + b;
   double f = add2(aa, b);
   std::cout << f << "\n";
   return 0; 
}







