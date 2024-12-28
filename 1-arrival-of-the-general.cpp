#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int heights[100];
    int max_index = 0;
    int min_index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (heights[i] > heights[max_index])
        {
            max_index = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (heights[i] <= heights[min_index])
        {
            min_index = i;
        }
    }
    int swaps = max_index + (n - 1 - min_index);
    if (max_index > min_index)
    {
        swaps = swaps - 1;
    }
    cout << swaps << endl;
}