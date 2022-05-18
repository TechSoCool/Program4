// Name: Sterling Gerard
// Objective:
// Required Header Files 
#include<iostream>
#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<string>

using namespace std;

//Function Prototypes 
int linearSearch(string names[], string search, int cnt, int& comparisonCnt);
void binarySearchlinearSearch(string names[], string search, int cnt, int& comparsionCnt);
int main()
{

	// Declaring variables 
	const int SIZE = 20;
	string names[SIZE];
	string search;
	int cnt = 0;
	comparsionCnt = 0;
	ifstream dataIn;
	ofstream dataOut;
	dataIn.open("StudentName.txt"); // Open the studentName.txt file
	if (dataIn.fail())
	{
		cout << "** FILE NOT FOUND **";
		return 1;
	}
	else {
		dataOut.open("output.txt");

		// Reading the data from the file
		while (getline(dataIn, name[cnt])) {
			cnt++;
		}
		dataIn.close();
		cout << "Enter Name to search :";
		// in order for user to enter name
		getline(cin, search); //Read the value given by the user 
		if (index != -1) {
			cout << "No of comparsion in Linear Search :" << comparsionCnt << endl; //Displaying the number of comparsion in Linear Search
			dataOut << "No of comparsion in Binary Search :" << comparsionCnt << endl;
			binarySearchlinearSearch(names, search, cnt, comparsionCnt); // Calling the BinarySearch function and Linear Search functions
			cout << "No of comparsions in Binary Search :" << comparsionCnt << endl;
			dataOut << "No of comparsion in Binary Search :" << comparsionCnt << endl;
			dataOut.close();
		}
		else {
			cout << search << "not found in the array" << endl;
			dataOut << search << " not found in the array " << endl;
			dataOut.close();
		}
	}
	return 0;
}
int linearSearch(string names[], string search, int cnt, int& comparsionCnt) {
	for (int i = 0; i < cnt; i++) {
		if (names[i].compare(search) == 0) {
			return i;
		}
		comparsionCnt++; // Increment the comparsion count
	}
	return -1;
}
void binarySearchlinearSearch(string names[], string search, int cnt, int& comparsionCnt){
	int low = 0;
	int flag = 0;
	int high = cnt - 1;
	while (high >= low) {
		int middle = (low + high) / 2;
		if (names[middle].compare(search) == 0) {
			flag = 1;
			pos = middle;
			break;
		}
		if (names[middle].compare(search) < 0) {
			low = middle + 1;
			comparsionCnt++;
		}
		if (names[middle].compare(search) > 0) {
			high = middle - 1;
			comparsionCnt++;
		}
	}
	





	return 0;
}