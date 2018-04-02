#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <list>
#include "Person.h"

class Student : public Person
{
    public:
        // outside of this file, access type as Student::School,
        // and particular schools as Student::AS for example
        enum School {AS, JSLS, LAW, RSB, SPCS, UNDEFINED};

    protected:
        // instance variables here...
        
    public:
        Student();                      // explicitly call Person() on implementation
        Student(const Student& other);  // call Person(other) on implementation
        Student(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               int day_admit, int month_admit, int year_admit,
               School school, bool is_full_time, 
               double units_completed);
        ~Student();

        std::list<std::string> getCourses();
        void                   addCourse(std::string course);
        void                   removeCourse(std::string course);
        void                   printCourses();
        void                   setCourses(std::list<std::string> courses);
        void                   clearCourses();

        struct tm              getAdmitDate();
        School                 getSchool();
        double                 getGPA();
        double                 getUnitsCompleted();
        bool                   isFullTime();

        void setAdmitDate(int day, int month, int year);
        void setSchool(School school);
        void setGPA(double gpa);
        void setUnitsCompleted(double units);
        void setFullTimeStatus(bool isFullTime);
};

#endif
