#include <iostream>
#include <vector>
#include <limits.h>

 
using namespace std;
long long inversions;
void merge(int l, int mid,int r,vector<int> & arr);
void mergeSort(int l , int r ,vector<int> & arr);

int main(){

int number_of_testcases;
cin >> number_of_testcases;
while(number_of_testcases--)
{
    int size;
    inversions=0;
    vector<int> arr;
    cin >> size;
    while(size--)
    {
        int number;
        cin >> number;
        arr.push_back(number);
    }
    mergeSort(0,arr.size()-1,arr);
    cout << inversions<<endl;

}   


}

void mergeSort(int l , int r ,vector<int> & arr)
{
    if(l>=r)
        return;
    int mid  = (l+r)/2;
    mergeSort(l,mid,arr);
    mergeSort(mid+1,r,arr);
    merge(l,mid,r,arr);

}

void merge(int l, int mid,int r,vector<int> & arr)
{
    vector<int> L ,R;
    for(int i=l;i<=mid;i++)
        L.push_back(arr[i]);

    for(int i=mid+1;i<=r;i++)
        R.push_back(arr[i]);

    L.push_back(INT_MAX);
    R.push_back(INT_MAX);
    int rp =0; int lp =0;
    for(int i=l;i<=r;i++)
    {
        if(L[lp]<=R[rp] )//&& arr[i] != L[lp])
        {
            arr[i] = L[lp++];
            
        }
        else 
        {   
            inversions += L.size()-1 - lp;
            arr[i] = R[rp++];
            
        } 
    }

}