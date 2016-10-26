#include <iostream>
using namespace std;

int main()
{
      int sideSize = 3;
    
/*A*/ for (int row=1; row <= sideSize; row++) {
        for (int col=1; col <= row ; col++) {
/*B*/      cout << "* ";
        }
        for (int col=1; col <= sideSize - row ; col++) {
/*C*/      cout << "  ";
        }
        for (int col=1; col <= sideSize; col++) {
/*D*/      cout << "  ";
        }
        for (int col=1; col <= sideSize - row ; col++) {
/*E*/      cout << "  ";
        }
        for (int col=1; col <= row ; col++) {
/*F*/      cout << "* ";
        }        
        cout << endl;
    }
    
/*G*/ for (int row=1; row <= sideSize; row++) {
        for (int col=1; col <= sideSize; col++) {
/*H*/      cout << "  ";
        }
        for (int col=1; col <= sideSize; col++) {
/*I*/      cout << "* ";
        }
        cout << endl;
    }
    
/*J*/ for (int row=1; row <= sideSize; row++) {
        for (int col=sideSize; col >= row; col--) {
/*K*/      cout << "* ";
        }
        for (int col=sideSize; col-1 > sideSize-row; col--) {
/*L*/      cout << "  ";
        }
        for (int col=1; col <= sideSize; col++) {
/*M*/      cout << "  ";
        }
        for (int col=1; col < row; col++) {
/*N*/      cout << "  ";
        }
        for (int col=sideSize; col >= row; col--) {
/*O*/      cout << "* ";
        }    
        cout << endl;
      }   

      return 0;    
}