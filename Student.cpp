#ifndef __STUDENT_CPP__
#define __STUDENT_CPP__

#include "Student.h"


Student::Student() : Person() {};


Student::Student(const Student& other) {}


Student::
Student(int urid, std::string netid, std::string lname, std::string fname, 
       int dob_day, int dob_mo, int dob_yr, 
       std::string email, std::string address, long phone,
       int day_admit, int month_admit, int year_admit,
       School school, bool is_full_time, 
       double units_completed)
	: Person(urid, netid, lname, fname, dob_day, dob_mo, 
			dob_yr, email, address, phone),
	  m_day_admit(day_admit), m_month_admit(month_admit), m_year_admit(year_admit),
	  m_school(school), m_is_full_time(is_full_time)
{
}


Student::~Student() {}


std::list<std::string> Student::getCourses()
{
	std::list<std::string> courses;
	return courses;
}


void Student::addCourse(std::string course)
{

}


void Student::removeCourse(std::string course)
{

}


void Student:: printCourses()
{

}


void Student::setCourses(std::list<std::string> courses)
{

}


void
Student::
clearCourses()
{

}


struct tm Student::getAdmitDate() 
{
	struct tm admit_date;
	return admit_date;
}


Student::School Student::getSchool() { return UNDEFINED; }

double Student::getGPA() { return 0; }

double Student::getUnitsCompleted() { return 0; }

bool Student::isFullTime() { return false; }

void Student::setAdmitDate(int day, int month, int year) {}

void Student::setSchool(School school) {}

void Student::setGPA(double gpa) {}

void Student::setUnitsCompleted(double units) {}

void Student::setFullTimeStatus(bool isFullTime) {}


#endif // __STUDENT_CPP__
