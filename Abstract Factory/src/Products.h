#pragma once
#include <string>

class Food
{
public:
	virtual std::string GetName() = 0;
};

// Snacks
class Chocolate : public Food
{
public:
	std::string GetName();
};

class Cake : public Food
{
public:
	std::string GetName();
};

// Fruits
class Apple : public Food
{
public:
	std::string GetName();
};

class Watermelon : public Food
{
public:
	std::string GetName();
};

// Fast food
class Chips : public Food
{
public:
	std::string GetName();
};

class Pizza : public Food
{
public:
	std::string GetName();
};