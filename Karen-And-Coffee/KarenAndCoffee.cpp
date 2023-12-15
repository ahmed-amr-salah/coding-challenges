#include <iostream>
#include <vector>

using namespace std;

const int input_size = 200001;

int main (){

vector<int> recipes(input_size);
vector<int> recipes_suffix(input_size);
vector<int> recipes_output(input_size);

int n , k , q;
cin >> n >> k >> q;
while (n--)
{
    int l , r;
    cin >> l >> r;
    recipes[l]++;
    recipes[r+1]--;
}
recipes_suffix[0]=recipes[0];
for (int i=1;i<input_size;i++)
{
    recipes_suffix[i] = recipes_suffix[i-1] + recipes[i];
}
recipes_output[0]=recipes_suffix[0];
for (int i=1;i<input_size;i++)
{
    if(recipes_suffix[i]>=k)
        recipes_output[i] = recipes_output[i-1] + 1;
    else 
        recipes_output[i] = recipes_output[i-1];
}

while(q--)
{
    int l ,r ;
    cin >> l >> r;
    cout << (recipes_output[r]-recipes_output[l-1])<< endl;
}







}
