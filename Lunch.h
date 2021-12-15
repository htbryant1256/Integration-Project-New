/**
Header file for the Lunch.cpp file.


*/

#ifndef LUNCH_H
#define LUNCH_H

#include "MealForUser.h"
/**
Lunch class, inherits from MealForUser. Calculates number of food types per meal
according to calories required for that meal.

*/
class Lunch : public MealForUser {

private:
	float number_of_cup_pasta;
	float number_of_cup_rice;
	float number_of_cup_steamed_vegtable;

public:
	struct food_data lunch;

	// Getters ----------------------------

	float GetNumberOfChickenTenderloins();

	float GettNumberOfCupSteamedVegtable();

	float GetNumberOfCupsRice();


	// Setters ----------------------------

	void SetNumberOfChickenTenderloin(float meal_calories);

	void SetNumberOfCupSteamedVegtable(float meal_calories);

	void SetNumberOfCupRice(float meal_calories);
	void Description() override;


};



#endif