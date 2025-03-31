#include <iostream>
#include <vector>
#include <list>
#include <algorithm> 
#include <iterator> 
using namespace std;

int main() {
    vector <int> First = { 1, 2, 3, 4, 5 };
    list <int> Second;    

    transform(First.begin(), First.end(), back_inserter(Second), [] (int x) { return x++; });

    cout << "Result of transform (First, Second, [x++]) - Second: ";

    for (int i : Second) cout << i << "  ";
    cout << endl;

    //for_each(Second.begin(), Second.end(), [](int i) { cout << i << "  "; });
    //cout << endl;


    //copy(Second.begin(), Second.end(), ostream_iterator<int>(cout, "  "));
    //cout << endl;


    //vector<int> F;
    // 
    //cout << "Input data: ";
    //copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(F));
    // 
    ////int x;
    ////while (cin >> x) {
    ////    F.push_back(x);
    ////}
    // 
    //cout << "Output data: ";
    //copy(F.begin(), F.end(), ostream_iterator<int>(cout, "  "));
    //cout << endl;
    //
    //cout << "Next output: \n";
    //copy(F.begin(), F.end(), ostream_iterator<int>(cout, "\n"));

    return 0;
}


