#ifndef USER_H
#define USER_H
/**
User class, used to store data based on users height and weight.

*/
class User {

private:

	float height_in_inches = 0;
	float height_in_feet = 0;
	float weight = 0;

public:
	// Getters ---------------------------
	auto GetHeightInFeet() -> float;
	auto GetHeightInInches()-> float;
	auto GetWeight()-> float;

	// Setters ----------------------------
	void SetHeightInFeet(float feet);
	void SetHeightInInches(float inches);
	void SetWeight(float user_weight);

	// Methods ---------------------------

	auto CalculateTotalHeightInInches()-> float;
	auto CalculateBMI()-> float;

};

#endif

