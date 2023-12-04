#include <iostream>
#include <map>
#include <string>
using namespace std;


int main() {

int number_of_lines;
cin >> number_of_lines;
map <string,int> database_names;

while(number_of_lines--)
{
    string temp; 
    cin >> temp;
    auto response = database_names.find(temp);
    if(response != database_names.end())
    {
        database_names[temp]++;
        cout << temp + to_string(database_names[temp]) << endl;
    } 
    else
    {
        database_names.insert({temp,0});
        cout << "OK" << endl;
    } 
}


}