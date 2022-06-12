#pragma once
#include <string>

class BaseFood
{
public:
	virtual std::string GetName() = 0;
};

// Snacks
class Chocolate : public BaseFood
{
public:
	std::string GetName();
};

class Cake : public BaseFood
{
public:
	std::string GetName();
};

// Fruits
class Apple : public BaseFood
{
public:
	std::string GetName();
};

class Watermelon : public BaseFood
{
public:
	std::string GetName();
};

// Fast food
class Chips : public BaseFood
{
public:
	std::string GetName();
};

class Pizza : public BaseFood
{
public:
	std::string GetName();
};