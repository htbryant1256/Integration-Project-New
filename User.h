#ifndef USER_H
#define USER_H
/**
User class, used to store data based on users height and weight.

*/
class User {

private:

	int height_in_inches;
	int height_in_feet;
	float weight;

public:
	// Getters ---------------------------
	int GetHeightInFeet();
	int GetHeightInInches();
	int GetWeight();

	// Setters ----------------------------
	void SetHeightInFeet(int feet);
	void SetHeightInInches(int inches);
	void SetWeight(float user_weight);

	// Methods ---------------------------

	float CalculateTotalHeightInInches();
	float CalculateBMI();

};

#endif

