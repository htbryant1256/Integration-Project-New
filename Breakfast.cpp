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
#include "Breakfast.h"
#include <iostream>


// Getters ----------------------------

auto Breakfast::GetNumberOfEggs()-> float {
	return number_of_eggs;
}

auto Breakfast::GetNumberOfSausages() -> float {
	return number_of_sausages;
}

auto Breakfast::GetNumberOfToasts() ->  float{
	return number_of_toasts;
}


// Setters ----------------------------
/**
Dedicate 1/6 of the calories to eggs

Parameters:
	float meal_calories       total calories of meal
 Returns:
	Void
*/
void Breakfast::SetNumberOfEggs(float meal_calories) {
	const float X = meal_calories / six;
	float part_one = X * 3;
	number_of_eggs = part_one / breakfast.egg_calories;

}
/**
Dedicate 1/6 of the calories to sausages

Parameters:
	float meal_calories       total calories of meal
 Returns:
	Void
*/
void Breakfast::SetNumberOfSausages(float meal_calories) {
	const float X = meal_calories / six;
	const float part_two = X * 2;
	number_of_sausages = part_two / breakfast.sausage_calories;

}
/**
Dedicate 1/6 of the calories to toast

Parameters:
	float meal_calories       total calories of meal
 Returns:
	Void
*/
void Breakfast::SetNumberOfToasts(float meal_calories) {
	const float X = meal_calories / six;
	const float part_three = X;
	number_of_toasts = part_three / breakfast.toast_calories;

}

// Methods ---------------------------
/**
Display a description about the meal

Parameters:
 Returns:
	Void
*/
void Breakfast::Description() {
	std::cout << "\n\n\tThis is the users breakfast.\n\tIt contains Eggs, Sausage, and Toast.\n";
}


