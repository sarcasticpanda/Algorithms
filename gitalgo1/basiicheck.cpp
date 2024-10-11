//#include<isotream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 /*  
    //if u take a stirng using jsut cin it wiil take only 1 word befor space//
    string s1,s2;
    cin>>s1;//hey string
    cout<<s1;//hey 
    //to remove this error use getline
    getline(cin,s2)
    this will throw error getline reads new line of cin,use cinignore
   */
    // If you take a string using cin, it will take only one word before space.
    string s1, s2;
    cin >> s1;  // Input like: "hey string"
    cout << s1 << endl;  // Output will be: "hey" (only the first word)

    // To solve this problem, we use getline for the next string input.
    cin.ignore();  // Clear the leftover newline character from the input buffer.
    getline(cin, s2);  // Now getline will work as expected.
    cout << s2 << endl;
}
 
 