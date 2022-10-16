#include <bits/stdc++.h>
using namespace std;

void print(vector<int> data){
    cout << "Total Elements: " << data.size() << "\n";
    for (int datam:data)
        cout << datam << " ";
    cout << "\n\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // vector < type > name (no_of_elements, default_value)

    vector <int> vect_array(5, 2); //int data[5];
    vector <int> v1 = {1,2,3};
     vector <int> v2{1,2,3};
    vector <int> v3 = vect_array;
    print(vect_array);


    // add elements
    vector <int> data = {13};
    // data.begin();
    // data.end();

    // insert(index, value)
    data.insert(data.begin(), 10);
    data.insert(data.begin(),2, 30);
    data.insert(data.begin() + 2, 68);
    data.insert(data.end(), 100);

    data.push_back(2);
    data.push_back(5);
    data.push_back(10);
    print(data);

    cout << data.front() << "\n";
    cout << data.back() << "\n";

    for (int d: data){
        cout << d << " ";
    }

    // to find the size
    int ln = data.size();


    // converting to array
    int *d = data.data();
    cout << d[2] << "\n";

    // update
    vector <int> data_2 = {3,4,2,5,2};
    data_2[3] = 40;
    cout << data_2[3] << "\n";


    // delete
    data_2.pop_back();

    print(data);

    // for multiple element
    // data_2.erase(data.begin()+2, data.begin() + 3);


    // all elements will be deleted
    // data_2.clear();
    return 0;
}
