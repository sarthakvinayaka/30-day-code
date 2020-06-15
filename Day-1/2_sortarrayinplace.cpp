//	Sort an array of 0’s 1’s 2’s without using extra space or sorting algo
#include<iostream>
#include<vector>
using namespace std;
void inplacesort(vector<int> &arr);
int main()
{ vector<int>arr {1,2,0,2,1,0};
  inplacesort(arr);
}
void inplacesort(vector<int> &arr)
{
    int count0,count1,count2;
    count0=0;
    count1=0;
    count2=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==0)
        {
          count0++;
        }
         if(arr[i]==1)
        {
          count1++;
        }
         if(arr[i]==2)
        {
          count2++;
        }

    }
    int a=0,b=0,c=0,d=0;
    while(b<count0)
    {   arr.at(a)=0;
        b++;
        a++;
    }
       while(c<count1)
    {   arr.at(a)=1;
        c++;
        a++;
    }
       while(d<count2)
    {   arr.at(a)=2;
        d++;
        a++;
    }
    for(int i=0;i<arr.size();i++)
    {
      cout<<arr[i];

    }
}
