#include "Person.h"
#include "Student.h"
#include <iostream>

void testStudent(Student& s, int day_admit, int mo_admit, int yr_admit, 
            Student::School school, double gpa, double unit_completed, 
            bool is_full_time, std::list<std::string> courses);
/*
 *Author: Jimmy Odell, Tuan 
 *
 * Date: 4/8/18
 *
 * This is a tester for both the Person and student class. 
 */
int main(int argc, char const *argv[])
{
    using std::cout;
    using std::endl;
    using std::string;
    using std::list;

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
    list<string> courses   {"Math", "Chem", "Physics", "CS"}; 

    //--------------------------------------------------------------------------
    //Tests Person
    //--------------------------------------------------------------------------
    //creates three Persons to be tested. The first is used as an empty constructor
    //tester and later used to test the setters. The second Person is passed all 
    //parameters it needs. The third is used to test a copy constructor.
    Person p1;
    Person p2 = Person(1245, "jo6kg", "Odell", "Jimmy", 22, 2, 1997, "jodell@richmond.edu", "Home", 264524952);
    Person p3 = p2;


    cout << "---------------------" << endl;
    cout << "Person:" << endl;
    cout << "---------------------" << endl;

    //Tests the First name setters and getters by calling the getters on all of the
    //Persons created. Then it tests the setters by setting in p1 and calling the 
    //getters to compare the entered to the expected.
    cout << endl << "Testing First Name setters/getters: " << endl;
    cout << "--------------------------------------------" << endl; 
    cout << "Expected: " << endl << "Actual: " << p1.getFirstName() << endl;
    cout << "Expected: Jimmy" << endl << "Actual: " << p2.getFirstName() << endl;
    cout << "Expected: Jimmy" << endl << "Actual: " << p3.getFirstName() << endl;
    p1.setFirstName("Joe");
    cout << "Expected: Joe" << endl << "Actual: " << p1.getFirstName() << endl << endl;
    
    //Tests the last name setters and getters by calling the getters on all of the
    //Persons created. Then it tests the setters by setting in p1 and calling the 
    //getters to compare the entered to the expected.
    cout << endl << "Testing Last Name setters/getters: " << endl;
    cout << "--------------------------------------------" << endl; 
    cout << "Expected: " << endl << "Actual: " << p1.getLastName() << endl;
    cout << "Expected: Odell" << endl << "Actual: " << p2.getLastName() << endl;
    cout << "Expected: Odell" << endl << "Actual: " << p3.getLastName() << endl;
    p1.setLastName("MacEachon");
    cout << "Expected: MacEachon" << endl << "Actual: " << p1.getLastName() << endl << endl;

    //Tests the Date of Birth setters and getters by calling the getters on all of the
    //Persons created. Then it tests the setters by setting in p1 and calling the 
    //getters to compare the entered to the expected. This is done by creating a struct tm
    //that is set to have all the information from the Person. 
    struct tm dob = p1.getDateOfBirth();
    cout << endl << "Testing Date of Birth setters/getters: " << endl;
    cout << "--------------------------------------------" << endl; 
    cout << "Expected: 0/0/0" << endl << "Actual: " << 
	dob.tm_mon << "/" << dob.tm_mday << "/" << dob.tm_year << endl;
    dob = p2.getDateOfBirth();
    cout << "Expected: 2/22/1997" << endl << "Actual: " << 
	dob.tm_mon << "/" << dob.tm_mday << "/" << dob.tm_year << endl;
    dob = p3.getDateOfBirth();
    cout << "Expected: 2/22/1997" << endl << "Actual: " << 
	dob.tm_mon << "/" << dob.tm_mday << "/" << dob.tm_year << endl;
    p1.setDateOfBirth(12, 8, 1997);
    dob = p1.getDateOfBirth();
    cout << "Expected: 8/12/1997" << endl << "Actual: " << 
	dob.tm_mon << "/" << dob.tm_mday << "/" << dob.tm_year << endl;

    //Tests the address setters and getters by calling the getters on all of the
    //Persons created. Then it tests the setters by setting in p1 and calling the 
    //getters to compare the entered to the expected.
    cout << endl << "Testing Address setters/getters: " << endl;
    cout << "--------------------------------------------" << endl; 
    cout << "Expected: " << endl << "Actual: " << p1.getAddress() << endl;
    cout << "Expected: Home" << endl << "Actual: " << p2.getAddress() << endl;
    cout << "Expected: Home" << endl << "Actual: " << p3.getAddress() << endl;
    p1.setAddress("School");
    cout << "Expected: School" << endl << "Actual: " << p1.getAddress() << endl << endl;
    
    //Tests the Net ID setters and getters by calling the getters on all of the
    //Persons created. Then it tests the setters by setting in p1 and calling the 
    //getters to compare the entered to the expected.
    cout << endl << "Testing NetID setters/getters: " << endl;
    cout << "--------------------------------------------" << endl; 
    cout << "Expected: " << endl << "Actual: " << p1.getNetID() << endl;
    cout << "Expected: jo6kg" << endl << "Actual: " << p2.getNetID() << endl;
    cout << "Expected: jo6kg" << endl << "Actual: " << p3.getNetID() << endl;
    p1.setNetID("jm5ks");
    cout << "Expected: jm5ks" << endl << "Actual: " << p1.getNetID() << endl << endl;
    
    //Tests the URID setters and getters by calling the getters on all of the
    //Persons created. Then it tests the setters by setting in p1 and calling the 
    //getters to compare the entered to the expected.
    cout << endl << "Testing URID setters/getters: " << endl;
    cout << "--------------------------------------------" << endl; 
    cout << "Expected: 0" << endl << "Actual: " << p1.getURID() << endl;
    cout << "Expected: 1245" << endl << "Actual: " << p2.getURID() << endl;
    cout << "Expected: 1245" << endl << "Actual: " << p3.getURID() << endl;
    p1.setURID(2456);
    cout << "Expected: 2456" << endl << "Actual: " << p1.getURID() << endl << endl;
    
    //Tests the email setters and getters by calling the getters on all of the
    //Persons created. Then it tests the setters by setting in p1 and calling the 
    //getters to compare the entered to the expected.
    cout << endl << "Testing Email setters/getters: " << endl;
    cout << "--------------------------------------------" << endl; 
    cout << "Expected: " << endl << "Actual: " << p1.getEmail() << endl;
    cout << "Expected: jodell@richmond,edu" << endl << "Actual: " << p2.getEmail() << endl;
    cout << "Expected: jodell@richmond.edu" << endl << "Actual: " << p3.getEmail() << endl;
    p1.setEmail("jmaceachon@richmond.edu");
    cout << "Expected: jmaceachon@richmond.edu" << endl << "Actual: " << p1.getEmail() << endl << endl;

    //Tests the phone number setters and getters by calling the getters on all of the
    //Persons created. Then it tests the setters by setting in p1 and calling the 
    //getters to compare the entered to the expected.
    cout << endl << "Testing Phone setters/getters: " << endl;
    cout << "--------------------------------------------" << endl; 
    cout << "Expected: 0" << endl << "Actual: " << p1.getPhone() << endl;
    cout << "Expected: 264524952" << endl << "Actual: " << p2.getPhone() << endl;
    cout << "Expected: 264524952" << endl << "Actual: " << p3.getPhone() << endl;
    p1.setPhone(2032478599);
    cout << "Expected: 2032478599" << endl << "Actual: " << p1.getPhone() << endl << endl;


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
    s1.setCourses(courses);

    testStudent(s1, day_admit, mo_admit, yr_admit, school, 
            gpa, unit_completed, is_full_tm, courses);

    //-------------
    // Constructor
    cout << endl << "Test normal constructor" << endl;

    Student s2 {urid, netid, lname, fname, dob_day, dob_mo, dob_yr,
                email, address, phone, day_admit, mo_admit, yr_admit,
                school, is_full_tm, unit_completed};
    s2.setGPA(gpa);
    s2.setCourses(courses);

    testStudent(s2, day_admit, mo_admit, yr_admit, school, 
            gpa, unit_completed, is_full_tm, courses);

    cout << endl << "Test copy constructor" << endl;
    Student s3 = s1;

    testStudent(s3, day_admit, mo_admit, yr_admit, school, 
            gpa, unit_completed, is_full_tm, courses);

    //-------------
    // Set, add, clear courses
    cout << endl << "Test courses-related methods" << endl;
    
    s1.clearCourses();
    cout << "  Clear courses:" << endl;
    cout << "    "; s1.printCourses();
    cout << endl;

    s1.addCourse("Dance");
    cout << "  Add Dance course:" << endl;
    cout << "    "; s1.printCourses();
    cout << endl;

    s1.setCourses(courses);
    cout << "  Set courses to [Math, Chem, Physics, CS]:" << endl;
    cout << "    "; s1.printCourses();
    cout << endl;

    s1.removeCourse("Chem");
    cout << "  Remove Chem course:" << endl;
    cout << "    "; s1.printCourses();
    cout << endl;

    return 0;
}

void testStudent(Student& s, int day_admit, int mo_admit, int yr_admit, 
            Student::School school, double gpa, double unit_completed, 
            bool is_full_time, std::list<std::string> courses)
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

    // Courses
    cout << "  Courses: " << endl << "     ";
    s.printCourses();
    cout << endl << "    [";
    for (auto course : courses)
        cout << course << ", ";
    cout << "]" << endl;
}
