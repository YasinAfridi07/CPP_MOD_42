#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int _max;
		std::vector<int>	_vec;

		class EmptyException : public std::exception
		{
			public:
					const char *what() const throw();
		};
		class FullException : public std::exception
		{
			public:
					const char *what() const throw();
		};

	public:
		Span();
		~Span();
		Span(unsigned int n);
		Span(Span const &object);
		Span & operator=(Span const &rhs);

		void addNumber(int num);
		int shortestSpan();
		int longestSpan();
		void addNumbers(int size);
};

#endif
