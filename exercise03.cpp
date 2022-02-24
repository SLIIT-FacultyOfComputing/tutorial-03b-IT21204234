
#include <iostream>

    using namespace std;

    int volume(int height, int width, int length);
    
    struct box {
        int height;
        int width;
        int length;
    };

    
    int main() 
    {
  
         box b1, b2;
        int totalVolume;

       
        cout << "Enter Box 1 Height : ";
        cin >> b1.height;
        cout << "Enter Box 1 Width : ";
        cin >> b1.width;
        cout << "Enter Box 1 Length : ";
        cin >> b1.length;

        totalVolume = volume(b1.height, b1.width, b1.length);

        cout << endl;
        cout << "Enter Box 2 Height : ";
        cin >> b2.height;
        cout << "Enter Box 2 Width : ";
        cin >> b2.width;
        cout << "Enter Box 2 Length : ";
        cin >> b2.length ;
        cout << endl;
    
        totalVolume =  totalVolume + volume(b2.height, b2.width, 
                        b2.length);
        
        cout<< endl ; 
        cout << "Volume of Box is " << totalVolume << endl;

        return 0;
    }

  
    int volume(int height, int width, int length)
    {
        int Volume = height * width * length;
        return Volume;
    }


