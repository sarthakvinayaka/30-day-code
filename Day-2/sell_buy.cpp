#include<iostream>
#include<vector>
using namespace std;


int ma(vector<int> a)
{
    int sum=0;
    int mini;

        for(int j=0;j<a.size();j++)
        {
         mini = min(mini, a[j]);

        sum = max(sum, a[j]-mini);

        }

    cout<<sum;
}

int main()
{
    vector <int> arr {7,1,5,3,6,4};
    ma(arr);
}
