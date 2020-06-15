#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int> >  overlap(vector<vector<int> > &arr,int c,int s)
{
    sort(arr.begin(), arr.end());

    while(c!=s)
{
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i][1]>=arr[i+1][0])
        {
            arr[i]={min(arr[i][0],arr[i+1][0]),max(arr[i+1][1],arr[i][1])};
            arr.erase(arr.begin()+i+1);//Delete (i+1) row

        }
        }
      c++;
      overlap(arr,c,s);
    }
    return arr;

}

int main()
{
vector<vector<int>> arr { {6,8}, {1,9}, {2,4}, {4,7} };
int s =arr.size()/2;
vector<vector<int>> ans=overlap(arr,0,s);
for(int i=0;i<ans.size();i++)
{

  cout<<"{ "<<ans[i][0]<<","<<ans[i][1]<<"}";
}

}
