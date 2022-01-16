#include "Point.h"

Point::Point(float x, float y, float z) {
	this->label = 0;
	this->x = x;
	this->y = y;
	this->z = z;
}

Point::Point(int label, float x, float y, float z) {
	this->label = label;
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point::setLabel(int label) {
	this->label = label;
}

int Point::getLabel() {
	return this->label;
}

float Point::getX() {
	return this->x;
}

float Point::getY() {
	return this->y;
}

float Point::getZ() {
	return this->z;
}