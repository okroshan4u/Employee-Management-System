#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee &emp)
{
    cout << "ID: " << emp.id << " " << ",Name: " << emp.name << " Salary: $" << emp.salary << endl;
}

int main()
{

    vector<Employee> employees = {
        {101, "Roshan", 10000},
        {102, "Janny", 30000},
        {103, "Smith", 40000},
        {104, "Tony", 30000},
        {105, "Raman", 50000},
    };

    sort(employees.begin(), employees.end(), [](const Employee &e1, const Employee &e2)
         { return e1.salary > e2.salary; });

    cout << "Employees sorted by salary -> Highest to lowest \n";

    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highEarners;

    copy_if(employees.begin(), employees.end(),
            back_inserter(highEarners),
            [](const Employee &e)
            {
                return e.salary > 30000;
            });

    cout << "Employees who are higherEarners\n";

    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    double totalSalary = accumulate(employees.begin(), employees.end(), 0.0, 
    [](double sum, const Employee &e){ 
        return sum + e.salary; 
    });

    cout << "Total salary of all the emlployees are :" << totalSalary << endl;

    double averageSalary = totalSalary / employees.size();

    cout << "Average salary of all the employees are : " << averageSalary << endl;
    // since here we are comparing from the structure so we don't which one will
    // come when return or computer don't what type of datatype will be returned
    // because in struct there is different types of datatypes are there so we use auto
    auto maxSalary = max_element(employees.begin(), employees.end(), 
                    [](const Employee &e1, const Employee &e2){ 
                        return e1.salary < e2.salary; 
                    });

    // max_element → returns an iterator to the element

    // “Any STL algorithm that finds an element → returns an iterator”

    // | Algorithm | Return type |
    // | -- -- -- -- -- -- -| -- -- -- -- -- -|
    // | `find` | iterator |
    // | `find_if` | iterator |
    // | `max_element` | iterator |
    // | `min_element` | iterator |
    // | `lower_bound` | iterator |

    cout << "Max salary of the Employees " << endl;
    cout << "Max salary of the Employees " << maxSalary->salary << endl;

    // displayEmployee(*maxSalary);

    auto minSalary = min_element(employees.begin(), employees.end(), 
    [](const Employee &e1, const Employee &e2){ 
        return e1.salary < e2.salary; 
    });

    cout<<"Min salary of the employee is : "<< minSalary -> salary<<endl;

    return 0;
}