#include "FileIO.h"

vector<Point> readDataFromFile(string fileName) {

	vector<Point> currData;

	ifstream fin;
	fin.open(fileName);

	if (fin.is_open()) {

		while (!fin.eof()) {

			//get entire line
			string line;
			getline(fin, line);
			//cout << line << endl;

			istringstream issLine(line);

			//spit data into 3 sections: x,y,z
			string xString;
			string yString;
			string tempString;
			string zString;
			string label;

			getline(issLine, xString, ',');
			getline(issLine, yString, ',');
			getline(issLine, tempString);

			if (tempString.find(',') != string::npos) {

				istringstream issTemp(tempString);
				getline(issTemp, zString, ',');
				getline(issTemp, label);

				Point currPoint(stoi(label), stof(xString), stof(yString), stof(zString));

				currData.push_back(currPoint);

			}
			else {

				zString = tempString;

				Point currPoint(stof(xString), stof(yString), stof(zString));

				currData.push_back(currPoint);
			}
		}

		fin.close();

	}
	else {
		cout << "Cannot open " << fileName;
	}

	return currData;

}