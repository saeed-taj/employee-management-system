#include <iostream>
using namespace std;

class Employee{

    protected:
      
      string name;
      //int type;    

    public:
    
    Employee(string na){

        name =  na ;
        //type = typ;
    
    }
    
    string getname(){

        return name;
    }

    void calcsalary(){

        cout << " base employee class" << endl;
    }

};


class HourlyEmp : public Employee {
      private:
int hoursWorked;
double hourlyRate;

public:
HourlyEmp(string na , int hours_worked , double hourly_rate) : Employee(na) , hoursWorked(hours_worked) , hourlyRate(hourly_rate){
} 

void calcSalary(){

//int Hour_rate = 100;
 double salary = hoursWorked * hourlyRate;
 cout << "Employee: " << name << " - Hourly Salary: $" << salary << endl;
 

}



};


class SalariedEmp : public Employee {
private:
    double annualSalary;


public:
SalariedEmp(string na , double annual_salary) : Employee(na) , annualSalary(annual_salary) {
}

void calcSalary() {
       
        double salary = annualSalary / 12; 
        cout << "Employee: " << name << " - Monthly Salary: $" << salary << endl;
    
    }

};



int main(){
      
      string name;
      int type;
      double hourlyRate = 100.0;

    cout << "Enter the Employee name : " << endl;
    cin >> name ;  

    cout << "Enter the Employee type (1. for Hourly and 2. for Salaried ) : " << endl;
    cin >> type ;
      
    if (type == 1){    // For hourly employees 
    
    int hoursWorked;
    cout << " Enter no of Hours you have worked for hourly worker : " << endl;
    cin >> hoursWorked ; 

     HourlyEmp hourlyEmp(name  , hoursWorked , hourlyRate );
      hourlyEmp.calcSalary(); 
    }

    else if (type == 2){     // For Salaried employees 
    double annualSalary;
    cout << " Enter no of Hours you have worked for salaried worker : " << endl;
    cin >> annualSalary ; 
    
    SalariedEmp salariedEmp(name , annualSalary );
    salariedEmp.calcSalary();
    }


    else {

        cout << " enter correct number " << endl;
    }  
      
      
      
     
        

    return 0;
}