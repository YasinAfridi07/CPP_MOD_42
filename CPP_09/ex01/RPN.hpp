
#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
	private:
		std::string _rpn;
		std::stack<char> _rpn_stack;
		std::stack<int>	_rpn_num;
		bool _devideZero;

		void fillStack(std::string index);
		void calculate();

	public:
		RPN();
		RPN(std::string av);
		RPN(const RPN &object);
		RPN &operator=(const RPN &rhs);
		~RPN();
};
// hi

#endif
