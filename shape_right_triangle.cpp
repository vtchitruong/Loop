#include <iostream>

using namespace std;

//----------------------------------------------
/* Right triangle with left leg and bottom leg
Input: 4
Output: 
*
* *
* * *
* * * *

*/

void RightTriangle1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) cout << "* ";
        
        cout << endl; // next line
    }
}

//----------------------------------------------
/* Right triangle with left leg and top leg
Input: 4
Output: 
* * * *
* * * 
* * 
* 

*/
void RightTriangle2(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--) cout << "* ";
        
        cout << endl; // next line
    }
}

//----------------------------------------------
/* Right triangle with right leg and bottom leg
Input: 4
Output: 
       *
     * *
   * * *
 * * * *

*/

void RightTriangle3(int n)
{
    for (int i = 0; i < n; i++)
    {
        // print spaces in front
        cout << string(2 * (n - i), ' ');
        
        // print stars
        for (int j = 0; j < i + 1; j++) cout << " *";
        
        // next line
        cout << endl;
    }
}

//----------------------------------------------
/* Right triangle with right leg and top leg
Input: 4
Output: 
       *
     * *
   * * *
 * * * *

*/

void RightTriangle4(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        // print spaces in front
        cout << string(2 * (n - i), ' ');
        
        // print stars
        for (int j = i + 1; j > 0; j--) cout << " *";
        
        // next line
        cout << endl;
    }
}

//----------------------------------------------
int main()
{
    int row = 10; // number of rows
    
    cout << "Right triangle with left leg and bottom leg" << endl;
    RightTriangle1(row);

    cout << "Right triangle with left leg and top leg" << endl;
    RightTriangle2(row);

    cout << "Right triangle with right leg and bottom leg" << endl;
    RightTriangle3(row);

    cout << "Right triangle with right leg and top leg" << endl;
    RightTriangle4(row);    

    return 0;
}