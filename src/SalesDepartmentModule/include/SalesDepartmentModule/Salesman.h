#ifndef SALESMAN_H
#define	SALESMAN_H

#include <string>
#include "PersonModule/Person.h"

namespace SalesDepartmentModule {

  class Salesman : public PersonModule::Person {

    public:

      void setVendorCode(const std::string & vendorCode) { _vendorCode = vendorCode; }

      std::string getVendorCode() { return _vendorCode; }

    private:

      std::string _vendorCode;
  };

}

#endif
