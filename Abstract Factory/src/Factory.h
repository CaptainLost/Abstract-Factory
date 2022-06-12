#pragma once
#include "Products.h"

class BaseFactory
{
public:
	virtual BaseFood* CreateSmallFood() = 0;
	virtual BaseFood* CreateBigFood() = 0;
};

class SnackFactory : public BaseFactory
{
public:
	BaseFood* CreateSmallFood()
	{
		return new Chocolate();
	}

	BaseFood* CreateBigFood()
	{
		return new Cake();
	}
};

class FruitFactory : public BaseFactory
{
public:
	BaseFood* CreateSmallFood()
	{
		return new Apple();
	}

	BaseFood* CreateBigFood()
	{
		return new Watermelon();
	}
};

class FastFoodFactory : public BaseFactory
{
public:
	BaseFood* CreateSmallFood()
	{
		return new Chips();
	}

	BaseFood* CreateBigFood()
	{
		return new Pizza();
	}
};