/**
---------------------------------
LO4. Include a comment in which you compare and contrast the procedural/functional approach and the object-oriented approach
Compare Contrast Prodecural Programing:
    Procedural programing is good for small quick solutions, that opperate
    squentially. While as functional programing should be used for
    larger scale projects. This is because many of the functions and classes
    written can be reused again for other purposes.

LO3. Correctly reason about control flow in a program using dynamic dispatch.
Control Flow and Dynamic Dispatch:
    Dynamic dispatch is when a method is decided at runtime depending on what object
    the code is pointing to. This allows for the more fluidity in the code and overall reuseablity. 
    By using dynamic dispatch to change the control flow of a program can overall be more efficient than
    calling individual methods from objects.
LO5. Explain the relationship between object-oriented inheritance (code-sharing and overriding) and subtyping (the idea of a subtype being usable in a context that expects the supertype).
Relationship Between OOI and Subtyping:
    OOI is when a derived class inherits the public methods of the parent class.
    This aids in resuing code and the overall orginization of the code. By using virtual
    functions and overriding methods, the derived class can have a different result from a 
    method with the same name in the parent class. 



//------------------------------------------------------------------------------
*/
#include <iostream>
#include <iomanip>

#include "MealForUser.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "User.h"
//------------------------------------------------------------------------------
// Function Prototypes

void AskForWeight(User& user);
void AskForHeight(User& user);
void AskForCalorieGoal(float& calories);
void DisplayCal(MealForUser& meal);
void DisplayBMI(User& user);

void AskForFavMeal(Breakfast&, Lunch&, Dinner&);
void DisplayMealPlan(MealForUser, MealForUser, MealForUser, Breakfast, Lunch, Dinner);

//------------------------------------------------------------------------------
//main
auto main() -> int
{
    User user;
    float calories;

//Promt User for weight height and calorie goal
    AskForWeight(user);
    AskForHeight(user);
    AskForCalorieGoal(calories);

//Create Objects
    Breakfast breakfast;
    Lunch lunch;
    Dinner dinner;
    MealForUser meal{ calories / 3 };

//Dynamic Dispatch by utilizing the virtual "descripion()" function
    MealForUser& meal_one = breakfast;
    MealForUser& meal_two = lunch;
    MealForUser& meal_three = dinner;

// While loop to control flow of program

    bool running = true;
    while (running) 
    {
        int choice;
        std::cout << "Display Average Calories Per Meal [1] Display BMI[2] Create Meal Plan[3]\n";
       
        std::cin >> choice;
        switch (choice) 
        {
        case 1:
            DisplayCal(meal);
            std::cout << "\n";
            break;

        case 2:
            DisplayBMI(user);
            std::cout << "\n";
            break;

        case 3:

// Ask and assign Users favorite meal 
            AskForFavMeal(breakfast, lunch, dinner);

//------------------------------------------------------------------------------
// set calories with meal preference to meal objects
            breakfast.SetCaloriesPerMeal(calories);
            lunch.SetCaloriesPerMeal(calories);
            dinner.SetCaloriesPerMeal(calories);

// set calories for each breakfast item
            breakfast.SetNumberOfEggs(breakfast.GetCaloriesPerMeal());
            breakfast.SetNumberOfSausages(breakfast.GetCaloriesPerMeal());
            breakfast.SetNumberOfToasts(breakfast.GetCaloriesPerMeal());

// set calories for each lunch item
            lunch.SetNumberOfChickenTenderloin(lunch.GetCaloriesPerMeal());
            lunch.SetNumberOfCupRice(lunch.GetCaloriesPerMeal());
            lunch.SetNumberOfCupSteamedVegtable(lunch.GetCaloriesPerMeal());

// set calories for each dinner item
            dinner.SetNumberOfCupPasta(dinner.GetCaloriesPerMeal());
            dinner.SetNumberOfPorkChop(dinner.GetCaloriesPerMeal());
            dinner.SetNumberOfPotato(dinner.GetCaloriesPerMeal());


// ------------------------------------ DISPLAY -------------------------------------------

            DisplayMealPlan(meal_one, meal_two, meal_three, breakfast, lunch, dinner);

            running = false;
            break;

        default:
            std::cout << "Invalid Entry. \n";
        }


    }

} // end main

//Functions

