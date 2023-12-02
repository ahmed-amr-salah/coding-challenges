
#include<iostream>
#include<vector>
using namespace std; 


int main (){

int number_of_testscases; 
int input_size;
cin >> number_of_testscases;
while(number_of_testscases--)
{
    cin >> input_size;
    vector <int> decks(input_size);
    vector<int> max(input_size);
    int counter=0;
    while(input_size--){
        int temp;  
        cin >> temp;
        decks[counter++] = temp;
    }
    max[0] = decks[0];
    // initialize the max array to indicate the next max in the array 
    for(int i=1;i<decks.size();i++)
    {
        if(decks[i] > max[i-1])
            max[i] = decks[i];
        else
            max[i] = max[i-1];

    }
    // for loop to compute the new deck arrangment and print the output
    int r =decks.size() ;
    for (int i=decks.size()-1;i>=0;i--)
    {
        if (decks[i]==max[i])
        {
            for(int j=i;j<r;j++)
            {
                cout << decks[j] << " "; 
            }
            r = i;
        }
    }
    cout << endl;
}

}