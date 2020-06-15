#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void func(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    vector <int> ans;
    int k=0;
    int temp=0;
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]==arr[i+1])
        {   if(arr[i]==temp)
        {
            continue;
        }
        else{
            ans.push_back(arr[i]);
            temp=arr[i];
        }
        }
    }
   for (int i=0; i<ans.size(); i++)
       cout << ans[i] << " ";
}

int main()
{
    vector<int> arr{1,1,1};
    func(arr);
    return 0;
}
