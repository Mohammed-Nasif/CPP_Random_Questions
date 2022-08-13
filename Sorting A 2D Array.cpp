#include <iostream>
//using namespace std; // According To Compiler
int main() {
    /*
    Expexted OutPut : 
     arr[4][3] = {{1,5,9}{2,6,10}{3,7,11}{4,8,12}};
    */
    
    // 1st Loop Through out Each Column
    int arr[4][3];
    int Filler = 1;
    for(int i = 0; i < 3; i++)
    {
         // 2nd Loop Through out Each Row
         for(int j = 0; j < 4; j++)
         {
            arr[j][i] = Filler;
            Filler++;
         }
    }
  // Printing The Array
  cout<<"The 2D Array:\n";
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
		    cout<<"\t"<<arr[i][j];
		}
		cout<<"\n";
	}
    return 0;
}
