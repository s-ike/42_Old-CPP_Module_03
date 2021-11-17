#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

#define PRG_NAME "a.out"

#define COLOR_RESET	"\033[m"
#define COLOR_RED	"\033[31m"

void	print_header(const std::string &str)
{
	std::cout << "\n[ " << str << " ]" << std::endl;
}

void	leaks()
{
	print_header("leaks Report");
		if (system("leaks -q " PRG_NAME))
			std::cout << COLOR_RED << "LEAK!" << COLOR_RESET << std::endl;
}

int	main()
{
	{
		print_header("subject test");
		IMateriaSource*	src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter*	me = new Character("me");

		AMateria*	tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter*	bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
		leaks();
	}
	{
		print_header("concrete Materia constructor test");
		AMateria*	materia = new Ice();
		std::cout << materia->getType() << std::endl;
		delete materia;
		leaks();
	}
	{
		print_header("concrete Materia copy constructor test");
		Ice	ice1;
		Ice	ice2(ice1);
		std::cout << "ice1: " << std::endl;
		std::cout << ice1.getType() << std::endl;
		std::cout << "ice2: " << std::endl;
		std::cout << ice2.getType() << std::endl;
		leaks();
	}
	{
		print_header("concrete Materia assignment test");
		Ice	ice1;
		Ice	ice2;
		std::cout << "ice1: " << std::endl;
		std::cout << ice1.getType() << std::endl;
		ice2 = ice1;
		std::cout << "ice2 = ice1; ice2: " << std::endl;
		std::cout << ice2.getType() << std::endl;
		leaks();
	}
	{
		print_header("IMateriaSource construcor test");
		IMateriaSource*	src = new MateriaSource();
		AMateria*		tmp1;
		AMateria*		tmp2;
		AMateria*		tmp3;
		AMateria*		tmp4;
		AMateria*		tmp5;

		print_header("MateriaSource features test 1");
		std::cout << "createMateria(\"ice\"):" << std::endl;
		tmp1 = src->createMateria("ice");
		std::cout << "learnMateria(new Ice()):" << std::endl;
		src->learnMateria(new Ice());
		std::cout << "createMateria(\"ice\"):" << std::endl;
		tmp1 = src->createMateria("ice");

		print_header("MateriaSource features test 2");
		src->learnMateria(new Cure());
		std::cout << "createMateria(\"cure\"):" << std::endl;
		tmp2 = src->createMateria("cure");

		print_header("MateriaSource features test 3");
		tmp3 = src->createMateria("ice");
		tmp4 = src->createMateria("ice");
		tmp5 = src->createMateria("ice");

		print_header("MateriaSource features test 4");
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());

		print_header("MateriaSource destructor test");
		delete src;

		print_header("Character construcor test");
		ICharacter*	character = new Character("Cloud");
		ICharacter*	enemy = new Character("Enemy");

		print_header("Character features test");
		std::cout << "getName(): " << std::endl;
		std::cout << character->getName() << std::endl;
		std::cout << "unequip(0): " << std::endl;
		character->unequip(0);
		std::cout << "use(0, *enemy): " << std::endl;
		character->use(0, *enemy);
		std::cout << "equip(tmp1): " << std::endl;
		character->equip(tmp1);
		std::cout << "use(0, *enemy): " << std::endl;
		character->use(0, *enemy);
		std::cout << "equip(tmp2): " << std::endl;
		character->equip(tmp2);
		std::cout << "use(1, *enemy): " << std::endl;
		character->use(1, *enemy);
		std::cout << "unequip(0): " << std::endl;
		character->unequip(0);
		std::cout << "use(0, *enemy): " << std::endl;
		character->use(0, *enemy);

		print_header("Character features test 2");
		character->equip(tmp1);
		character->equip(tmp3);
		character->equip(tmp4);
		character->equip(tmp5);

		print_header("Character destructor test");
		delete character;
		delete enemy;

		print_header("unused materia destructor test");
		delete tmp5;
		leaks();
	}
	{
		print_header("Character copy construcor test");
		Character	c1("One");
		AMateria*	ice = new Ice();
		c1.equip(ice);

		ICharacter*	c2 = new Character(c1);
		std::cout << "c1.getName(): " << std::endl;
		std::cout << c1.getName() << std::endl;
		std::cout << "c2.getName(): " << std::endl;
		std::cout << c2->getName() << std::endl;
		std::cout << "c2.use(0, c1): " << std::endl;
		c2->use(0, c1);
		delete c2;
		leaks();
	}
	{
		print_header("Character assignment test");
		Character	c1("One");
		AMateria*	ice = new Ice();
		AMateria*	cure = new Cure();
		c1.equip(ice);

		Character	c2("One");
		c2.equip(cure);

		c2 = c1;

		std::cout << "c1.getName(): " << std::endl;
		std::cout << c1.getName() << std::endl;
		std::cout << "c2.getName(): " << std::endl;
		std::cout << c2.getName() << std::endl;
		std::cout << "c2.use(0, c1): " << std::endl;
		c2.use(0, c1);
		leaks();
	}
	leaks();
}
