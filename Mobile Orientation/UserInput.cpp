#include "UserInput.h"

void userCoordinate(vector<Point> trainingData) {

	cout << "---User Test---" << endl << endl;

	cout << "Please Enter a Value for X, Y and Z:" << endl
		<< "Or Enter 0 for X, Y and Z to exit" << endl << endl;

	cout << "X: ";
	string xString;
	cin >> xString;
	float x = 0;
	x = stof(xString);

	cout << "Y: ";
	string yString;
	cin >> yString;
	float y = 0;
	y = stof(yString);

	cout << "Z: ";
	string zString;
	cin >> zString;
	float z = 0;
	z = stof(zString);

	if (x == 0 &&
		y == 0 &&
		z == 0) {

		cout << endl << "Thank you for using this program!" << endl;
		Sleep(1000);
		return;

	}

	Point userPoint(x, y, z);

	NNClassifier NN;

	NN.findNN(trainingData, &userPoint);

	cout << endl << "Point: " << userPoint.getX() << ", " << userPoint.getY() << ", " << userPoint.getZ() << "\t|| " << "Determined Orientation: " << userPoint.getLabel() << endl;

}