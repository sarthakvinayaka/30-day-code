#include<iostream>
using namespace std;

int kadane(int arr[])
{
    int temp_max=0,fmax=0;
    for(int i=0;i<8;i++)
    {
        temp_max=temp_max+arr[i];
        if(temp_max<0)
        {
            temp_max=0;
        }
        if(temp_max>=fmax)
        {
            fmax=temp_max;
        }

    }
    cout<<fmax;
}
int main()
{
    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
    kadane(arr);
}
