#include <iostream>
#include<string>
#include<fstream>

using namespace std;

//creating a file
string create(string file_path, string file_name)
{
	ofstream file;

	//Requesting file creation inputs from the user.
	cout << "Enter the path of the file to be created: ";
	getline(cin, file_path);

	//cin>>file_path;
	cout << "Enter the file name to be created:  ";
	getline(cin, file_name);

	//registering the file path
	string final_path = "";
	final_path += file_path == "" ? "C:\\Users\\uppal\\Desktop\\freshworksassignment" : file_path;
     //C:\Users\uppal\Desktop\freshworksassignment
	final_path += "\\";
	final_path += file_name == "" ? "file.txt" : file_name;

	//creating the file
	const char *tmp = &final_path[0];
	file.open(tmp);
	cout << "\n File is created." << endl;
	file.close();
	return final_path;
}