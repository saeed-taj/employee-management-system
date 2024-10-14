# Employee Management System

This project is a simple C++ program that manages employee data for a company. It uses object-oriented programming concepts like inheritance and method overloading to handle different types of employees—hourly employees and salaried employees—and calculate their respective salaries.

## Features

- **Employee Base Class**: Contains common attributes and methods for all employees.
- **Hourly Employee Class**: Inherits from the Employee class and calculates salary based on the number of hours worked and the hourly rate.
- **Salaried Employee Class**: Inherits from the Employee class and calculates the monthly salary based on the annual salary.

## Program Structure

- **Employee Class**: This base class holds common data like the employee's name and has a basic method for salary calculation.
- **HourlyEmp Class**: This derived class stores the hours worked and hourly rate and calculates the total salary for an hourly employee.
- **SalariedEmp Class**: This derived class holds the annual salary and calculates the monthly salary for a salaried employee.

## Salary Calculation

1. **Hourly Employee**:  
   Salary = Hours worked × Hourly rate

2. **Salaried Employee**:  
   Salary = Annual salary ÷ 12
