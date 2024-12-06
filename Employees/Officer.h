/**
 * @file Officer.h
 * @author Jose Hipolito
 * @date 2024-12-05
 * @brief officer class
 * 
 * contains class methods and members
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"
//inherits methods from employee.h

/**
 * contains members and mathods of officer class
 *
 * @class Officer Officer.h "Employees/Officer.h"
 * @brief officer class
 *
 */
class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * prints the evilness value of this employee
 *
 * @pre 
 * @return void 
 * @post evilness is printed
 * 
 */
  void print();

/**
 * calculates the pay for this employee
 *
 * @pre 
 * @return double pay of employee
 * @post 
 * 
 */
  double calculatePay();

/**
 * default constructor for officer class
 *
 * @pre 
 * @post officer object created
 * 
 */
  Officer();

/**
 * parameterised contructor
 *
 * @param int ID employee id
 * @param int years years worked
 * @param double hourlyRate hourly pay rate
 * @param float hoursWorked amount of hours worked
 * @param double evilness how evil this officer is
 * @pre 
 * @post creates officer class containing these values
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
