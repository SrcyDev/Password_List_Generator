// Made by SrcyDev (https://github.com/SrcyDev)
// Note : This file can generate passwords which can be in use and thus can be harmful. I intend no harm. This is for educational purposes only.Use at your own risk.
#include <iostream>
#include <fstream>

using namespace std;

void gen(string filename)    
{
    // Modify the items if necessary
    string gen_list[] = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","!","@","#","$","%","^","&","*","(",")","_","-","+","=","{","}","[","]"};
    int len = 80; // You need to modify this mannualy if you change number of items in gen_list   
    // This is the universal part
    // The basic logic is to implement loops which are equal to no. of characters
    // Each loop repeats through the gen_list[] array
    // Rigit-most character is the innermost loop
    // This one is for 8 characters    
    for (int d0 =0;d0 != len -1;d0++) 
    {
        for (int d1 = 0;d1 != len -1;d1++) 
        {
            for (int d2 = 0;d2 != len -1;d2 ++)
            {
                for (int d3 =0;d3 != len -1;d3++)
                {
                    for (int d4 = 0;d4 != len - 1;d4++)
                    {
                        for (int d5 = 0;d5 != len -1;d5++)
                        {
                            for (int d6 =0;d6 != len -1;d6++)
                            {
                                for (int d7 = 0; d7 != len -1;d7++)
                                {
                                    // Here the result is generated 
                                    // Add / remove char for more/less char 
                                    string result =  gen_list[d0] + gen_list[d1] + gen_list[d2] + gen_list[d3] + gen_list[d4] + gen_list[d5] + gen_list[d6] + gen_list[d7];
                                    
                                    // Do not modify unless you know what your are doing
                                    // Open a file and close it
                                    ofstream file;
                                    file.open(filename,ios::app); // open in append mode
                                    file << result << endl; // Write it , Estimated Size of File : 134217728 * 10 ^ 8 B OR 1.34217728E+16 B OR 5 ^ 3 * 10 ^ 5 GB; THAT'S HUGE (Note: Might be Wrong, estimated for 8 bits per char)
                                    file.close(); // Close it
                                    
                                }
                            }
                        }
                    }
                }
            }
        }    
    }
    
}

int main()
{
    string filename = "";
    cout << "Enter file name: ";
    cin >> filename;
    gen(filename);
    return 0;
}