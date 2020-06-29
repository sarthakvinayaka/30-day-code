#include<iostream>
using namespace std;

int matrix(int arr[3][3])
{
    int row[3],column[3];
    for(int i=0;i<3;i++){
        row[i]=0;
    }
      for(int i=0;i<3;i++){
        column[i]=0;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if (arr[i][j]==0)
            {
                row[i]=1;
                column[j]=1;
            }
        }

    }

        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if ( row[i]==1||column[j]==1)
            {
                arr[i][j]=0;
            }
        }

    }

      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
       cout<<"\n";
    }
}

int main()
{
    int arr[3][3]={  {1, 0, 1},
        {1, 1, 1},
        {1, 1, 1}};
        matrix(arr);

}
