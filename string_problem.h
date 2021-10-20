#include<iostream>
#include<sstream>
#include<vector>
#include<string>

using namespace std;


// trim from start (in place)
static inline void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));
}

// trim from end (in place)
static inline void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}

// trim from both ends (in place)
static inline void trim(std::string &s) {
    ltrim(s);
    rtrim(s);
}


class Spliter{
    public:
    void split(string A, char delim, vector<string> &res);
};

void Spliter::split(string A, char delim, vector<string>&res){
    trim(A);
    stringstream ss(A);
    string item;
    while(getline(ss, item, delim)){
        if(item.size()) res.push_back(item);
    }
}