#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length
struct Box
{
   int width ;
   int height ;
   int length ;
} ;
// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    
    // 3. Create a variable called box2 of the Box structure type
    struct Box box1 , box2 ;
    // int box2Height, box2Width, box2Length;
     int height, width, length;
    
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> box1.height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.length;

    cout<<"\n" ;
    
    cout << "Enter Box 1 Height : ";
    cin >> box2.height;
    cout << "Enter Box 1 Width : ";
    cin >> box2.width;
    cout << "Enter Box 1 Length : ";
    cin >> box2.length;

    cout<<endl ;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume( box1.length, box1.width , box1.height )
             + volume( box2.length, box2.width , box2.height );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
  int volume ;

  volume = height * length * width ;

  return volume ;
}