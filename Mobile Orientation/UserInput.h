/*
 *
 *	  Description:
 *
 *			Header for functions that include user input
 *
 */
 ///@file UserInput.h
 ///@date 04/11/2021
 ///@brief File containing functions that include user input
 ///
 ///This file includes a function that will take user input and determine its classification
#pragma once
#include "Point.h"
#include "NearestNeighborClassifier.h"

#include <iostream>
#include <vector>
#include <Windows.h>
#include <string>

using namespace std;

///@brief Retrieves a coordinate and classify's it
/// 
///This function will take in a corordinate from the user. Then it will find its Nearest Neighbor and classify the Point with the appropriate label
void userCoordinate(vector<Point>);