

#include "MutantStack.hpp"

int main()
	{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() <<std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it <<std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << "---------------------------------------------------" << std::endl;

		std::vector<int> vector;
		vector.push_back(5);
		vector.push_back(17);
		std::cout << vector.front() << std::endl;
		std::cout << vector.size() << std::endl;
		vector.push_back(3);
		vector.push_back(5);
		vector.push_back(737);
	//[...]
	vector.push_back(0);
	std::vector<int>::iterator it2 = vector.begin();
	std::vector<int>::iterator ite2 = vector.end();
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::vector<int> s1(vector);
}
