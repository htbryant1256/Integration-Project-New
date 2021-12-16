/**
---------------------------------
This class is derived from the class MealForUser. It has inherited
all of the functions from MealForUser. This class will later be updated
to add far more additional content than the default inherited functions.
As of now the description for every meal is changed.

LO2a. Include comments describing the visibility inheritance model
This would be a Derived Class from the Base class "MealForUser"in
the Visibility Inheritence Model.

---------------------------------
*/
//LO1a.At least one class in a header file with non - trivial methods implemented in a cpp file
#include "Dinner.h"
#include <iostream>


	// Getters ----------------------------

	auto Dinner::GetNumberOfCupPasta() -> float {
		return number_of_cup_pasta;
	}

	auto Dinner::GetNumberOfPorkChop() -> float {
		return number_of_pork_chop;
	}
	auto Dinner::GetNumberOfPotato() -> float {
		return number_of_potato;
	}


	// Setters ----------------------------
/**
Dedicate 1/2 of the calories to cups of pasta

Parameters:
	float meal_calories       total calories of meal
 Returns:
	Void
*/
	void Dinner::SetNumberOfCupPasta(float meal_calories) {
		const float x = meal_calories / six;
		const float part_one = x * 3;
		number_of_cup_pasta = part_one / dinner.cup_pasta_calories;

	}
/**
Dedicate 1/3 of the calories to pork chops

Parameters:
	float meal_calories       total calories of meal
 Returns:
	Void
*/
	void Dinner::SetNumberOfPorkChop(float meal_calories) {
		const float x = meal_calories / six;
		const float part_two = x * 2;
		number_of_pork_chop = part_two / dinner.pork_chop_calories;

	}
/**
Dedicate 1/6 of the calories to potatos

Parameters:
	float meal_calories       total calories of meal
 Returns:
	Void
*/
	void Dinner::SetNumberOfPotato(float meal_calories) {
		const float x = meal_calories / six;
		const float part_three = x;
		number_of_potato = part_three / dinner.potato_calories;

	}
// Methods ---------------------------
/**
Display a description about the meal

Parameters:
 Returns:
	Void
*/
	void Dinner::Description() {
		std::cout << "\n\n\tThis is the users dinner.\n\tIt contains Pasta, Pork Chops,\n\tand Potatos.\n";
	}




