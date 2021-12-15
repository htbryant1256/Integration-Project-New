/**
This is the user class, used to store data about the users height and weight.

*/

#include <iostream>
#include "User.h"
// Getters ----------------------------

int User::GetHeightInFeet() {
	return height_in_feet;
}
int User::GetHeightInInches() {
	return height_in_inches;
}
int User::GetWeight() {
	return weight;
}



// Setters ----------------------------
void User::SetHeightInFeet(int feet) {
	height_in_feet = feet;
}
void User::SetHeightInInches(int inches) {
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
float User::CalculateTotalHeightInInches() {
	float total_height_in_inches = (height_in_feet * 12) + height_in_inches;
	return total_height_in_inches;
}
/**
Calculate BMI of user

Parameters:
 Returns:	
	float BMI			BMI of user
*/
float User::CalculateBMI() {
	float total_height_in_inches = (height_in_feet * 12) + height_in_inches;

	float BMI = (weight / total_height_in_inches / total_height_in_inches) * 703;
	return BMI;
}