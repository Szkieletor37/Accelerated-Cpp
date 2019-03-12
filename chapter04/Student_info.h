#ifndef _STUDENT_INFO_H_
#define _STUDENT_INFO_H_

#include <iostream>
#include <string>
#include <vector>

struct Student_info {
  std::string name;
  double midterm, final;
  std::vector<double> homework;
}; // note the semicolon it's required

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double> &);
#endif

