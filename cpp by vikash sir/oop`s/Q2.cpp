#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Structure to store employee details
struct Employee {
    int empCode;
    string empName;
    double basicSalary;
    double netSalary;
};

// Function to calculate the net salary
double calculateNetSalary(double basicSalary) {
    double DA = 0.52 * basicSalary; // Dearness Allowance
    double HRA = 0.30 * basicSalary; // House Rent Allowance
    return basicSalary + DA + HRA;
}

int main() {
    int n;

    cout << "Enter the number of employees: ";
    cin >> n;

    vector<Employee> employees(n);

    // Input employee details
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        cout << "Employee Code: ";
        cin >> employees[i].empCode;
        cin.ignore(); // Ignore trailing newline
        cout << "Employee Name: ";
        getline(cin, employees[i].empName);
        cout << "Basic Salary: ";
        cin >> employees[i].basicSalary;

        // Calculate net salary
        employees[i].netSalary = calculateNetSalary(employees[i].basicSalary);
    }

    // Display employee details
    cout << "\nEmployee Details:\n";
    cout << left << setw(10) << "EmpCode" << setw(20) << "EmpName" << setw(15) << "Basic Salary" << "Net Salary" << endl;
    cout << "---------------------------------------------------------------\n";

    for (const auto& emp : employees) {
        cout << left << setw(10) << emp.empCode
             << setw(20) << emp.empName
             << setw(15) << fixed << setprecision(2) << emp.basicSalary
             << emp.netSalary << endl;
    }

    return 0;
}
