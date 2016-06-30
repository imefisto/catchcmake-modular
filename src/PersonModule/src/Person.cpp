#include "PersonModule/Person.h"

std::string PersonModule::Person::getFullName()
{
  std::string fullName = _name;

  if(_name.length() > 0 && _surname.length() > 0)
  {
    fullName += " ";
  }

  fullName += _surname;

  return fullName;

}

void PersonModule::Person::setName(const std::string & name)
{
  _name = name;
}

void PersonModule::Person::setSurname(const std::string & surname)
{
  _surname = surname;
}

