#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(4);
    cout <<"size: "<< v.size() << endl;
    cout << "capacity: "<<v.capacity() << endl;

    v.push_back(6);
    cout <<"size: "<< v.size() << endl;
    cout <<"capacity: "<< v.capacity() << endl;

    v.push_back(8);
    cout <<"size: "<< v.size() << endl;
    cout <<"capacity: "<< v.capacity() << endl;

    v.push_back(12);
    cout << "size: "<<v.size() << endl;
    cout << "capacity: "<<v.capacity() << endl;

    v.push_back(10);
    cout <<"size: "<< v.size() << endl;
    cout <<"capacity: "<< v.capacity() << endl;

    v.push_back(100);
    cout <<"size: "<< v.size() << endl;
    cout <<"capacity: "<< v.capacity() << endl;

    v.push_back(15);
    cout <<"size: "<< v.size() << endl;
    cout << "capacity: "<<v.capacity() << endl;
    v.resize(8);
    v.pop_back();
    v.pop_back();
    v.pop_back();
        v.pop_back();        v.pop_back();
        v.pop_back();


        cout << v.size() << endl;
            cout << v.capacity() << endl;



    return 0;
}
