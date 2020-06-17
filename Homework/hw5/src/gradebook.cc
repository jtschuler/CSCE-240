// Copyright 2020 Jadon Schuler

#include <inc/gradebook.h>

GradeBook::GradeBook() : size_(0), grades_length_(0) {
  grades_ = new char[0];
}

GradeBook::~GradeBook() { l
  delete [] grades_;
}


void GradeBook::Grow() {
  char* new_array = new char[grades_length_ + 1];

  for (size_t i = 0; i < grades_length_; ++i) {
    new_array[i] = grades_[i];
  }

  delete[] grades_;
  grades_ = new_array;
  grades_length_ += 1;
}


const size_t GradeBook::GetSize() const {
  return size_;
}


void GradeBook::Add(char Grade) {
  if (size_ >= grades_length_)
    Grow();

  grades_[size_] = Grade;
  ++size_;
}


char GradeBook::Get(size_t index) const {
  if (index >= size_)
    return '\0';
  else
    return grades_[index];
}


const GradeBook GradeBook::Add(const GradeBook& that) const {
  GradeBook new_book = GradeBook();

  for (size_t i = 0; i < size_; ++i)
    new_book.Add(Get(i));
  for (size_t i = 0; i < that.size_; ++i)
    new_book.Add(that.Get(i));

  return new_book;
}


double GradeBook::GradesToDoubleGPA() const {
  double total = 0.0;

  for (size_t i = 0; i < size_; ++i) {
    char curr_grade = Get(i);
    switch (curr_grade) {
      case 'A' :
        total += 4.0;
        break;
      case 'B' :
        total += 3.0;
        break;
      case 'C' :
        total += 2.0;
        break;
      case 'D' :
        total += 1.0;
        break;
    }
  }

  return total/size_;
}

char GradeBook::NumToCharGPA(const double gpa) const {
  if (gpa >= 3.5)
    return 'A';
  else if (gpa >= 2.5)
    return 'B';
  else if (gpa >= 1.5)
    return 'C';
  else if (gpa >= 0.5)
    return 'D';
  else if (gpa >= 0.0)
    return 'F';
  else
    return '\0';
}

char GradeBook::GetGPA() const {
  if (size_ <= 0)
    return '\0';

  double gpa = GradesToDoubleGPA();
  return NumToCharGPA(gpa);
}


char GradeBook::GetMax() const {
  if (size_ <= 0)
    return '\0';

  char max = 'F';
  for (size_t i = 0; i < size_; ++i)
    if (Get(i) < max)
      max = Get(i);

  return max;
}


bool GradeBook::Equals(const GradeBook& that) const {
  return GetGPA() == that.GetGPA();
}


bool GradeBook::LessThan(const GradeBook& that) const {
  char that_gpa = that.GetGPA();
  char this_gpa = GetGPA();

  if (that_gpa == '\0' && this_gpa != '\0')
    return false;
  if (this_gpa == '\0' && that_gpa != '\0')
    return true;

  if (this_gpa > that_gpa)
    return true;
  else
    return GetMax() > that.GetMax();
}


char GradeBook::operator[](size_t index) const {
  return grades_[index];
}
