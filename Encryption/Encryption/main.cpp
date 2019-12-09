#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "encrypt.hpp"
#include "encrypt.cpp"
using namespace std;

int main()
{
    int option;
    bool repeat = true;
    
    while (repeat == true)
    {
        cout << "Please slect an option from the menu below" << endl;
        cout << "1. Encrypt" << endl;
        cout << "2. Decrypt" << endl;
        cout << "3. End" << endl;
        cin >> option;
        cin.clear();
        cin.get();
        
        encryt read;
        
        switch (option)
        {
            case 1: encrypt();
                break;
            case 2: decrypt();
                break;
            case 3: exit(0);
                
        }
        
        
    }
    
    
}
