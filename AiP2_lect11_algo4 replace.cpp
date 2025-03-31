#include <iostream>
#include <vector>       // або інший контейнер
#include <algorithm> 
using namespace std;

int main()
{
    vector<int> vec = { 1, 2, 3, 4, 5, 2, 6 };

    cout << "vec : ";
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, "  "));
    cout << endl;

    replace(vec.begin(), vec.end(), 2, 99);
    cout << "vec : ";
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, "  "));
    cout << endl;

    replace_if(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; }, 88);
    cout << "vec : ";
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, "  "));
    cout << endl << endl;

    vector<int> out;
    replace_copy(vec.begin(), vec.end(), back_inserter(out), 88, 100);
    cout << "vec : ";
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, "  "));
    cout << endl;

    cout << "out : ";
    copy(out.begin(), out.end(), ostream_iterator<int>(cout, "  "));
    cout << endl << endl;


    vector<int> out2;
    replace_copy_if(vec.begin(), vec.end(), back_inserter(out2), [](int x) { return x > 4; }, 777);
    cout << "vec : ";
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, "  "));
    cout << endl;

    cout << "out2 : ";
    copy(out2.begin(), out2.end(), ostream_iterator<int>(cout, "  "));
    cout << endl;
}