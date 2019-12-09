#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int encrypt()
{
    char ch;
    ifstream infile;
    string filename;
    cout << "Please enter the filename" << endl;
    getline(cin, filename);
    infile.open(filename, ios::in);
    
    if(!infile)
      {
          cout<<endl<<"Unable to open file";
          exit(0);
      }
    ofstream outfile;
    outfile.open(filename, ios::out | ios::trunc);
    
    while(!infile.eof())
    {
        string line;
        getline(infile,line);

        for(int i=0;i<line.length();i++)
        {
            ch=line.at(i);

            if(isspace(ch))
            {
                ch='$';
            }
            else if(isalpha(ch)|| ispunct(ch))
            {
                ch=(int)ch+4;
            }
            outfile<<ch;
        }
        outfile<<endl;
        cout << "File Encrypted" << endl;
    }
    return 0;
}
int decrypt()
{
    char ch;
    ifstream infile;
    string filename;
    cout << "Please enter the filename" << endl;
    getline(cin, filename);
    infile.open(filename, ios::in);
    
    if(!infile)
      {
          cout<<endl<<"Unable to open file";
          exit(0);
      }
    ofstream outfile;
    outfile.open(filename, ios::out | ios::trunc);
    
    while(!infile.eof())
    {
        string line;
        getline(infile,line);

        for(int i=0;i<line.length();i++)
        {
            ch=line.at(i);
            //cout<<ch;
            if(isspace(ch))
            {
                ch=' ';
            }
            else if(isalpha(ch)|| ispunct(ch))
            {
                ch=(int)ch-4;
            }
            outfile<<ch;
        }
        outfile<<endl;
    }
    cout << "File Decrypted" << endl;
    return 0;
}
