#ifndef __PERSON_CPP_
#define __PERSON_CPP_

#include "Person.h"
#include <iostream>

Person::Person()
{
}

Person::Person(const Person& other)
{
    this->Person = new Person(other); 
}

Person::Person(int urid, std::string netid, std::string lname, std::string fname,
	int dob_day, int dob_month, int dob_year, std::string email, std::string address,
	long phone)
{
    this->urid = urid;
    this->netid = netid;
    this->lname = lname;
    this->fname = fname;
    this->dob_day = dob_day;
    this->dob_month = dob_month;
    this->dob_year = dob_year;
    this->email = email;
    this->address = address;
    this->phone = phone;
    this->dob = {.tm_year = (dob_year - 1990), .tm_mon = dob_month, .tm_mday = dob_day};
}

Person::~Person() {}

std::string Person::getFirstName()
{ 
    return fname;
}

std::string Person::getLastName()
{
    return lname;
}

struct tm Person::getDateOfBirth()
{
    return dob;
}

std::string Person::getAddress()
{
    return address;
}

std::string Person::getNetID()
{
    return netid;
}

int Person::getURID()
{
    return urid;
}

std::string Person::getEmail()
{
    return email;
}

long Person::getPhone()
{
    return phone;
}

void Person::setFirstName(std::string fname)
{
    this->fname = fname;
}

void Person::setLastName(std::string lname)
{
    this->lname = lname;
}

void Person::setDateOfBirth(int day, int month, int year)
{
    this->dob.tm_mday = day;
    this->dob.tm_mon = month;
    this->dob.tm_year = year;
}

void Person::setAddress(std::string address)
{
    this->address = address;
}

void Person::setNetID(std::string netid)
{
    this->netid = netid;
}

void Person::setURID(int urid)
{
    this->urid = urid;
}

void Person::setEmail(std::string email)
{
    this->email = email;
}

void Person::setPhone(long number)
{
    this->phone = number;
}

#endif
