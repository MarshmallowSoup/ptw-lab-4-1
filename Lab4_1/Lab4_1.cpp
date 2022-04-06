#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdio.h>
using namespace std;
int count(string s) {
	int pos = 0;
	int k = 0;
	while (s.find_first_of("BASIC", pos) != -1) {
		pos = s.find_first_of("BASIC", pos) + 1;
		k++;
	}
	return k;
}

string readFile(string path) {
	string s;
	getline(ifstream(path), s, '\0');
	return s;
}

int main()
{
	string filename = "1.txt";
	string fileContent = readFile(filename);
	int result = count(fileContent);
	cout << "Number of 'BASIC' in file: " << result << endl;
	return 0;

}