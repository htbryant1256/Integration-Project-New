
/**
---------------------------------
Base template class all other classes are formed from.

This would be the Base Class in the Visibility Inheritence Model.
---------------------------------
*/

#include <iostream>
#include "MealForUser.h"



// Constructors ----------------------------

// Default constructor with initialization list
// initialized calories_per_meal as 700 for a default average meal
//LO1c. Utilize an initialization list
MealForUser::MealForUser() : calories_per_meal{ 700 } {}

// Overloaded constructor with initialization list
//initializes calories_per_meal with what ever is inputed in main.
MealForUser::MealForUser(float input_calories) : calories_per_meal{ input_calories }{}

// Getters ----------------------------


auto MealForUser::GetCaloriesPerMeal() -> float {
	return calories_per_meal;
}
	
auto MealForUser::GetFavoriteMeal() ->bool {
	return favorite_meal;
}


// Setters ----------------------------


/**
Set Calories per meal depending on the users favorite meal of the day

Parameters:
	float calories_per_day		calorie goal of the user
 Returns:
	Void
*/
void MealForUser::SetCaloriesPerMeal(float calories_per_day) {
	const float preference_modifier = 12;

	if (!favorite_meal) {
		calories_per_meal = (calories_per_day / 3) - (calories_per_day / preference_modifier / 2);
		}
	else {
		calories_per_meal = (calories_per_day / 3) + (calories_per_day / preference_modifier);

	}
}


void MealForUser::SetFavoriteMeal(bool choice) {
	favorite_meal = choice;

}
// Methods ---------------------------


/**
Display a description about the meal

Parameters:
 Returns:
	Void
*/
void MealForUser::Description() {

	std::cout << "Default Meal for User. \n";

}
