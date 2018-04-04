#ifndef __STUDENT_CPP__
#define __STUDENT_CPP__

#include "Student.h"
#include <iostream>


Student::Student() : Person() {};


Student::Student(const Student& other) 
	: Person(other), 
	  m_day_admit(other.m_day_admit), 
	  m_month_admit(other.m_month_admit), 
	  m_year_admit(other.m_year_admit),
	  m_school(other.m_school), 
	  m_is_full_time(other.m_is_full_time), 
	  m_units_completed(other.m_units_completed),
	  m_gpa(other.m_gpa), 
	  m_courses(other.m_courses)
{
}


Student::
Student(int urid, std::string netid, std::string lname, std::string fname, 
       int dob_day, int dob_mo, int dob_yr, 
       std::string email, std::string address, long phone,
       int day_admit, int month_admit, int year_admit,
       School school, bool is_full_time, 
       double units_completed)
	: Person(urid, netid, lname, fname, dob_day, dob_mo, dob_yr, email, address, phone),
	  m_day_admit(day_admit), 
	  m_month_admit(month_admit), 
	  m_year_admit(year_admit),
	  m_school(school), 
	  m_is_full_time(is_full_time), 
	  m_units_completed(units_completed)
{
}


Student::~Student() {}


std::list<std::string> Student::getCourses()
{
	std::list<std::string> courses;
	return courses;
}


void Student::addCourse(std::string course) { m_courses.push_back(course); }


void Student::removeCourse(std::string course) { m_courses.remove(course); }


void Student:: printCourses()
{
	for (auto &c : m_courses)
		std::cout << c << ", ";
}


void Student::setCourses(std::list<std::string> courses) { m_courses = courses; }


void Student::clearCourses() { m_courses.clear(); }


struct tm Student::getAdmitDate() 
{
	struct tm admit_date;
	admit_date.tm_mday = m_day_admit;
	admit_date.tm_mon = m_month_admit;
	admit_date.tm_year = m_year_admit - 1900;
	return admit_date;
}

Student::School Student::getSchool() { return m_school; }

double Student::getGPA() { return m_gpa; }

double Student::getUnitsCompleted() { return m_units_completed; }

bool Student::isFullTime() { return m_is_full_time; }

void Student::setAdmitDate(int day, int month, int year) 
{
	m_day_admit = day;
	m_month_admit = month;
	m_year_admit = year;
}


void Student::setSchool(School school) { m_school = school; }

void Student::setGPA(double gpa) { m_gpa = gpa; }

void Student::setUnitsCompleted(double units) { m_units_completed = units; }

void Student::setFullTimeStatus(bool isFullTime) { m_is_full_time = isFullTime; }


#endif // __STUDENT_CPP__