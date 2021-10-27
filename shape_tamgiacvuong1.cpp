/*
Input: 4
Output:

       *
     * *
   * * *
 * * * *

*/

#include <iostream>

using namespace std;

int main()
{
    int n = 10; // n dòng

    
    for (int i = 0; i < n; i++)
    {
        // in khoảng trắng phía trước dấu sao
        cout << string(2 * (n - i), ' ');
        
        // in dấu sao
        for (int j = 0; j < i + 1; j++) cout << " *";
        
        // hết dòng
        cout << endl;
    }

    return 0;
}