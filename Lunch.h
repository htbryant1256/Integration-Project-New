/**
Header file for the Lunch.cpp file.


*/

#ifndef LUNCH_H
#define LUNCH_H

#include "MealForUser.h"
/**
Lunch class, inherits from MealForUser. Calculates number of food types per meal
according to calories required for that meal.

LO2. Use subclassing to design simple class hierarchies that allow code to be reused for distinct subclasses.
	Lunch, Breakfast, and Dinner inherit from MealForUser

*/

class Lunch : public MealForUser {

// LO6. Use object-oriented encapsulation mechanisms such as interfaces and private members.

private:
	const int six = 6;

	float number_of_cup_pasta = 0;
	float number_of_cup_rice = 0;
	float number_of_cup_steamed_vegtable = 0;

public:
	const struct food_data lunch;

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