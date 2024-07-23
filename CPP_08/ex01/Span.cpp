
#include "Span.hpp"

Span::Span()
{
}

Span::~Span()
{
}

Span::Span(unsigned int n): _max(n)
{
}

Span::Span(Span const &object)
{
	*this = object;
}

Span & Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_max = rhs._max;
		this->_vec = rhs._vec;
	}
	return (*this);
}

const char *Span::EmptyException::what() const throw()
{
	return ("Vector is Empty");
}


const char *Span::FullException::what() const throw()
{
	return ("Vector is Full");
}

void	Span::addNumber(int num)
{
	if (this->_vec.size() == this->_max)
		throw Span::FullException();
	if (num < 0)
		throw std::runtime_error("Error Negative Number");
	this->_vec.push_back(num);
}

int Span::shortestSpan()
{
	int Shortspan;
	unsigned int i = 1;

	if(this->_vec.size() < 2)
		throw Span::EmptyException();
	std::sort(this->_vec.begin(), this->_vec.end());
	Shortspan = this->_vec[1] - this->_vec[0];
	while (i < this->_vec.size() - 1)
	{
		if(this->_vec[i + 1] - this->_vec[i] < Shortspan)
		{
			Shortspan = this->_vec[i + 1] - this->_vec[i];
		}
		i++;
	}
	return (Shortspan);
}


int Span::longestSpan()
{
	int longspan = 0;

	if(this->_vec.size() < 2)
		throw Span::EmptyException();
	std::sort(this->_vec.begin(), this->_vec.end());
	longspan = this->_vec[this->_vec.size() - 1] - this->_vec[0];
	return(longspan);
}

void Span::addNumbers(int size)
{
	int i = 0;
	while(i < size)
	{
		this->_vec.push_back(rand() % 100);
		i++;
	}
}
