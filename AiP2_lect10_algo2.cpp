#include <iostream>
#include <vector>
#include <list>
#include <algorithm> 
//#include <functional> 

using namespace std;

int trans_1(int x) { return x * 2; }

int trans_2(int x, int y) { return x + y; }


int main() {
    vector <int> First = { 1, 2, 3, 4, 5 };
    vector <int> Second (First.size());     // list

    transform (First.begin(), First.end(), Second.begin(), trans_1);
    cout << "Result of transform (First, Second, trans_1) - Second: "; 
    for (int i : Second) cout << i << "  ";
    cout << endl;

    transform(Second.begin(), Second.end(), Second.begin(), trans_1);
    cout << "Result of transform (Second, Second, trans_1) - Second: ";
    for (int i : Second) cout << i << "  ";
    cout << endl;

    int first[] = { 1, 2, 3, 4, 5 };
    int second[] = { 10, 20, 30, 40, 50 };
    int results[5];

    cout << "first[]: ";
    for (int i : first) cout << i << "  ";
    cout << endl;

    cout << "second[]: ";
    for (int i : second) cout << i << "  ";
    cout << endl;

    transform(first, first + 5, second, results, trans_2);      // plus<int>() minus<>() multiplies <>()
                                                                // plus<int>(???)
    cout << "Result of transform (first, second, results, trans_2) - results: ";
    for (int i : results) cout << i << "  ";
    cout << endl;

    return 0;
}


