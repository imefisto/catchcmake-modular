#include <iostream>
#include "PersonModule/Person.h"
#include "SalesDepartmentModule/Salesman.h"

int main (int argc, char *argv[]) 
{ 
  PersonModule::Person p;
  p.setName("Pepe");
  p.setSurname("Argento");

  std::cout << "Hello " << p.getFullName() << "\n";

  SalesDepartmentModule::Salesman s;
  s.setName("John");
  s.setSurname("Doe");
  s.setVendorCode("s1");

  std::cout << "Salesman: " << s.getFullName() << " - Code: " << s.getVendorCode() << "\n";

  return 0;
} 

