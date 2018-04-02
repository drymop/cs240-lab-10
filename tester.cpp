#include "Person.h"
#include "Student.h"

#include <iostream>

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

    Student s1;

    cout 
    << "--------------------------------------------------" << endl
    << "Student" << endl
    << "--------------------------------------------------" << endl
    << "Test setters/getters" << endl;

    // Admit date
    s1.setAdmitDate(day_admit, mo_admit, yr_admit);
    struct tm admit_date = s1.getAdmitDate();
    cout
    << "  Admit Date: " 
    << admit_date.tm_mon << "/" << admit_date.tm_mday << "/" << (admit_date.tm_year + 1900)
    << " [" << mo_admit << "/" << day_admit << "/" << yr_admit << "]" << endl;

    // School
    s1.setSchool(school);
    cout
    << "  School " << s1.getSchool() << " [" << school << "]" << endl;

    // GPA
    s1.setGPA()

    return 0;
}