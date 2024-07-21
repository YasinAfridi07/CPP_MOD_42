#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>


class Span
{
	private:
		unsigned int _max;

		class MyCPP_08Exception : public std::exception
		{
			public:
					const char *what() const throw;
		};

	public:
		Span();
		Span(unsigned int n);

		void addNumber(int num);
		void shortestSpan();
		void longestSpan();
}

#endif
