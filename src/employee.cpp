#include <sstream>

#include "employee.h"


Employee::Employee()
{
    
}

Employee::Employee(std::string name, std::string dateOfBirth, std::vector<double> wages):
    name(name), dateOfBirth(dateOfBirth), wages(wages)
{
    
}

std::string Employee::getName() const
{
    return name;
}


std::string Employee::getBirthDate() const
{
    return dateOfBirth;
}

void Employee::setName(const std::string inputName)
{
    name = inputName;
    return;
}


double Employee::getAverageWages()
{
    if (wages.size() < 1)
    {
        return 0;
    }
    double totalWages = this->getTotalWages();
    return totalWages / wages.size();
}


double Employee::getTotalWages()
{
    if (totalWages < 0)
    {
        return totalWages;
    }
    totalWages = 0;
    for (double wage : wages)
    {
        totalWages += wage;
    }
    return totalWages;
}

std::vector<double> Employee::getWagesList() const
{
    return this->wages;
}

std::ostream& operator << (std::ostream &outputStream, const Employee &a)
{
    outputStream << "Name: " << a.getName() << std::endl;
    outputStream << "Date of birth: " << a.getBirthDate() << std::endl;
    outputStream << "Wages: " << std::endl;
    std::vector<double> wages = a.getWagesList();
    int wageCount = 1;
    for (double wage : wages)
    {
        outputStream << wageCount << ": " << wage << std::endl;
        wageCount++;
    }
    return outputStream;
}


std::istream& operator>> (std::istream& inputStream, Employee& employee)
{
    std::string line;
    std::getline(inputStream, line);
    std::stringstream lineStream(line);
    std::string token;
    
    std::getline(lineStream, token, ';');
    employee.setName(token);
    
    std::getline(lineStream, token, ';');
    employee.setDateOfBirth(token);
    
    while(!lineStream.eof())
    {
        std::getline(lineStream, token, ';');
        employee.addWage(std::stod(token));        
    }
    
}



