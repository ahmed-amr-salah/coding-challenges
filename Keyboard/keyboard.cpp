#include <iostream>
#include <map>
#include <vector>

using namespace std;


int main (){

map <char,vector<char>> map_keyboard;
vector<string> keyboard(3);
keyboard[0] = "qwertyuiop";
keyboard[1] = "asdfghjkl;";
keyboard[2] = "zxcvbnm,./";
for(int i=0;i<keyboard.size();i++)
{
    for(int j=0;j<keyboard[i].size();j++)
    {
        if(j==0)
        {
            vector<char> childs(2);
            childs[0]='!';
            childs[1]=keyboard[i][j+1];
            map_keyboard.insert({keyboard[i][j],childs});
        }
        else if (j==keyboard[i].size()-1)
        {
            vector<char> childs(2);
            childs[0]=keyboard[i][j-1];
            childs[1]='!';
            map_keyboard.insert({keyboard[i][j],childs}); 
        }
        else
        {
            vector<char> childs(2);
            childs[0]=keyboard[i][j-1];
            childs[1]=keyboard[i][j+1];
            map_keyboard.insert({keyboard[i][j],childs});
        }
            
    }
}
char shift;
int shift_index;
string correct_message = "";
string input;
cin >> shift;
cin >> input;
if (shift=='L')
    shift_index = 1;
else 
    shift_index = 0;
for(auto itr:input)
{
    auto ptr = map_keyboard.find(itr);
    if(ptr->second[shift_index]!='!')
        correct_message.append(1,ptr->second[shift_index]);
    else
        correct_message.append(1,itr);
}

cout << correct_message;

}