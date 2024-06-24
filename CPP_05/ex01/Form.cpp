/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:32:49 by yusman            #+#    #+#             */
/*   Updated: 2024/06/24 20:08:47 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("no name"), _isSigned(false), _signGrade(1), _execGrade(5)
{
	std::cout << "Form Default Constructor Called" << std::endl;
}

Form::Form(std::string name, int _signGrade, int _execGrade):
	_name(name), _isSigned(false), _signGrade(_signGrade),
	_execGrade(_execGrade)
{
	std::cout << "Form Name Constructor called" << std::endl;
	try
	{
		if (this->_execGrade > 150 || this->_signGrade > 150)
			throw Form::GradeTooLowException();
		else if (this->_execGrade < 1 || this->_signGrade < 1)
			throw Form::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Form::Form(Form const &object):
	_name(object._name), _isSigned(object._isSigned),
	_signGrade(object._signGrade), _execGrade(object._execGrade)
{
	std::cout << "Form Copy Constructor Called" << std::endl;
}

Form & Form::operator=(Form const &rhs)
{
	std::cout << "Form Copy Assignment Operator = called" << std::endl;
	if (this != &rhs)
	{
		const_cast<std::string&>(this->_name) = rhs.getName();
		const_cast<int&>(this->_signGrade) = rhs.getSignGrade();
		const_cast<int&>(this->_execGrade) = rhs.getExecGrade();
		this->_isSigned= rhs.getSigned();
	}
	return(*this);
}

std::ostream &operator<<(std::ostream &out, Form const &rhs)
{
	std::cout << "Form Copy Assignment Operator << called" << std::endl;
	out << "Form name: " << rhs.getName() << std::endl;
	out << "Grade to sign: " << rhs.getSignGrade() << std::endl;
	out << "Grade to execute: " << rhs.getExecGrade() << std::endl;
	out << "Signed: " << rhs.getSigned() << std::endl;
	return (out);
}

Form::~Form()
{
	std::cout << "Form default Destructor called" << std::endl;
}

void	Form::beSigned(Bureaucrat const &rhs)
{
	if (rhs.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
}

bool	Form::getSigned() const
{
	return (this->_isSigned);
}

int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

int	Form::getExecGrade() const
{
	return (this->_execGrade);
}

std::string Form::getName() const
{
	return (this->_name);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return("Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}
