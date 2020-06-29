#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> next(vector<int> &arr)
{
    int i=arr.size()-2;
    while(i>=0&&arr[i]>arr[i+1]){
        i--;
    }
    if(i>0)
    {
        int j=arr.size()-1;
        while(j>=0&&arr[j]<=arr[i])
        {

            j--;
        }
        swap(arr.at(j),arr.at(i));

    }
    i++;
    reverse(arr.begin()+i,arr.end());
    return arr;
}

int main()
{
    vector <int> arr {5,8,2,6,9,7,4};

   vector<int>p=next(arr);

    for(int i=0;i<p.size();i++)
    {
       cout<<p[i]<<" ";
    }
}
