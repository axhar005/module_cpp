#ifndef INTERN_HPP_
#define INTERN_HPP_

#include "AForm.hpp"

// Class declaration
class Intern {
public:
    Intern(); // Default constructor
    Intern(const Intern &other); // Copy constructor
    Intern &operator=(const Intern &rhs); // Copy assignment overload
    ~Intern(); // Default destructor
    AForm* makeForm(std::string name, std::string target);

private:

};

#endif // INTERN_HPP_