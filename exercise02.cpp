#include <iostream>
using namespace std;

int volume(int height, int width, int length);

int main() {
    int box1Height, box1Width, box1Length;
    int box2Height, box2Width, box2Length;
    int totalVolume, totalSurface;

    cout << "Enter Box 1 Height : ";
    cin >> box1Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1Length;

    cout << endl;
    cout << "Enter Box 2 Height : ";
    cin >> box2Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2Length;

    int volume1 = volume(box1Height, box1Width, box1Length);


    int volume2 = volume(box2Height, box2Width, box2Length);

    totalVolume = volume1 + volume2;

    cout << "Volume of Box is " << totalVolume << endl;

    return 0;
}

int volume(int height, int width, int length)
{

    int a;
    a = height * width * length;
    return a;
}

