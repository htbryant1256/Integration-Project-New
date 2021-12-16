#ifndef BREAKFAST_H
#define BREAKFAST_H

/**
Header file for the Breakfast.cpp file.
*/
#include "MealForUser.h"

/**
Breakfast class, inherits from MealForUser. Calculates number of food types per meal
according to calories required for that meal.

*/
class Breakfast : public MealForUser {

private:
	const int six = 6;

	float number_of_eggs = 0;
	float number_of_toasts = 0;
	float number_of_sausages = 0;

public:
	const struct food_data breakfast;

	// Getters ----------------------------

	auto GetNumberOfEggs() ->  float;

	auto GetNumberOfSausages() -> float;
	auto GetNumberOfToasts() ->  float;

	// Setters ----------------------------

	void SetNumberOfEggs(float meal_calories);

	void SetNumberOfSausages(float meal_calories);

	void SetNumberOfToasts(float meal_calories);

	// Methods ---------------------------
	void Description() override;

};
#endif