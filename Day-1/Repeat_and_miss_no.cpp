#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void repeat(vector<int> &a)
{   int r=0,m=0;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size()-1;i++)
    {
        if(m==1&&r==1)
        {
            break;
        }
        if((a[i]-a[i+1])==0&&r==0)
        {
            cout<<"repeated is "<<a[i]<<"\n";
            r=1;

        }
        if(a[i+1]-a[i]>1&&m==0)
        {
            cout<<"missing value is "<<a[i]+1<<"\n";
            m=1;
        }

    }
}
int main()
{
    vector <int> a {4, 3, 6, 2, 1, 1};
    repeat(a);
}
