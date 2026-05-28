#include <iostream>

using namespace std;

int main()
{
   int matrix[2][3] = {{1, 2, 3},{4, 5, 6}};
   int row=2;
   int col=3;
   for(int i=0;i<2;i++)
   {
       for(int j=0;j<3;j++){
        cout<<matrix[i][j];
       }
       cout<<endl;
   }

    return 0;
}
