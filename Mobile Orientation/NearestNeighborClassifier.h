/*
 *
 *	  Description:
 *
 *			Class definition for the NN Classifer class
 *
 */
 ///@file AnotherClassifer.h
 ///@date 04/11/2021
 ///@brief File contains a Nearest Neighbor Classifer class
 ///
 ///This file includes a function that will determine its classification of a point
#pragma once
#include "Point.h"

#include <iostream>
#include <vector>
using namespace std;
///@brief Class contains functions to determine the classification of a point
///
///Class includes a function that will determine/test/set the classification of a point
class NNClassifier {

public:
	///@brief Function that compares a point to an existing list of data
	///
	///Function that determines and sets the NN classification of a point based on existing data
	void findNN(vector<Point>, Point*);
	///@brief Function that tests the NN classification function (findNN)
	///
	///Function that tests the NN classification function (findNN) by using a list of solved data against the algorthim to see if it works as intended (test data)
	void testNN(vector<Point>, vector<Point>);
	///@brief Function that determines the NN classification on a list of unsolved points
	///
	///Function that determines and sets the NN classification of a list of points using the NN classification function (findNN)
	void setNN(vector<Point>, vector<Point>);
};