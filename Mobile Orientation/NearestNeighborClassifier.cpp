#include "NearestNeighborClassifier.h"

void NNClassifier::findNN(vector<Point> trainingData, Point* currPoint)
{

	float NNDistance = 0;
	int NNIndex = 0;
	int currNNindex = 0;

	for (auto i = trainingData.begin(); i != trainingData.end(); i++)
	{

		int label = (*i).getLabel();
		float x = (*i).getX();
		float y = (*i).getY();
		float z = (*i).getZ();

		float dLength = sqrt((pow((currPoint->getX() - x), 2) +
			pow((currPoint->getY() - y), 2) +
			pow((currPoint->getZ() - z), 2)));

		if (NNDistance == 0)
		{
			NNIndex = currNNindex;
			NNDistance = dLength;

		}
		else if (NNDistance > dLength)
		{
			NNIndex = currNNindex;
			NNDistance = dLength;
		}

		currNNindex++;

	}

	currPoint->setLabel(trainingData.at(NNIndex).getLabel());

}

void NNClassifier::testNN(vector<Point> trainingData, vector<Point> testData)
{

	cout << "---Testing Data Against Training Data---" << endl << endl;

	for (auto i = testData.begin(); i != testData.end(); i++)
	{

		int label = (*i).getLabel();
		Point currPoint((*i).getX(), (*i).getY(), (*i).getZ());

		findNN(trainingData, &currPoint);

		if (currPoint.getLabel() == label)
		{
			cout << "Point: " << (*i).getX() << ", " << (*i).getY() << ", " << (*i).getZ() << ", " << (*i).getLabel() << "\t|| " << "PASS" << endl;
		}
		else
		{
			cout << "Point: " << (*i).getX() << ", " << (*i).getY() << ", " << (*i).getZ() << ", " << (*i).getLabel() << "\t|| " << "FAILED" << endl;
		}
	}
}

void NNClassifier::setNN(vector<Point> trainingData, vector<Point> unknownData)
{

	cout << "---Unknown Data Against Training Data---" << endl << endl;

	for (auto i = unknownData.begin(); i != unknownData.end(); i++)
	{

		int label = (*i).getLabel();
		Point currPoint((*i).getX(), (*i).getY(), (*i).getZ());

		findNN(trainingData, &currPoint);
		(*i).setLabel(currPoint.getLabel());

		cout << "Point: " << (*i).getX() << ", " << (*i).getY() << ", " << (*i).getZ() << "\t|| " << "Determined Orientation: " << (*i).getLabel() << endl;

	}
}