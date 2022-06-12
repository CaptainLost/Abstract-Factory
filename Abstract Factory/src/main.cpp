#include <iostream>
#include "Factory.h"

int main(int argc, char* argv[])
{
	BaseFactory* snackFactory = new SnackFactory();
	BaseFactory* fruitFactory = new FruitFactory();
	BaseFactory* fastFoodFactory = new FastFoodFactory();

	BaseFactory* factoryArray[3] = { snackFactory, fruitFactory, fastFoodFactory };
	BaseFood* foodArray[6];

	for (int i = 0; i < 6; i = i + 2)
	{
		BaseFactory* factory = factoryArray[(i + 1) / 2];

		foodArray[i] = factory->CreateSmallFood();
		foodArray[i + 1] = factory->CreateBigFood();
	}

	for (int i = 0; i < 6; i++)
	{
		BaseFood* food = foodArray[i];

		std::cout << "I am " << food->GetName() << '\n';

		delete food;
	}

	delete snackFactory;
	delete fruitFactory;
	delete fastFoodFactory;

	return 0;
}