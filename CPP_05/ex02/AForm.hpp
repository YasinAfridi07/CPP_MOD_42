

#ifndef	AFORM_HPP
#define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool				_isSigned;
		const int 			_signGrade;
		const int			_execGrade;

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
		AForm();
		AForm(std::string name, int _signGrade, int _execGrade);
		AForm(AForm const &object);
		AForm & operator= (AForm const &rhs);
		~AForm();
		std::string getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		void		beSigned(Bureaucrat const &rhs);
        virtual void    execute(Bureaucrat const &execute) const = 0;
};

std::ostream &operator<<(std::ostream &out, AForm const &rhs);

#endif
