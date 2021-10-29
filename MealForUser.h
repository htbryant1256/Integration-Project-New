/**
---------------------------------
Base template class all other classes are formed from.

This would be the Base Class in the Visibility Inheritence Model.
---------------------------------
*/
#pragma once

class MealForUser {

private:
	float calories_per_meal {}, BMI {};
	bool favorite_meal = false;

public:
	// Constructors ----------------------------

	// Default constructor
	MealForUser() {
		calories_per_meal = 700;
		BMI = 25;
	}
	// Overloaded constructor
	MealForUser(float input_calories) {
		calories_per_meal = input_calories;
	}

	// Getters ----------------------------


	float get_calories_per_meal() {
		return calories_per_meal;
	}
	float get_BMI() {
		return BMI;
	}
	bool get_favorite_meal() {
		return favorite_meal;
	}


	// Setters ----------------------------


	void set_BMI(float height, float weight) {
		BMI = (weight / height / height) * 703;
	}
	void set_calories_per_meal(float calories_per_day) {
		int preference_modifier = 12;

		if(!favorite_meal){
			calories_per_meal = (calories_per_day / 3) - (calories_per_day / preference_modifier / 2);
		}
		else {
			calories_per_meal = (calories_per_day / 3) + (calories_per_day / preference_modifier);

		}
	}
	void set_favorite_meal(bool choice) {
		favorite_meal = choice;

	}
	// Methods ---------------------------
	
	
	
	void description() {

		std::cout << "Default Meal for User. \n";

	}


};