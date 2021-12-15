/**
Header file for the Dinner.cpp file.


*/
#ifndef DINNER_H
#define DINNER_H
#include "MealForUser.h"
/**
Dinner class, inherits from MealForUser. Calculates number of food types per meal
according to calories required for that meal.

*/
class Dinner : public MealForUser {

private:
	float number_of_cup_pasta;
	float number_of_pork_chop;
	float number_of_potato;


public:

	struct food_data dinner;

	// Getters ----------------------------

	float GetNumberOfCupPasta();
	float GetNumberOfPorkChop();
	float GetNumberOfPotato();

	// Setters ----------------------------

	void SetNumberOfCupPasta(float meal_calories);
	void SetNumberOfPorkChop(float meal_calories);
	void SetNumberOfPotato(float meal_calories);
	// Methods ---------------------------
	void Description() override;

};



#endif
