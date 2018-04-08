#ifndef __PERSON_CPP_
#define __PERSON_CPP_

/*
 * Author: Jimmy Odell
 *
 * Date: 4/8/18
 */

#include "Person.h"
#include <iostream>

//Default constructor for Person
Person::Person()
{
}

//Copy constructor that takes in another Person
Person::Person(const Person& other)
{
    this->urid = other.urid;
    this->netid = other.netid;
    this->lname = other.lname;
    this->fname = other.fname;
    this->dob_day = other.dob_day;
    this->dob_month = other.dob_month;
    this->dob_year = other.dob_year;
    this->email = other.email;
    this->address = other.address;
    this->phone = other.phone;
    this->dob_day = other.dob_day;
    this->dob_month = other.dob_month;
    this->dob_year = other.dob_year;

}

//Constructor that takes in the information of a person: URID, Net ID, First and last name
//birthday, email address, street address, and phone number.
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
    this->dob_day = dob_day;
    this->dob_month = dob_month;
    this->dob_year = dob_year;
}

//Deconstructor
Person::~Person() {}

//Retruns the first name as a string
std::string Person::getFirstName()
{ 
    return fname;
}

//returns the last name as a string
std::string Person::getLastName()
{
    return lname;
}

//returns the date of births as a struct tm
struct tm Person::getDateOfBirth()
{
    struct tm dob;
    dob.tm_mday = dob_day;
    dob.tm_mon = dob_month;
    dob.tm_year = dob_year;
    return dob;
}

//returns the street address as a string
std::string Person::getAddress()
{
    return address;
}

//returns the Net ID as a string
std::string Person::getNetID()
{
    return netid;
}

//returns the URID as an int
int Person::getURID()
{
    return urid;
}

//returns the email as a string
std::string Person::getEmail()
{
    return email;
}

//returns the phone number as an int
long Person::getPhone()
{
    return phone;
}

//Sets the first name to the string passed (fname)
void Person::setFirstName(std::string fname)
{
    this->fname = fname;
}

//sets the last name to the string passed (lname)
void Person::setLastName(std::string lname)
{
    this->lname = lname;
}

//sets the date of birth to the integers passed. (day, month, year)
void Person::setDateOfBirth(int day, int month, int year)
{
    this->dob_day = day;
    this->dob_month = month;
    this->dob_year = year;
}

//sets the address to the string passed (address)
void Person::setAddress(std::string address)
{
    this->address = address;
}

//sets the Net ID to the string passed (netid)
void Person::setNetID(std::string netid)
{
    this->netid = netid;
}

//seets the URID to the int passed. (urid)
void Person::setURID(int urid)
{
    this->urid = urid;
}

//sets the email to the string passed (email)
void Person::setEmail(std::string email)
{
    this->email = email;
}

//sets the phone number to the long passed. (number)
void Person::setPhone(long number)
{
    this->phone = number;
}

#endif
