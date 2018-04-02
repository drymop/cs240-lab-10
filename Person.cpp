#ifndef __PERSON_CPP_
#define __PERSON_CPP_

#include "Person.h"
#include <iostream>

Person::Person()
{
}

Person::Person(const Person& other)
{
}

Person::Person(int urid, std::string netid, std::string lname, std::string fname,
	int dob_day, int dob_month, int dob_year, std::string email, std::string address,
	long phone)
{
}

Person::~Person() {}

std::string Person::getFirstName()
{
    std::string s = "";
    return s;
}

std::string Person::getLastName()
{
    std::string s = "";
    return s;
}

struct tm Person::getDateOfBirth()
{
    struct tm = "";
    return tm;
}

std::string Person::getAddress()
{
    std::string s = "";
    return s;
}

std::string Person::getNetID()
{
    std::string s = "";
    return s;
}

int Person::getURID()
{
    int i = 0;
    return i;
}

std::string Person::getEmail()
{
    std::string s = "";
    return s;
}

long Person::getPhone()
{
    long l = 0;
    return l;
}

void Person::setFirstName(std::string fname)
{
}

void Person::setLastName(std::string lname)
{
}

void Person::setDateOfBirth(int day, int month, int year)
{
}

void Person::setAddress(std::string address)
{
}

void Person::setNetID(std::string netid)
{
}

void Person::setURID(int urid)
{
}

void Person::setEmail(std::string email)
{
}

void Person::setPhone(long number)
{
}

#endif
