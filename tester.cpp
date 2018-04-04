#include "Person.h"
#include "Student.h"
#include <iostream>

void testStudent(Student& s, int day_admit, int mo_admit, int yr_admit, 
            Student::School school, double gpa, double unit_completed, 
            bool is_full_time);

int main(int argc, char const *argv[])
{
    using std::cout;
    using std::endl;

    int          urid      {1111};
    std::string  netid     {"lmtuan"};
    std::string  lname     {"Lm"};
    std::string  fname     {"Tuan"};
    int          dob_day   {22};
    int          dob_mo    {8};
    int          dob_yr    {2000};
    
    std::string  email     {"example@richmond.edu"};
    std::string  address   {"A Street, Richmond VA"};
    long         phone     {1122334455L};
    int          day_admit {25};
    int          mo_admit  {8};
    int          yr_admit  {2016};
    Student::School school {Student::LAW};
    bool         is_full_tm{true};
    double       unit_completed {22.5};
    double       gpa       {3.4};

    //--------------------------------------------------------------------------
    //Tests Person
    //--------------------------------------------------------------------------
    Person p1;
    Person p2 = Person(1245, "jo6kg", "Odell", "Jimmy", 22, 2, 1997, "jodell@richmond.edu", "Home", 264524952);
    Person p3 = p2;


    cout << "---------------------" << endl;
    cout << "Person:" << endl;
    cout << "---------------------" << endl;

    cout << endl << "Testing First Name setters/getters: " << endl;
    cout << "--------------------------------------------" << endl;
    cout << p1.getFirstName() << endl;
    cout << p2.getFirstName() << endl;
    cout << p3.getFirstName() << endl;
    p1.setFirstName("Joe");
    cout << p1.getFirstName() << endl;

    cout << p1.getLastName() << endl;
    cout << p2.getLastName() << endl;
    cout << p3.getLastName() << endl;

    //cout << p1.getDateOfBirth() << endl;
    //cout << p2.getDateOfBirth() << endl;
    //cout << p3.getDateOfBirth() << endl;

    cout << p1.getAddress() << endl;
    cout << p2.getAddress() << endl;
    cout << p3.getAddress() << endl;

    cout << p1.getNetID() << endl;
    cout << p2.getNetID() << endl;
    cout << p3.getNetID() << endl;

    cout << p1.getURID() << endl;
    cout << p2.getURID() << endl;
    cout << p3.getURID() << endl;

    cout << p1.getEmail() << endl;
    cout << p2.getEmail() << endl;
    cout << p3.getEmail() << endl;

    cout << p1.getPhone() << endl;
    cout << p2.getPhone() << endl;
    cout << p3.getPhone() << endl;


    //--------------------------------------------------------------------------
    // Test Student
    //--------------------------------------------------------------------------
    cout 
    << "--------------------------------------------------" << endl
    << "Student:" << endl
    << "--------------------------------------------------" << endl;

    //------------
    // Getters, setters
    cout << "Test setters/getters" << endl;

    Student s1;
    s1.setAdmitDate(day_admit, mo_admit, yr_admit);
    s1.setSchool(school);
    s1.setGPA(gpa);
    s1.setUnitsCompleted(unit_completed);
    s1.setFullTimeStatus(is_full_tm);

    testStudent(s1, day_admit, mo_admit, yr_admit, school, 
            gpa, unit_completed, is_full_tm);

    //-------------
    // Constructor
    cout << endl << "Test normal constructor" << endl;

    Student s2 {urid, netid, lname, fname, dob_day, dob_mo, dob_yr,
                email, address, phone, day_admit, mo_admit, yr_admit,
                school, is_full_tm, unit_completed};

    testStudent(s2, day_admit, mo_admit, yr_admit, school, 
            gpa, unit_completed, is_full_tm);

    cout << endl << "Test copy constructor" << endl;
    Student s3 = s2;

    testStudent(s3, day_admit, mo_admit, yr_admit, school, 
            gpa, unit_completed, is_full_tm);

    return 0;
}

void testStudent(Student& s, int day_admit, int mo_admit, int yr_admit, 
            Student::School school, double gpa, double unit_completed, 
            bool is_full_time)
{
    using std::cout;
    using std::endl;

    // Admit date
    struct tm admit_date = s.getAdmitDate();
    cout
    << "  Admit Date: " 
    << admit_date.tm_mon << "/" << admit_date.tm_mday << "/" << (admit_date.tm_year + 1900)
    << " [" << mo_admit << "/" << day_admit << "/" << yr_admit << "]" << endl;

    // School
    cout << "  School: " << s.getSchool() << " [" << school << "]" << endl;

    // GPA
    cout << "  GPA: " << s.getGPA() << " [" << gpa << "]" << endl;

    // Units completed
    cout << "  Units: " << s.getUnitsCompleted() << " [" << unit_completed << "]" << endl;

    // Full time status
    cout << "  Full time: " << s.isFullTime() << " [" << is_full_time << "]" << endl;
}