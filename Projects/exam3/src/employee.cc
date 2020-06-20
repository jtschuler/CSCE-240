// Copyright 2020 Jadon T Schuler


#include <inc/employee.h>


namespace exam3 {

Demographic::Demographic(const std::string& first_name,
            const std::string& last_name,
            const std::string& date_of_birth) {
  first_name_ = first_name;
  last_name_ = last_name;
  date_of_birth_ = date_of_birth;
}

// accessors
const std::string Demographic::first_name() const {
  return first_name_;
}

const std::string Demographic::last_name() const {
  return last_name_;
}

const std::string Demographic::date_of_birth() const {
  return date_of_birth_;
}


Employee::Employee(const std::string& first_name,
         const std::string& last_name,
         const std::string& date_of_birth,
         const std::string& employee_id)
: Demographic(first_name, last_name, date_of_birth) {
  employee_id_ = employee_id;
}

Employee::~Employee() { /* empty */ }


const std::string Employee::employee_id() const {
  return employee_id_;
}

HourlyEmployee::HourlyEmployee(const std::string& first_name,
               const std::string& last_name,
               const std::string& date_of_birth,
               const std::string& employee_id,
               double hourly_rate)
: Employee(first_name, last_name, date_of_birth, employee_id) {
  hourly_rate_ = hourly_rate;
}

double HourlyEmployee::pay_rate() const {
  return hourly_rate_;
}


double HourlyEmployee::CalculatePay(double hours_worked) const {
  return hourly_rate_ * hours_worked;
}


SalaryEmployee::SalaryEmployee(const std::string& first_name,
               const std::string& last_name,
               const std::string& date_of_birth,
               const std::string& employee_id,
               double salary)
: Employee(first_name, last_name, date_of_birth, employee_id) {
  salary_ = salary;
}

double SalaryEmployee::pay_rate() const {
  return salary_;
}

double SalaryEmployee::CalculatePay(double annual_percentage) const {
  return salary_ * 0.01 * annual_percentage;
}


}  // namespace exam3
