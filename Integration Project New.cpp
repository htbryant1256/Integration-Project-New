/**
---------------------------------
Procedural programing is good for small quick solutions, that opperate
squentially. While as functional programing should be used for
larger scale projects. This is because many of the functions and classes
written can be reused again for other purposes.


---------------------------------
*/
#include <iostream>
#include "MealForUser.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"

int main()
{
    
    float weight, height, calories;
    int meal_preference;

    std::cout << "Enter weight in pounds: \n";
    std::cin >> weight;
    std::cout << "Enter height in inches: \n";
    std::cin >> height;
    std::cout << "Enter daily calorie intake: \n";
    std::cin >> calories;

    MealForUser meal{ calories / 3 };
    meal.set_BMI(height, weight);

    std::cout << "Average Calories Per Meal: " << meal.get_calories_per_meal() << "\n";
    std::cout << "BMI of User: " << meal.get_BMI() << "\n";

    std::cout << "Do you prefer Breakfast[1], Lunch[2], or Dinner[3]? \n";
    std::cin >> meal_preference;

    Breakfast breakfast;
    Lunch lunch;
    Dinner dinner;

    switch (meal_preference) {
    case 1:
        breakfast.set_favorite_meal(true);
        break;
    case 2:
        lunch.set_favorite_meal(true);
        break;
    case 3:
        dinner.set_favorite_meal(true);
        break;
    default:
        std::cout << "Invalid Entry. \n";
    }

    breakfast.set_calories_per_meal(calories);
    lunch.set_calories_per_meal(calories);
    dinner.set_calories_per_meal(calories);

    std::cout << "------------------------------------------------------------------------ \n";
    std::cout << "Breakfast:\n\tCalories: " << breakfast.get_calories_per_meal() << " \n\tDescription: ";
    breakfast.description();
    std::cout << "Lunch:\n\tCalories: " << lunch.get_calories_per_meal() << " \n\tDescription: ";
    lunch.description();
    std::cout << "Dinner:\n\tCalories: " << dinner.get_calories_per_meal() << " \n\tDescription: ";
    dinner.description();
    std::cout << "------------------------------------------------------------------------ \n";




}

