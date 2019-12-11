#include <iostream>
#include "employee.h"

int main()
{
    std::string firstName = "John";
    std::string firstDateOfBirth = "13.04.1990";
    std::vector<double> firstWages = {1.5, 10.2, 11.9, 4.9};
    Employee employeeJohn(firstName, firstDateOfBirth, firstWages);
    
    std::cout << employeeJohn;
    return 0;
}
