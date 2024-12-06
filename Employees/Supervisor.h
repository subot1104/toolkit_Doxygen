/**
 * @file Supervisor.h
 * @author Jose Hipolito
 * @date 2024-12-05
 * @brief supervisor employee
 * 
 * contains class defintion for supervisor
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"
//inherits methods from Employee class

/**
 * contains class members and class methods
 *
 * @class Supervisor Supervisor.h "Employees/Supervisor.h"
 * @brief supervisor class
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:
  void print();

/**
 * calculates pay for this employee
 *
 * @pre 
 * @return double pay
 * @post 
 * 
 */
  double calculatePay();

/**
 * default constructor for supervisor
 *
 * @pre 
 * @post creates supervisor object
 * 
 */
  Supervisor();

/**
 * parameterised constuctor
 *
 * @param int ID employee id
 * @param int years how long the employee has been here
 * @param double hourlyRate hourly pay rate
 * @param float hoursWorked worked hours
 * @param int numSupervised amount of employees supervised
 * @pre 
 * @post creates supervisor with parameters
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
