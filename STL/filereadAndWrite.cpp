n.cpp
 *
 *  Created on: Sep 21, 2017
 *      Author: ms
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
#include <iterator>

//#include "catch.hpp"

using namespace std;

vector<string> get_dictionary_from_file(){

	vector <string> dictionary;
	ifstream file("dictionary.txt");
	string str;
	while(file && getline(file,str)){
		//cout<< str <<"\n";

		dictionary.push_back(str);
	}
	file.close();
	return dictionary;



}



bool validate_line(vector <string> words, vector<string> dictionary){

	for(int i=0;i<words.size();i++){

		string toFind=words.at(i);
		if(find(dictionary.begin(),dictionary.end(),toFind)==dictionary.end()){
			//cout<<"NOT Found";
			return false;


		}
	}
	//cout<<"YES Found";
	return true;

}



vector <string>  lineToWords(string line){

	istringstream iss(line);
	vector <string> tokens;
	copy(istream_iterator<string>(iss),
			istream_iterator<string>(),
			back_inserter(tokens));

	int n= tokens.size();

	cout<< "Tokens are:\n ";
	for (int i=0;i<n;i++){

		cout << tokens.at(i)<<" ";

	}
	cout<< "\n ____\n";

	return tokens;


}





int  main(){

	cout<< "Time Started! \n ";
	clock_t begin = clock();

	// 1. read dictionary
	vector<string>dict=get_dictionary_from_file();

	// cout << dict.size()<< "\n ";

	// 2. Read Text and validate


	ifstream file("Text.txt");

	string str;

	while (getline(file,str)){

		cout <<"\nProcessing Line:  " <<str << "\n" ;

		vector<string> vec;
		//vec.push_back(str);

		vec=lineToWords(str);

		if(validate_line(vec,dict)){
			//cout<<"YES FOUND\n";

		}


	}



	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	cout<< "\n Time Ended! \n Total Time:" << elapsed_secs;

	return 0;

}










D
C
C
C
C
C

