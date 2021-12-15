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
#include "Breakfast.h"
#include <iostream>

struct Breakfast::food_data breakfast;

// Getters ----------------------------

float Breakfast::GetNumberOfEggs() {
	return number_of_eggs;
}

float Breakfast::GetNumberOfSausages() {
	return number_of_sausages;
}

float Breakfast::GetNumberOfToasts() {
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
	float x = meal_calories / 6;
	float part_one = x * 3;
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
	float x = meal_calories / 6;
	float part_two = x * 2;
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
	float x = meal_calories / 6;
	float part_three = x;
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


