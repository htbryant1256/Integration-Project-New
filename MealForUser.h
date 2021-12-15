#ifndef MEAL_FOR_USER_H
#define MEAL_FOR_USER_H
/**
MealForUser class, parent class to Lunch, Dinner, and Breakfast classes. Stores food
calorie data and various methodes based on calories per meal and favorite meal.

*/
class MealForUser {
private:
	float calories_per_meal{};
	bool favorite_meal = false;

public:
	struct food_data {
		// Breakfast Food
		int egg_calories = 80;
		int sausage_calories = 60;
		int toast_calories = 100;

		// Lunch Food
		int chicken_tenderloin_calories = 110; 
		int cup_rice_calories = 200; 
		int cup_steamed_vegtable_calories = 150;

		// Dinner Food
		int cup_pasta_calories = 221;
		int pork_chop_calories = 250;
		int potato_calories = 130;
	};


// Constructors ----------------------------

	// Default constructor
	MealForUser();

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

