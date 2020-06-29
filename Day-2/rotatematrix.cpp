#include<iostream>
#include<vector>
using namespace std;


void rot(vector<vector<int>> arr)
{int right=3,left=0, top=0,bottom=3;
int direction=0;
int prev;
int curr;
prev = arr[top + 1][left];
while(top<=bottom&&left<=right)
{
    if(direction==0)
    {
        for(int i=left;i<=right;i++)
        {
            curr=arr[top][i];
            arr[top][i]=prev;
            prev=curr;
    //        cout<<arr[top][i]<<" ";
        }
        top++;
    }
    else if(direction==1)
    {
        for(int i=top;i<=bottom;i++)
        {

            curr=arr[i][right];
            arr[i][right]=prev;
            prev=curr;
      //      cout<<arr[i][right]<<" ";

        }
        right--;
    }
    else if(direction==2)
    {
        for(int i=right;i>=left;i--)
        {
            curr=arr[bottom][i];
            arr[bottom][i]=prev;
            prev=curr;
           // cout<<arr[bottom][i]<<" ";
        }
        bottom--;
    }
    else if(direction==3)
    {
        for(int i=bottom;i>=top;i--)
        {
            curr=arr[i][left];
            arr[i][left]=prev;
            prev=curr;
            //cout<<arr[i][left]<<" ";
        }
        left++;
    }
    direction=(direction+1)%4;
}
for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
}


int main()
{
    vector<vector<int>>arr {{1,2,3,4},
{5,6,7,8},
{9,10,11,12},
{13,14,15,16}};
    rot(arr);
}
