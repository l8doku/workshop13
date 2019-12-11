#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>
#include <iostream>



class Employee
{
private:
    std::string name;
    std::string dateOfBirth;
    std::vector<double> wages;
    double totalWages;
    

    
public:
    Employee();
    Employee(std::string name, std::string dateOfBirth, std::vector<double> wages);

    std::string getName() const;
    void setName(const std::string inputName);

    std::string getBirthDate() const;
    
    std::vector<double> getWagesList() const;

    double getAverageWages();
    double getTotalWages();
};

std::ostream& operator << (std::ostream &outputStream, const Employee &a);

std::istream& operator>> (std::istream& inputStream, Employee& employee);

#endif // EMPLOYEE_H
