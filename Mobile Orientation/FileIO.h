/*
 *
 *	  Description:
 *
 *			Header for functions that deal with the system
 *
 */
 ///@file FileIO.h
 ///@date 04/11/2021
 ///@brief File contains a read function
 ///
 ///This file includes a function that will read data from a text file
#pragma once
#include "Point.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
///@brief This function will read text file full of coordinates
/// 
///This function will read coordinates from a given text file, create Point objects and put them in a vector.
vector<Point> readDataFromFile(string fileName);