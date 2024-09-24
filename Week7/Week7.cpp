#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void walkthrough4()
{
	int myarray;
	ifstream fin("data.skibidi", ios::in | ios::binary);
	if (fin.good()) {
		// read until we get to the end of file
		while (!fin.eof() && fin.peek() != EOF) {
			fin.read((char*)&myarray, sizeof(int));
			cout << myarray << endl;
		}
		fin.close();
	}

}

void walkthrough3()
{
	int myVecArray[9] = { 0, 1, 2 , 1, 2, 3 , 4, 5, 6 };
	int arraySize = sizeof(myVecArray) / sizeof(int);
	//opening binary file data.dat
	ofstream fout("data.skibidi", ios::out | ios::binary);
	//fill in the array here
	if (fout.good()) {
		for (int i = 0; i < arraySize; i++) {
			fout.write((char*)&myVecArray[i], sizeof(int));
			//	write the whole array in one go
			//	fout.write((char*)myVecArray, sizeof(int) * arraySize);
		}
		fout.close();
	}

}

void practiceTask1()
{
	string mode;
	cout << "Enter a file mode, 'Writing' or 'Searching': \n";
	cin >> mode;
	while (mode.compare("Writing") != 0 && mode.compare("Searching") != 0)
	{
		cout << mode << " is invalid.\n";
		cout << "Enter a file mode, 'Writing' or 'Searching': \n";
		cin >> mode;
	}
	if (mode.compare("Writing") == 0)
	{
		ofstream file;
		string data;
		file.open("pt1.txt", ios::app);
		cout << "Student name: \n";
		cin >> data;
		file << data << ",";
		cout << "Student age: \n";
		cin >> data;
		file << data << ",";
		cout << "Student ID: \n";
		cin >> data;
		file << data << endl;
		file.close();
	}
	else
	{
		string searchMode;
		cout << "Enter search mode, 'Name', 'Age', or 'ID': \n";
		cin >> searchMode;
		while (searchMode.compare("Name") != 0 && searchMode.compare("Age") != 0 && searchMode.compare("ID") != 0)
		{
			cout << "Invalid.\n";
			cout << "Enter search mode, 'Name', 'Age', or 'ID': \n";
			cin >> searchMode;
		}
		if (searchMode.compare("Name") == 0)
		{
			string name;
			cout << "Enter name: \n";
			cin >> name;
			ifstream file;
			file.open("pt1.txt", ios::in);
			char* data;
			if (file.goodbit)
			{
				while (!file.eof())
				{
					file.read(data, 32);
					cout << *data;
				}
			}
			file.close();
		}
		else if (searchMode.compare("Age") == 0)
		{

		}
		else
		{

		}
	}
}

void walkthrough2() {
	string data;
	// open a file in read mode
	ifstream infile;
	infile.open("student.txt");
	cout << "student name: ";
	//read line from the file
	infile >> data;
	cout << data;
	cout << "\nstudent age: ";
	//read line from the file
	infile >> data;
	cout << data;
	cout << "\nstudent program: ";
	//read line from the file
	infile >> data;
	cout << data << endl;
	//close the open file
	infile.close();

}

void walkthrough1() {
	string data;
	// open a file in write mode
	ofstream outfile;
	outfile.open("student.txt", ios::app);
	cout << "Enter student name: ";
	cin >> data;
	//write input data in the file
	outfile << data << endl;

	cout << "\nEnter student age: ";
	cin >> data;
	//write input data in the file
	outfile << data << endl;
	cout << "\nEnter student program: ";
	cin >> data;
	outfile << data << endl;
	//close the open file
	outfile.close();
}

int main() {
	walkthrough4();
}


