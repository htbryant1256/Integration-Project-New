#ifndef MEAL_FOR_USER_H
#define MEAL_FOR_USER_H
/**
MealForUser class, parent class to Lunch, Dinner, and Breakfast classes. Stores food
calorie data and various methodes based on calories per meal and favorite meal.

*/
//LO1.Designand implement a class.

class MealForUser {
private:
	const int six = 6;

	float calories_per_meal{};
	bool favorite_meal = false;

public:
//LO7. Define and use iterators and other operations on aggregates, including operations that take functions as arguments. 
	struct food_data {
		// Breakfast Food
		float egg_calories = 80;
		float sausage_calories = 60;
		float toast_calories = 100;

		// Lunch Food
		float chicken_tenderloin_calories = 110;
		float cup_rice_calories = 200;
		float cup_steamed_vegtable_calories = 150;

		// Dinner Food
		float cup_pasta_calories = 221;
		float pork_chop_calories = 250;
		float potato_calories = 130;
	};


// Constructors ----------------------------

// Default constructor
	MealForUser();
//LO1b.Overload a constructor
	// Overloaded constructor
	MealForUser(float input_calories);

// Getters ----------------------------

	float GetCaloriesPerMeal();
	bool GetFavoriteMeal();

// Setters ----------------------------

	void SetCaloriesPerMeal(float calories_per_day);
	void SetFavoriteMeal(bool choice);

// Methods ---------------------------



	virtual void Description();


};

#endif

