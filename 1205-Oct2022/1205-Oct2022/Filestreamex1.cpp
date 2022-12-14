#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;
#define MAX_FILENAME_SIZE 128
#define COLUMN_WIDTH 80

void FileStreamTest() {
	//file output stream
	ofstream fout1("C:\\Users\\000447172\\OneDrive\\VCC\\Full2022\\TextFiles\\output1.txt");

	fout1 << "Output1:this is the first line." << endl;
	fout1 << "01:and this is second line." << endl;

	fout1.close();

	ofstream fout2("C:\\Users\\000447172\\OneDrive\\VCC\\Full2022\\TextFiles\\output2.txt");
	fout2 << "02:this is the first line." << endl;
	fout2 << "02:and this is second line." << endl;

	fout2.close();
}

void FileStreamTest2() {
    int const filename_maxsize = 100;
    char filename[filename_maxsize];
    cout << "enter a filename and press ENTER:";
    cin.getline(filename, filename_maxsize);

    strcat_s(filename, ".txt");

    cout << filename << endl;

    ofstream file_out(filename);
    if (!file_out)
    {
        cout << "FILENAME: " << filename << " could not be opened" << endl;
        return;
    }

    cout << "Filename: " << filename << "was opened." << endl;
    file_out << "I have created this file and this is the 1st line" << endl;
    file_out << "end" << endl;

    file_out.close();
}

void Displayfile() {
    int const filename_maxsize = 100;
    char filename[filename_maxsize];
    cout << "enter a filename and press ENTER:";
    cin.getline(filename, filename_maxsize);

    ifstream file_in(filename);

    if (!file_in)
    {
        cout << filename << " could not be opened" << endl;
        return;
    }

    string line;
    
    while (!file_in.eof()) {
        getline(file_in, line);
        cout << line << endl;
    }
    



}