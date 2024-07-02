

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &object);
		Bureaucrat & operator=(Bureaucrat const &rhs);
		~Bureaucrat();

		std::string		getName() const;
		int 			getGrade() const;
		void			gradeIncreament();
		void			gradeDecreament();
		void			signAForm(AForm &Aform);
		void			executeForm(AForm const &Aform);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs);

#endif
