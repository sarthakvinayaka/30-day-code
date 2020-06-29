#include<iostream>
using namespace std;


void pascal(int n)
{
int arr[n][n];
for(int p=0;p<n;p++)
{
    for(int t=0;t<n;t++)
    {
        arr[p][t]=0;
    }
}
arr[0][0]=1;
arr[1][0]=1;
arr[1][1]=1;

cout<<"1"<<"\n"<<"1 1"<<"\n";
    for(int i=2;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0)
            {
             arr[i][j]=1;

            }
            if(j==i)
            {
                arr[i][j]=1;

            }
            else{
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];


            }
                  cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}




int main()
{
    pascal(6);
}
