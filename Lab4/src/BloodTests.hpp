/*
 * BloodTests.hpp
 *
 *  Created on: Nov 19, 2013
 *      Author: n36moham
 */

#ifndef BLOODTESTS_HPP_
#define BLOODTESTS_HPP_

#include <iostream>
#include <string>

using namespace std;

class BloodTests{	// Base Class

protected:

	// result ranges for male and female
	int rangemale;
	int rangefemale;

	// units can be: Cells/mcL (cells per microliter), gm/dL (grams per deciliter), femtoliter, or mg/dL (milligrams per deciliter)
	int unit;

public:

	BloodTests(const int myrangemale, const int myrangefemale, const int myunit);	// Constructor

};

class BloodCount{	// Derived Class 1

protected:

	// variables for each blood count test
	int rbcnumber;
	int wbcnumber;
	int pnumber;
	int hemonumber;
	int hemanumber;
	int volumenumber;

public:

	BloodCount(const int myrangemale, const int myrangefemale, const int myunit);
	void RedBloodCell();
	void WhiteBloodCell();
	void Platelets();
	void Hemoglobin();
	void Hematocrit();
	void MeanCorpuscularVolume();

};

class BloodGlucose{	// Derived Class 2

protected:

	//

public:

	BloodGlucose(const int myrangemale, const int myrangefemale, const int myunit);

};

class Lipoprotein{	// Derived Class 3

protected:

	//

public:

	Lipoprotein(const int myrangemale, const int myrangefemale, const int myunit);

};

#endif /* BLOODTESTS_HPP_ */
