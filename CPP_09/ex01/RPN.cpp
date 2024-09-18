#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(std::string av)
{
	this->_devideZero = true;
	if (av.size() > 3)
	{
		this->fillStack(av);
		if (_devideZero == false)
		{
			std::cout << "Dividing by zero" << std::endl;
			return ;
		}
		if (_rpn_num.size() != 1)
		{
			std::cout << "Invalid Exprssion" << std::endl;
		}
		else
		{
			std::cout << this->_rpn_num.top() << std::endl;
		}
	}
}

RPN::RPN(const RPN &object)
{
	*this = object;
}

RPN & RPN::operator=(const RPN &rhs)
{
	if(this != &rhs)
	{
		this->_rpn_stack = rhs._rpn_stack;
		this->_rpn_num = rhs._rpn_num;
	}
	return (*this);
}

void	RPN::calculate()
{
	int	operand1, operand2;
	char operation;

	operand2 = this->_rpn_num.top();
	this->_rpn_num.pop();
	operand1 = this->_rpn_num.top();
	this->_rpn_num.pop();
	operation = this->_rpn_stack.top();
	this->_rpn_stack.pop();

	if (operation == '/' && operand2 == 0)
		this->_devideZero = false;
	if (operation == '*')
		this->_rpn_num.push(operand1 * operand2);
	else if (operation == '/' && operand2 != 0)
		this->_rpn_num.push(operand1 / operand2);
	else if (operation == '-')
		this->_rpn_num.push(operand1 - operand2);
	else if (operation == '+')
		this->_rpn_num.push(operand1 + operand2);
}

void	RPN::fillStack(std::string index)
{
	int	index_size;

	index_size = index.size();
	for (int i = 0; i < index_size; i++)
	{
		if (index[i] != ' ')
		{
			if (isdigit(index[i]) != 0)
				this->_rpn_num.push(index[i] - '0');
			else
				this->_rpn_stack.push(index[i]);
			if (this->_rpn_stack.size() == 1 && this->_rpn_num.size() >= 2)
				calculate();
		}
	}
}
