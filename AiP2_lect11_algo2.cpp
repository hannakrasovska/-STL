#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm> 
#include <functional> 

using namespace std;

int trans_1(int x) { return x * 2; }

int trans_2(int x, int y) { return x + y; }

int main() {
    vector <int> first = { 1, 2, 3, 4, 5 };
    list <int> second (first.size());     

    transform (first.begin(), first.end(), second.begin(), trans_1);
    cout << "Result of transform (First, Second, trans_1) - Second: "; 
    for (int i : second) cout << i << "  ";
    cout << endl;

    transform (second.begin(), second.end(), second.begin(), trans_1);
    cout << "Result of transform (Second, Second, trans_1) - Second: ";
    for (int i : second) cout << i << "  ";
    cout << endl;

    //deque <int> results (first.size());
    //
    //transform(first.begin(), first.end(), second.begin(), results.begin(), trans_2);      // plus<int>() minus<>() multiplies <>()
    //                                                                            // plus<int>(???)
    //cout << "Result of transform (first, second, results, trans_2) - results: ";
    //for (int i : results) cout << i << "  ";
    //cout << endl;

    return 0;
}


