/**
 * @file Employee.h
 * @author Jose Hipolito
 * @date 2024-12-05
 * @brief employee class
 * 
 * contains employee class
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * contains class methods and members
 *
 * @class Employee Employee.h "Employees/Employee.h"
 * @brief employee class
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:

/**
 * prints information about employee
 *
 * @pre 
 * @return virtual 
 * @post prints info
 * 
 */
  virtual void print();

/**
 * calculates pay for employee
 *
 * @pre 
 * @return virtual returns pay
 * @post 
 * 
 */
  virtual double calculatePay();

/**
 * adds pay to payrate based on years worked
 *
 * @pre 
 * @return void 
 * @post pay is set based on year
 * 
 */
  void anniversary();

/**
 * default constructor
 *
 * @pre 
 * @post creates employee object
 * 
 */
  Employee();

/**
 * parametarised constructor
 *
 * @param int ID employee id
 * @param int years years worked
 * @param double hourlyRate hourly pay rate
 * @param float hoursWorked hours worked
 * @pre 
 * @post creates employee object with data
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