/**
Ask user to enter weight in pounds and store the weight in user class
 Parameters:
    User user           user object to store data
 Returns:
    Void
*/
void AskForWeight(User& user) 
{
    float weight;
    std::cout << "Enter weight in pounds: \n";
    std::cin >> weight;
    user.SetWeight(weight);
}
/**
Ask user to enter height in feet then inches, and store the height in user class
 Parameters:
    User user               user object to store data
 Returns:
    Void
*/
void AskForHeight(User& user) 
{
    float feet, inches;
    std::cout << "Enter height in feet then inches on the same line: \n";
    std::cin >> feet >> inches;
    user.SetHeightInFeet(feet);
    user.SetHeightInInches(inches);
}
/**
Ask user to enter their daily calorie goal, and store the calories
 Parameters:
    float calories          float to store total user calories
 Returns:
    Void
*/
void AskForCalorieGoal(float& calories) 
{
    std::cout << "Enter daily calorie intake goal: \n";
    std::cin >> calories;


}
/**
Display Calories per meal and BMI of user
Parameters:
    MealForUser meal        meal object to store meal information
 Returns:
    Void
*/
void DisplayCal(MealForUser& meal) 
{
    std::cout << "-----------------------------------\n";
    std::cout << "Average Calories Per Meal:   " << meal.GetCaloriesPerMeal() << "\n";
    std::cout << "-----------------------------------\n";

}
/**
Display BMI of user
Parameters:
    User user               user object to store data
 Returns:
    Void
*/
void DisplayBMI(User& user)
{
    std::cout << "-----------------------------------\n";
    std::cout << "BMI of User:                 " << user.CalculateBMI() << "\n";
    std::cout << "-----------------------------------\n";

}
/**
Prompt user for favorite meal and skew calories per meal in their favor

Parameters:
    Breakfast breakfast         oject to store meal data for breakfast
    Lunch lunch                 object to store meal data for lunch
    Dinner dinner               object to store meal data for dinner
 Returns:
    Void
*/
void AskForFavMeal(Breakfast& breakfast, Lunch& lunch, Dinner& dinner) 
{
    int meal_preference;
    std::cout << "Do you prefer Breakfast[1], Lunch[2], or Dinner[3]? \n";
    std::cin >> meal_preference;
    switch (meal_preference) 
    {
    case 1:
        breakfast.SetFavoriteMeal(true);
        break;
    case 2:
        lunch.SetFavoriteMeal(true);
        break;
    case 3:
        dinner.SetFavoriteMeal(true);
        break;
    default:
        std::cout << "Invalid Entry. \n";
    }
}
/**
Prompt user for favorite meal and skew calories per meal in their favor

Parameters:
    Breakfast breakfast         oject to store meal data for breakfast
    Lunch lunch                 object to store meal data for lunch
    Dinner dinner               object to store meal data for dinner
    MealForUser meal_one        objec used to diplay virtual function "description()"
    MealForUser meal_two        objec used to diplay virtual function "description()"
    MealForUser meal_two        objec used to diplay virtual function "description()"
 Returns:
    Void
*/
void DisplayMealPlan(MealForUser meal_one, MealForUser meal_two, MealForUser meal_three, Breakfast breakfast, Lunch lunch, Dinner dinner ) 
{
    std::cout << std::setprecision(4);

    std::cout << "------------------------------------------------------\n";
    std::cout << "Breakfast:\n\tCalories: " << breakfast.GetCaloriesPerMeal() << " \n\tDescription: ";
    meal_one.Description();

    std::cout << std::setprecision(2);

    std::cout << "\n\tNumber of Eggs:                     " << breakfast.GetNumberOfEggs() << "\n";
    std::cout << "\n\tNumber of Sausages:                 " << breakfast.GetNumberOfSausages() << "\n";
    std::cout << "\n\tNumber of Toast Slices:             " << breakfast.GetNumberOfToasts() << "\n";

    std::cout << std::setprecision(4);
    std::cout << "------------------------------------------------------\n";

    std::cout << "Lunch:\n\tCalories: " << lunch.GetCaloriesPerMeal() << " \n\tDescription: ";
    meal_two.Description();

    std::cout << std::setprecision(2);

    std::cout << "\n\tNumber of Chicken Tenderloins:      " << lunch.GetNumberOfChickenTenderloins() << "\n";
    std::cout << "\n\tNumber of Cups of Rice:             " << lunch.GetNumberOfCupsRice() << "\n";
    std::cout << "\n\tNumber of Cup of Steamed Vegtables: " << lunch.GettNumberOfCupSteamedVegtable() << "\n";

    std::cout << std::setprecision(4);
    std::cout << "------------------------------------------------------\n";
    std::cout << "Dinner:\n\tCalories: " << dinner.GetCaloriesPerMeal() << " \n\tDescription: ";
    meal_three.Description();

    std::cout << std::setprecision(2);

    std::cout << "\n\tNumber of Cups of Pasta:            " << dinner.GetNumberOfCupPasta() << "\n";
    std::cout << "\n\tNumber of Pork Chops:               " << dinner.GetNumberOfPorkChop() << "\n";
    std::cout << "\n\tNumber of Potatos:                  " << dinner.GetNumberOfPotato() << "\n";

    std::cout << "------------------------------------------------------\n";


}