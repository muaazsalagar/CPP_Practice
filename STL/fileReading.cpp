/*
 * sample.cpp
 *
 *  Created on: Sep 13, 2017
 *      Author: muaazsalagar
 */


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <set>
#include <algorithm>
#include <ctime>


using namespace std;

set<string> get_dictionary_from_file(){

	set <string> dictionary;
	std:: ifstream in("dictionary.txt");

	// two repeated words in dictionary!
	// 128983

	char str[255];
	while (in){

		in.getline(str,4000);
		string s=str;
		if(in)
		{
			dictionary.insert(s);
		}
	}

	//cout << dictionary.size();
	return dictionary;

}



bool validate_line(vector <string> words, set<string> dictionary){

	for (int i=0;i<words.size();i++){


		cout << "words is: "<<words.at(i) << " \n ";

		 set<string>::iterator myiterator=dictionary.find(words.at(i));
		if(myiterator!= dictionary.end()){
			return false;

		}

	}

	return true;

}
vector <string>  lineToWords(string line){

	istringstream iss(line);
	vector <string> tokens;
	copy(istream_iterator<string>(iss),
			istream_iterator<string>(),
			back_inserter(tokens));

	return tokens;
}




int main(){

	cout<< "Time Started! \n ";
	clock_t begin = clock();

	// 1. read dictionary
	set<string>dict=get_dictionary_from_file();

	// cout << dict.size()<< "\n ";

	// 2. Read Text and validate


	std:: ifstream in("theTextFile.txt");

	if(!in){

		cout << "No file to open";
		return 1;

	}

	char str[5000];
	while (in){


		in.getline(str,5000);
		string s=str;



		//cout << s << "\n" ;
		if(in) {
			//cout << "\n processing: "<< s << "\n" ;
			if(validate_line(lineToWords(s),dict)){
				cout <<"Found: " <<s <<'\n';
			}
		}

	}
	in.close();


	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	cout<< "Time Ended! \n" << elapsed_secs;

	return 0;

}





