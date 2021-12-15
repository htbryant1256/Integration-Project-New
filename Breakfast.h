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
	float number_of_eggs;
	float number_of_toasts;
	float number_of_sausages;

public:
	struct food_data breakfast;

	// Getters ----------------------------

	float GetNumberOfEggs();

	float GetNumberOfSausages();
	float GetNumberOfToasts();

	// Setters ----------------------------

	void SetNumberOfEggs(float meal_calories);

	void SetNumberOfSausages(float meal_calories);

	void SetNumberOfToasts(float meal_calories);

	// Methods ---------------------------
	void Description() override;

};
#endif