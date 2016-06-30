#ifndef PERSON_H
#define	PERSON_H

#include <string>

namespace PersonModule {

  class Person {

    public:

      std::string getFullName();

      void setName(const std::string & name);
      void setSurname(const std::string & surname);

    private:

      std::string _name, _surname;

  };

}

#endif	

