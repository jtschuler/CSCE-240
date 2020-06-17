// Copyright 2020 Jadon Schuler


#include <inc/time_span.h>


TimeSpan::TimeSpan() : seconds_(0), minutes_(0), hours_(0) { /*empty*/ }


TimeSpan::TimeSpan(int hours, int minutes, int seconds) {
  hours_ = hours;
  minutes_ = minutes;
  seconds_ = seconds;
}

const TimeSpan TimeSpan::operator+(const TimeSpan& rhs) const {
  int seconds = seconds_;
  int minutes = minutes_;
  int hours = hours_;

  seconds += rhs.seconds_;
  minutes += rhs.minutes_;
  hours += rhs.hours_;

  minutes += (seconds / 60);
  seconds = seconds % 60;

  hours += (minutes / 60);
  minutes = minutes % 60;

  return TimeSpan(hours, minutes, seconds);
}


const TimeSpan TimeSpan::operator+(int rhs) const {
  int seconds = seconds_;
  int minutes = minutes_;
  int hours = hours_;

  seconds += rhs;

  minutes += (seconds / 60);
  seconds = seconds % 60;

  hours += (minutes / 60);
  minutes = minutes % 60;

  return TimeSpan(hours, minutes, seconds);
}


std::istream& TimeSpan::Insert(std::istream& in) {
  char div;
  in >> hours_ >> div >> minutes_ >> div >> seconds_;
  return in;
}


const TimeSpan operator+(int lhs, const TimeSpan& rhs) {
  return rhs + lhs;
}


std::istream& operator>>(std::istream& lhs, TimeSpan& rhs) {
  return rhs.Insert(lhs);
}


std::ostream& operator<<(std::ostream& lhs, const TimeSpan& rhs) {
  lhs << rhs.hours() << " : " << rhs.minutes() << " : " << rhs.seconds();
  return lhs;
}
