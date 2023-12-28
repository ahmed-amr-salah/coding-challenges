#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(){
    
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> arr;
        int size;
        int mid;
        cin >> size;
        mid = (size-1)/2;
        while(size--)
        {   
            int number;
            cin >> number;
            arr.push_back(number);
        }
        sort(arr.begin(),arr.end());
        int counter =0;
        cout << arr[mid] << " ";
        for(int i=1;i<=arr.size()/2;i++)
        {
            cout << arr[mid+i] << " ";
            if(i!=arr.size()/2)
                cout << arr[mid-i] << " ";
        }
        if(arr.size()%2!=0)
            cout << arr[0] << " ";
        cout << endl;
    }

}
