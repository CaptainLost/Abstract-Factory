#pragma once
#include "Products.h"

class BaseFactory
{
public:
	virtual Food* CreateSmallFood() = 0;
	virtual Food* CreateBigFood() = 0;
};

class SnackFactory : public BaseFactory
{
public:
	Food* CreateSmallFood()
	{
		return new Chocolate();
	}

	Food* CreateBigFood()
	{
		return new Cake();
	}
};

class FruitFactory : public BaseFactory
{
public:
	Food* CreateSmallFood()
	{
		return new Apple();
	}

	Food* CreateBigFood()
	{
		return new Watermelon();
	}
};

class FastFoodFactory : public BaseFactory
{
public:
	Food* CreateSmallFood()
	{
		return new Chips();
	}

	Food* CreateBigFood()
	{
		return new Pizza();
	}
};