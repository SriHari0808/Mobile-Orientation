/*
 *	  Description:
 *
 *			Class definition for AnotherClassifer
 *
 */
 ///@file AnotherClassifer.h
 ///@date 04/11/2021
 ///@brief File contains a classifer class
 ///
 ///This file includes a class that will classify a given coordinate.
#pragma once
#include "Point.h"

#include <iostream>
#include <vector>
using namespace std;
///@brief This class includes a classifer function
/// 
///This class includes a classifer function that will classify a given coordinate
class AnotherClassifer {

public:
	///@brief this function will classify a given coordinate
	/// 
	///This function takes a coordinate, finds its Nearest Neighbor and classify the Point with the appropriate label
	void findAnotherClassifer();
};