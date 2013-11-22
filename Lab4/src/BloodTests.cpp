/*
 * BloodTests.cpp
 *
 *  Created on: Nov 19, 2013
 *      Author: n36moham
 */
#include <iostream>
#include "BloodTests.hpp"
#include <string>
#include <time.h>
#include <cstdlib>

using namespace std;

BloodTests::BloodTests(){

	rangemale = 0;
	rangefemale = 0;
	unit = 0;

	gender = 0;

	cout << "Enter the patient's gender. Press 1 for Female. Press 2 for Male." << endl;
	cin >> gender;

}

//BloodCount::BloodCount(){ }

void BloodCount::RedBloodCell(){


	srand(time(NULL));
	rbcnumber = rand() % 50 + 1;

	cout << "The blood count is:"  << rbcnumber << "million" << endl;

	if (gender == 1 && (rbcnumber >= 4 || rbcnumber <= 5)){
	cout << "The result is within normal range." << endl;

	}


}
