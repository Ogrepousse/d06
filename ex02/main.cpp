/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 18:43:40 by esusseli          #+#    #+#             */
/*   Updated: 2015/01/13 18:59:26 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

class	Base
{
	public:
		virtual ~Base(){};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};


Base * generate()
{
	Base *b;

	int r = random() % 3;
	if (r == 0)
	{
		b = reinterpret_cast<Base *>(new A);
		std::cout << "gen A" << std::endl;
	}
	else if (r == 1)
	{
		b = reinterpret_cast<Base *>(new B);
		std::cout << "gen B" << std::endl;
	}
	else if (r == 2)
	{
		b = reinterpret_cast<Base *>(new C);
		std::cout << "gen C" << std::endl;
	}
	return (b);
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p))
	{
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B *>(p))
	{
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C *>(p))
	{
		std::cout << "C" << std::endl;
	}
}

void	identify_from_reference(Base & p)
{
	if (dynamic_cast<A *>(&p))
	{
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B *>(&p))
	{
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C *>(&p))
	{
		std::cout << "C" << std::endl;
	}
}

int		main()
{
	srandom(time(NULL));
	Base *b;

	for (int i = 0;i<3;i++)
	{
		b = generate();
		identify_from_pointer(b);
		identify_from_reference(*b);
		delete b;
	}
	return (0);
}
