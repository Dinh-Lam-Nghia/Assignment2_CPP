#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char const *argv[])
{
    int array[3][3];
    array[0][0] = 0;
    int i = 0;
    for (; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int ran = rand() % (9 - 1 + 1) + 1;
            while (array[i][j] == ran)
            {
                
            }
            
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
