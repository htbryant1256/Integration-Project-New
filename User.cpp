/**
This is the user class, used to store data about the users height and weight.

*/

#include <iostream>
#include "User.h"
// Getters ----------------------------

auto User::GetHeightInFeet() -> float {
	return height_in_feet;
}
auto User::GetHeightInInches()-> float {
	return height_in_inches;
}
auto User::GetWeight()-> float {
	return weight;
}



// Setters ----------------------------
void User::SetHeightInFeet(float feet) {
	height_in_feet = feet;
}
void User::SetHeightInInches(float inches) {
	height_in_inches = inches;
}
void User::SetWeight(float user_weight) {
	weight = user_weight;
}

// Methods ---------------------------
/**
Calculate toal height of user in inches

Parameters:
 Returns:
	float total_height_in_inches
*/
auto User::CalculateTotalHeightInInches()-> float {
	float total_height_in_inches = (height_in_feet * 12) + height_in_inches;
	return total_height_in_inches;
}
/**
Calculate BMI of user

Parameters:
 Returns:	
	float BMI			BMI of user
*/
auto User::CalculateBMI() -> float {
	float total_height_in_inches = (height_in_feet * 12) + height_in_inches;

	float BMI = (weight / total_height_in_inches / total_height_in_inches) * 703;
	return BMI;
}