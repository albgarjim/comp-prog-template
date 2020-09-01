#define DEBUG
#include <bits/stdc++.h>
#ifndef DEBUG
#define inp (cin)
#define out (cout)
#define log(a)
#define dbga(a)
#endif
#ifdef DEBUG
#include "./Helpers/debug.cpp"
#include "./Helpers/files.cpp"
#define inp (ifs)
#define out (ofs)
#define log(a) cout << __LINE__ << "-> " << a << "\n"
#endif
using namespace std;
#define foor(I, a, b) for (int I = a; I < b; I++)
#define vii vector<int>
#define vdd vector<double>
#define vss vector<string>
#define el "\n"

//===========================================================
template <typename T>
bool cmp_min_max(const T &a, const T &b) {
    return a < b;
}
template <typename T>
bool cmp_max_min(const T &a, const T &b) { return a > b; }
template <typename T>
T miin(const T &a, const T &b) { return (a) < (b) ? (a) : (b); }
template <typename T>
T maax(const T &a, const T &b) { return (a) > (b) ? (a) : (b); }

string getString(char x) {
    string s(1, x);

    return s;
}

vector<float> StrSplit(string &_s, char c) {
    std::replace(_s.begin(), _s.end(), c, ' ');  // replace ':' by ' '

    vector<float> array;
    stringstream ss(_s);
    int temp;
    while (ss >> temp)
        array.push_back(temp);

    return array;
}

bool StrContains(string &_s, char &_c) {
    return _s.find(_c) != std::string::npos;
}

void StrRemoveChar(string &_s, char _c) {
    _s.erase(remove(_s.begin(), _s.end(), _c), _s.end());
}
int CalcMid(int _num) {
    if (_num % 2 == 0) {
        return _num / 2;
    } else {
        return _num / 2 + 1;
    }
}
void StrToLower(string &_s) {
    std::for_each(_s.begin(), _s.end(), [](char &c) {
        c = ::tolower(c);
    });
}
// priority_queue <int, vector<int>, greater<int> > pq;
/*






























*/

int main(void) {
    int TT, n1, n2;
    inp >> TT;

    foor(I, 0, TT) {
        inp >> n1 >> n2;

        if (n1 > n2) {
            out << ">" << el;
        } else if (n1 == n2) {
            out << "=" << el;
        } else {
            out << "<" << el;
        }
    }
}
