/*
 *
 *	  Description:
 *
 *			Class definition for a Point (coordinate in xyz axis)
 *
 */
 ///@file AnotherClassifer.h
 ///@date 04/11/2021
 ///@brief File contains a Point (xyz coordinate) class
 ///
 ///This file includes a Point (xyz coordinate) class that holds the coordinate object
#pragma once
#include <iostream>
using namespace std;
///@brief Class contains a Point object
///
///Class includes a Point object that uses a classification (label) and x, y, z values
class Point {

	int label;
	float x;
	float y;
	float z;

public:
	///@brief Point constructor no label
	///
	///Constructor to create a Point with no assigned label
	Point(float, float, float);
	///@brief Point constructor with a label
	///
	///Constructor to create a Point will all values
	Point(int, float, float, float);
	///@brief Function to set the label
	///
	///Function to set or change the label of a point
	void setLabel(int);
	///@brief Function to get the label
	///
	///Function to get the label of a point
	int getLabel();
	///@brief Function to get X
	///
	///Function to get the X value of a point
	float getX();
	///@brief Function to get Y
	///
	///Function to get the Y value of a point
	float getY();
	///@brief Function to get Z
	///
	///Function to get the Z value of a point
	float getZ();

};