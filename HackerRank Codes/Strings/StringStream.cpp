#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> ans;
    string s;
    for(int i=0 ; i<str.size() ; i++)
    {
        if(str[i]!=',')
        {
            s += str[i];
        }
        else 
        {
            ans.push_back(stoi(s));
            s = "";
        }
    }
    ans.push_back(stoi(s));
    return ans;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
