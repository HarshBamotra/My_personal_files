#include <iostream>
#include "graphics.h"
#include <cmath>

using namespace std;

void DDA(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps;
    float x_inc, y_inc, x, y;

    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    x_inc = dx / (float) steps;
    y_inc = dy / (float) steps;
    x = x1;
    y = y1;

    for (int i = 0; i <= steps; i++)
    {
        putpixel(x, y, WHITE);
        x += x_inc;
        y += y_inc;
    }
}

int main()
{
    // int x1 = 100, y1 = 150, x2 = 250, y2 = 200;
    double x1, y1, x2, y2;
    cout << "Enter the First Line Coordinates: ";
    cin >> x1 >> y1;
    cout << "Enter the Second Line Coordinates: ";
    cin >> x2 >> y2;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    float slope = (y2 - y1) / (float)(x2 - x1);

    if (abs(slope) > 1)
    {
        // handle case for slope > 1
        if (y1 > y2)
            DDA(y2, x2, y1, x1);
        else
            DDA(y1, x1, y2, x2);
    }
    else if (abs(slope) < 1)
    {
        // handle case for slope < 1
        DDA(x1, y1, x2, y2);
    }
    else if (slope == 0)
    {
        // handle case for slope = 0
        if (x1 > x2)
            DDA(x2, y2, x1, y1);
        else
            DDA(x1, y1, x2, y2);
    }
    getch();
    closegraph();
    return 0;
}
