# Employee Management System (C++ | STL)

A simple **Employee Management System** written in **C++** that demonstrates the use of **STL algorithms**, **lambda expressions**, and **modern C++ practices** to manage employee data.

This project performs common operations such as sorting, filtering, aggregation, and searching on employee records.

---

## 🚀 Features

- Store employee details using a `struct`
- Sort employees by salary (highest → lowest)
- Filter high-earning employees
- Calculate:
  - Total salary of all employees
  - Average salary
- Find:
  - Employee with maximum salary
  - Employee with minimum salary
- Uses STL algorithms for clean and efficient code

---

## 🧱 Technologies Used

- **Language:** C++
- **Concepts:**
  - `struct`
  - STL Containers (`vector`)
  - STL Algorithms:
    - `sort`
    - `for_each`
    - `copy_if`
    - `accumulate`
    - `max_element`
    - `min_element`
  - Lambda Expressions
  - Iterators

---

## 📂 Project Structure
```
Employee-Management-System/
│
├── main.cpp
└── README.md
```

---

## 🧑‍💻 How It Works

### 1. Employee Structure
Each employee has:
- `id` (int)
- `name` (string)
- `salary` (double)

### 2. Sorting
Employees are sorted by salary in **descending order** using `std::sort`.

### 3. Filtering
Employees earning more than **30000** are filtered using `std::copy_if`.

### 4. Salary Calculations
- **Total Salary:** calculated using `std::accumulate`
- **Average Salary:** total salary divided by number of employees

### 5. Max & Min Salary
- `std::max_element` finds the employee with the highest salary
- `std::min_element` finds the employee with the lowest salary

---

## ▶️ Sample Output
```
Employees sorted by salary -> Highest to lowest
ID: 105 ,Name: Raman Salary: $50000
ID: 103 ,Name: Smith Salary: $40000
ID: 102 ,Name: Janny Salary: $30000
ID: 104 ,Name: Tony Salary: $30000
ID: 101 ,Name: Roshan Salary: $10000

Employees who are higherEarners
ID: 105 ,Name: Raman Salary: $50000
ID: 103 ,Name: Smith Salary: $40000

Total salary of all the employees are : 160000
Average salary of all the employees are : 32000
Max salary of the Employees : 50000
Min salary of the employee is : 10000

```
---

## ⚙️ How to Compile & Run

```bash
g++ main.cpp -o employee
./employee
```

## 📌 Learning Outcomes

- Practical usage of STL algorithms
- Understanding iterators and lambda functions
- Writing clean, readable, and modern C++ code
- Working with custom data types in STL

## 🤝 Future Improvements
- Add file input/output
- Search employee by ID or name
- Menu-driven interface
- Use class instead of struct
- Exception handling

##📄 License
This project is open-source and free to use for learning purposes.

##⭐ If you like this project, consider giving it a star!
