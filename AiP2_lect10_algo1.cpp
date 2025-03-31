#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

//bool odd(int x) { return (x % 2); }
//

//void oper1(int x) { cout << x << "  "; }
// 

//void oper2(int& x) { x = x * 2; }
// 

int main() {
    vector <int> V = { -2, 1, 2, 3, 2, -8, 4, 2, -5, 9, 11 };

    for (int i : V) cout << i << "  ";
    cout << endl;

    cout << "count (2) : " << count(V.begin(), V.end(), 2);
    cout << endl;

    cout << "find (2) : " << *find(V.begin(), V.end(), 2);      // 32
    cout << endl;

    cout << "min_element : " << *min_element(V.begin(), V.end());
    cout << endl;

    //cout << "count_if (odd) : " << count_if(V.begin(), V.end(), odd); 
    //cout << endl;

    //cout << "find_if (odd): ";
    // ???
    
    //auto it = find_if(V.begin(), V.end(), odd);
    //if (it != V.end())
    //    cout << *it << endl;
    //else
    //    cout << "element not found" << endl;

    //cout << "count_if [] : " << count_if(V.begin(), V.end(), [](int x){ return x % 2 == 0; } );   // ???
    //cout << endl;

    /*******  for_ each() *******/

    //cout << "for_each (oper1) : ";
    //for_each(V.begin(), V.end(), oper1);     
    //cout << endl;

    //cout << "for_each [oper1] : ";
    // ???

    //for_each(V.begin(), V.end(), [](int x){ cout << x << "  "; } );      // oper1
    //cout << endl;

    /*******  for_ each() - 2 *******/
    //cout << "for_each (oper2) : ";
    //for_each(V.begin(), V.end(), oper2);
    //cout << " [done] " << endl;
    // 
    //cout << "Result of for_each (oper2): "; 
    //for (int i : V) cout << i << "  ";
    //cout << endl;

    return 0;
}




