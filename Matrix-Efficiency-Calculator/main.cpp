#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int SizeX, SizeY;
    cin >> SizeX;
    cin >> SizeY;
    int tirednessMap[SizeX][SizeY];
    for (int i = 0; i < SizeX; i++)
    {
        for (int j = 0; j < SizeY; j++)
        {
            tirednessMap[i][j] = 0;
        }
    }
    int year;
    int a;

    cin >> year;
    cin >> a;
    while (year <= 2020)
    {
        for (int i = 0; i < a; i++)
        {
            int startXCoord, endXCoord, startYCoord, endYCoord;
            cin >> startXCoord;
            cin >> startYCoord;
            cin >> endXCoord;
            cin >> endYCoord;
            for (int i = startXCoord; i <= endXCoord; i++)
            {
                for (int j = startYCoord; j <= endYCoord; j++)
                {
                    tirednessMap[i][j]++;
                    tirednessMap[i][j]++;
                }
            }
        }
        for (int i = 0; i < SizeX; i++)
        {
            for (int j = 0; j < SizeY; j++)
            {
                if (tirednessMap[i][j] > 0)
                {
                    tirednessMap[i][j]--;
                }
            }
        }
        if (year == 2017)
        {
            break;
        }
        cin >> year;
        cin >> a;
    }

    for (int i = 0; i < SizeY; i++)
    {
        for (int j = 0; j < SizeX; j++)
        {
            cout << tirednessMap[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
