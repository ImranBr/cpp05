#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;

    public:
        Bureaucrat();
	    Bureaucrat(std::string name);
	    Bureaucrat(const Bureaucrat& other);
	    Bureaucrat &operator=(const Bureaucrat &other);
	    ~Bureaucrat();
};