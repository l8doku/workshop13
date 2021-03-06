#include <sstream>

#include "employee.h"


Employee::Employee()
{
    
}

Employee::Employee(std::string inputName, std::string dateOfBirth, std::vector<double> wages):
    name(inputName), dateOfBirth(dateOfBirth), wages(wages)
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


void Employee::setDateOfBirth(const std::string inputDate)
{
    dateOfBirth = inputDate;
    return;
}

void Employee::addWage(double wage)
{
    this->wages.push_back(wage);
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
    if (totalWages < -0.1)
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

void Employee::clear()
{}
void Employee::clearWages()
{
    // clear wages here
}

std::istream& operator>> (std::istream& inputStream, Employee& employee)
{
    employee.clear();
//    employee.wages.clear();
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
     // employee.wages.push_back(std::stod(token));
        employee.addWage(std::stod(token));
    }
    return inputStream;
}

bool operator< (Employee& a, Employee& b)
{
    
    if (a.getName() < b.getName())
        return true;
    else if(b.getName() < a.getName())
        return false;

    if (a.getAverageWages() < b.getAverageWages())
    {
        return true;
    }
    else if (b.getAverageWages() < a.getAverageWages())
    {
        return false;
    }
    
    // Equal
    return false;
}

Employee Employee::makeEmployee(std::string name, std::string dateOfBirth, int wagesNum)
{
    std::vector<double> wages(wagesNum);
    for (int i = 0; i < wagesNum; ++i)
    {
        wages[i] = 0.1 * i;
    }
    Employee employee(name, dateOfBirth, wages);
    return employee;
}


