// textstat.cpp - count words and lines
#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int linecount = 0, wordcount = 0;
	char buf[100];
	while (cin.getline(buf, 100)) {
		linecount++;
		if (strtok(buf, " \t")) {
			wordcount++;
			while (strtok(0, " \t"))
				wordcount++;
		}
	}
	cout << "number of lines: " << linecount << endl;
	cout << "number of words: " << wordcount << endl;
}
