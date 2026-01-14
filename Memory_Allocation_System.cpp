#include <iostream>
using namespace std;
int main() {
    int filesize;
    int memory  [1024]= {0}; // Example block size of 1024 bytes
    cout << "Memory Allocation System Initialized." << endl;
    cout << "Enter the size of the file to be stored (in blocks): "<< endl;
    cin >>filesize;
    int allocatedCount = 0;
    if (filesize > 1024) {
        cout << "Error: File size exceeds memory capacity." << endl;
        return 1;
    }
    for (int i = 0; i < 1024; i++) {
       if (memory[i] == 0 && allocatedCount < filesize) {
            memory[i] = 1; // Mark block as allocated
            allocatedCount++;
            
        } 
    }
        if(allocatedCount == filesize) {
                cout << "File of size " << filesize << " blocks allocated successfully." << endl;
              
            }

            cout<<"---Current Memory Status---"<<endl;
            cout << " .= Free Block, X = Allocated Block" << endl;
            cout << endl;
            for (int i = 0; i < 1024; i++) {
            if (memory[i] == 0) {
                cout << "."<<"  ";
            } else {
                cout << "X"<<"  ";
            }
            if ((i + 1) % 32 == 0) { // New line after every 32 blocks for better readability
                cout << endl;
            }
        }

        
    return 0;
}