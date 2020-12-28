#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include<time.h>
#include<ctime>
#include<algorithm>
#include<cstring>
using namespace std;

void delete_line(string, int);
int get_lineindex(string &, string &);

void remove(string file_path)
{
    string key;
    cout << " Enter the key to be deleted: ";
    cin >> key;
    cout << endl;
    int line_index = get_lineindex(file_path, key);
    if (line_index == -1)
    {
        cout << " Key does not exist\n";
        return;
    }
    delete_line(file_path, line_index);
    cout << "key is successfully deleted\n";
}