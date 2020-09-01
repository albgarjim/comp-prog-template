#include <stdio.h>
#include <queue>
#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <list>
#include <iomanip>
#include <math.h>
#include <sstream>
#include <numeric>
#include <stdlib.h>
#include <time.h>
#define GET_VARIABLE_NAME(Variable) (#Variable)
using namespace std;
#define el "\n"

/*
dbga means debug args and prints multiple variables on the same line
*/
template <typename T>
void print_args(T t) {
    std::cout << t << " " ;
}

template<typename T, typename... Args>
void print_args(T t, Args... args) {
    std::cout << t << " " ;
    print_args(args...);
}

// out << "Case #" << LLL + 1 << ": " << result << el;
template<typename T, typename... Args>
void dbga(T t, Args... args) {
	print_args(t, args...);
    std::cout << el;
}

/*
debug vector, prints a vector of variables
*/
template <typename T>
void dbga(vector<T>& vVector){
	cout << "vec -- >";
	for(auto it = vVector.begin(); it != vVector.end(); ++it){
		cout << *it << " ";
	}
	cout << el;
}

/*
debug matrix, prints a matrix of variables
*/
template <typename T>
void dbga(vector<vector<T>>& vVector){
	cout << "mat -- >" << el;
	for(auto it = vVector.begin(); it != vVector.end(); ++it){
		cout << "        ";
		for(auto it2 = it->begin(); it2 != it->end(); ++it2){
			cout << *it2 << " ";
		}
		cout << el;
	}
	cout << el;
}

// priority_queue<level, vector<level>, compare> one_star = {};
// struct compare
// {
//   bool operator()(const level& l, const level& r)
//   {
//       return l.stars > r.stars;
//   }
// };
