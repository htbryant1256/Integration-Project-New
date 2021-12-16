/**
---------------------------------
This class is derived from the class MealForUser. It has inherited
all of the functions from MealForUser. This class will later be updated
to add far more additional content than the default inherited functions.
As of now the description for every meal is changed.

This would be a Derived Class from the Base class "MealForUser"in
the Visibility Inheritence Model.
---------------------------------
*/
#include "Lunch.h"
#include <iostream>



// Getters ----------------------------

auto Lunch::GetNumberOfChickenTenderloins() -> float {
	return number_of_cup_pasta;
}

auto Lunch::GettNumberOfCupSteamedVegtable()-> float {
	return number_of_cup_steamed_vegtable;
}

auto Lunch::GetNumberOfCupsRice()-> float {
	return number_of_cup_rice;
}


// Setters ----------------------------


/**
Dedicate 1/2 of the calories to chicken tenderloin

Parameters:
	float meal_calories       total calories of meal
 Returns:
	Void
*/
void Lunch::SetNumberOfChickenTenderloin(float meal_calories) {
	const float x = meal_calories / six;
	const float part_one = x * 3;
	number_of_cup_pasta = part_one / lunch.chicken_tenderloin_calories;

}
/**
Dedicate 1/3 of the calories to steamed vegtable

Parameters:
	float meal_calories       total calories of meal
 Returns:
	Void
*/
void Lunch::SetNumberOfCupSteamedVegtable(float meal_calories) {
	const float x = meal_calories / six;
	const float part_two = x * 2;
	number_of_cup_steamed_vegtable = part_two / lunch.cup_steamed_vegtable_calories;

}
/**
Dedicate 1/6 of the calories to rice

Parameters:
	float meal_calories       total calories of meal
 Returns:
	Void
*/
void Lunch::SetNumberOfCupRice(float meal_calories) {
	const float x = meal_calories / six;
	const float part_three = x;
	number_of_cup_rice = part_three / lunch.cup_rice_calories;

}
/**
Display a description about the meal

Parameters:
 Returns:
	Void
*/
void Lunch::Description() {
	std::cout << "\n\n\tThis is the users lunch.\n\tIt contains Chicken Tenderloin,\n\tSteamed Vegtables, And rice \n";
}



