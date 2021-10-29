#include <iostream>

using namespace std;

//----------------------------------
// Filled rectangle
/*
Input: 4 10
Output:
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
*/

void filledRectangle(int length, int width)
{
    for (int i = 0; i < width; i++) // width = number of rows
    {
        for (int j = 0; j < length; j++) // length = number of columns
        {
            cout << "* ";           
        }
        cout << endl;
    }
}

//----------------------------------
// Empty (unfilled) rectangle
/*
Input: 5 10
Output:
* * * * * * * * * * 
*                 *
*                 *
*                 *
* * * * * * * * * * 
*/

void emptyRectangle(int length, int width)
{
    // first line
    for (int i = 0; i < length; i++)
        cout << "* ";
    cout << endl;

    // the body
    for (int i = 1; i <= width - 2; i++)
        cout << '*' << string(2 * length - 3, ' ') << '*' << endl;

    // bottom line
    for (int i = 0; i < length; i++)
        cout << "* ";
    cout << endl;
}

//----------------------------------
int main()
{
    int length = 10;
    int width = 5;

    cout << "Filled rectangle" << endl;
    filledRectangle(length, width);
    cout << endl;

    cout << "Empty rectangle" << endl;
    emptyRectangle(length, width); 

    return 0;
}
