#ifndef task1
#define task1

#include<iostream>
class student
{
private:
	int a;
	int b;

public:
	student(int a,int b)
	{
		this->a = a;
		this->b = b;
	}

	void display()
	{
		std::cout << a << std::endl
			<< b << std::endl;

	}
};


#endif // !task1
