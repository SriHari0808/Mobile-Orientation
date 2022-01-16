/* Program Description:
 *
 *				In this project you are given a text file which includes the 3-D gravity vector (x,y,z) of a
 *				user’s phone. The data is labeled based on the phone orientation as shown below. Mainly you
 *				are asked to use your OOP and C++ skills to detect the phone orientation using machine
 *				learning (nearest neighbour (NN) classifier). The focus of this lab is about using your OOP
 *				skills to solve a real problem.
 *
 *				Requirements:
 *					1. Your application should read the data from the provided text file. (1 pt.)
 *
 *					2. Your algorithm can learn from the provided data (trainingData.txt) to detect the
 *						phone orientation. This can be achieved by designing and implementing the nearest
 *						neighbor (NN) classifier(Explained in the lecture). (2 pt.)
 *
 *					3. In addition to the NN classifier, you are asked to have another dummy classifier called
 *						AnotherClassifer. All the functions of this classifier are just printing the function
 *						names. (1 pt.)
 *
 *					4. Your program should interact with the user. (1 pt.)
 *
 *					5. The application asks the user to enter sample data (x,y,z) and the output is the
 *						orientation of the phone (1 - 6).
 *
 *					6. You have to document your code using Doxygen. (1 pt.)
 *
 *					7. You have to provide the class diagram. You can use any tool to draw the class diagram (2 pt.)
 *
 *					8. You should write a well-structured, readable, and clean code that is based on all
 *						concepts that you have studied so far. (2 pt.)
 *
 *					9. Test data is provided (testingData.txt) so that you can use it to test your
 *						implementation.
 *
 *					10. Unknown sample data (unknownData.txt) is provided. You are asked to use your
 *						application to detect the phone orientation of the provided unknown samples. (1 pt.)
 *
 */
#include "FileIO.h"
#include "NearestNeighborClassifier.h"
#include "AnotherClassifer.h"
#include "UserInput.h"

#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	//Console Screen Size
	system("MODE CON COLS=100 LINES=30");

	string trainingData = "trainingData.txt";
	string testingData = "testingData.txt";
	string unknownData = "unknownData.txt";

	vector<Point> tData = readDataFromFile(trainingData);
	vector<Point> testData = readDataFromFile(testingData);
	vector<Point> uData = readDataFromFile(unknownData);

	NNClassifier NN;

	//training data
	NN.testNN(tData, testData);

	cout << endl;
	system("pause");
	system("cls");

	//testing data
	NN.setNN(tData, uData);

	cout << endl;
	system("pause");
	system("cls");

	AnotherClassifer AC;

	//Another Classifer
	AC.findAnotherClassifer();

	cout << endl;
	system("pause");
	system("cls");

	//User Input
	userCoordinate(tData);

	return 0;

}