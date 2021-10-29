/**
---------------------------------
This class is derived from the class MealForUser. It has inherited
all of the functions from MealForUser. This class will later be updated
to add far more additional content than the default inherited functions.
As of now the description for every meal is changed.

This would be a Derived Class from the Base class "MealForUser"in
the Visibility Inheritence Model.
---------------------------------
*/
#include "MealForUser.h"

class Breakfast : public MealForUser {

private:
	


public:

	// Getters ----------------------------
	



	// Setters ----------------------------



	// Methods ---------------------------
	void description() {
		std::cout << "This is the users breakfast. \n";
	}
	


};