#include "Person.h"
#include "Student.h"
#include <iostream>

int main(int argc, char const *argv[])
{
	Student s1;

	Student s2;

	Student s3;

        Person p1;
        Person p2 = Person(1245, "jo6kg", "Odell", "Jimmy", 22, 2, 1997, "jodell@richmond.edu", "Home", 264524952);
        Person p3 = p2;


        //----------------------------------
        //Tests Person
        //----------------------------------
        std::cout << "---------------------" << std::endl;
	std::cout << "Person:" << std::endl;
	std::cout << "---------------------" << std::endl;

	std::cout << std::endl << "Testing First Name setters/getters: " << std::endl;
 	std::cout << "--------------------------------------------" << std::endl;
	std::cout << p1.getFirstName() << std::endl;
	std::cout << p2.getFirstName() << std::endl;
	std::cout << p3.getFirstName() << std::endl;
	p1.setFirstName("Joe");
        std::cout << p1.getFirstName() << std::endl;

	std::cout << p1.getLastName() << std::endl;
	std::cout << p2.getLastName() << std::endl;
	std::cout << p3.getLastName() << std::endl;

	std::cout << p1.getDateOfBirth() << std::endl;
	std::cout << p2.getDateOfBirth() << std::endl;
	std::cout << p3.getDateOfBirth() << std::endl;

	std::cout << p1.getAddress() << std::endl;
	std::cout << p2.getAddress() << std::endl;
	std::cout << p3.getAddress() << std::endl;

	std::cout << p1.getNetID() << std::endl;
	std::cout << p2.getNetID() << std::endl;
	std::cout << p3.getNetID() << std::endl;

	std::cout << p1.getURID() << std::endl;
	std::cout << p2.getURID() << std::endl;
	std::cout << p3.getURID() << std::endl;

	std::cout << p1.getEmail() << std::endl;
	std::cout << p2.getEmail() << std::endl;
	std::cout << p3.getEmail() << std::endl;

	std::cout << p1.getPhone() << std::endl;
	std::cout << p2.getPhone() << std::endl;
	std::cout << p3.getPhone() << std::endl;

	return 0;
}
