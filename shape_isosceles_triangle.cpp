#include <iostream>

using namespace std;

//----------------------------------------------
// Isosceles triangle
/*
Input: 4
Output:
    *
   * * 
  * * *
 * * * *
 
*/
 
void isoTriangle1(int n)
{   
    // iterate from first row to last row
    for (int i = 1; i <= n; i++)
    {
        // print spaces in front
        cout << string(n - i + 1, ' ');
        
        // print stars "* "
        for (int j = 1; j <= i; j++)
            cout << "* ";
        
        // next line
        cout << endl;
    }
}

//----------------------------------------------
// Upside down isosceles triangle
/*
Input: 4
Output:
 * * * *
  * * *
   * * 
    * 
*/

void isoTriangle2(int n)
{   
    // iterate from first row to last row
    for (int i = n; i >= 1; i--)
    {
        // print spaces in front
        cout << string(n - i + 1, ' ');
        
        // print stars "* "
        for (int j = i; j >= 1; j--)
            cout << "* ";
        
        // next line
        cout << endl;
    }
}

//----------------------------------------------
int main()
{
    int row = 10;

    cout << "Isosceles triangle" << endl;
    isoTriangle1(row);
    cout << endl;

    cout << "Upside down isosceles triangle" << endl;
    isoTriangle2(row);

    return 0;
}
