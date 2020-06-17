/* Copyright 2020 CSCE240
 */


#include <person.h>
using std::string;


const Person ConstructPerson(const string& first_name,
                             const string& last_name,
                             const Date& date_of_birth) {
  Person tmp;
  tmp.first_name = first_name;
  tmp.last_name = last_name;
  tmp.date_of_birth.year = date_of_birth.year;
  tmp.date_of_birth.month = date_of_birth.month;
  tmp.date_of_birth.day = date_of_birth.day;

  return tmp;
}

bool Equals(const Person& lhs, const Person& rhs) {
  return lhs.first_name == rhs.first_name
    && lhs.last_name == rhs.last_name
    && Equals(lhs.date_of_birth, rhs.date_of_birth);
}

void Insert(std::istream* from, Person* to) {
  *from >> to->first_name;
  *from >> to->last_name;
  Insert(from, &(to->date_of_birth));
}

const Date ConstructDate(unsigned int year,
                         unsigned int month,
                         unsigned int day) {
  Date tmp = { year, month, day };
  return tmp;
}

bool Equals(const Date& lhs, const Date& rhs) {
  return lhs.year == rhs.year
    && lhs.month == rhs.month
    && lhs.day == rhs.day;
}

void Insert(std::istream* from, Date* to) {
  *from >> to->year >> to->month >> to->day;
}
