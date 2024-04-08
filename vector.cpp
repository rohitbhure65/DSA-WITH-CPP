#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    for(int i =1; i<=5; i++){
        v.push_back(i);
    }

    for(auto i = v.begin(); i != v.end();++i){
        cout<<*i<<" ";
    }
    for(auto i = v.rbegin(); i != v.rend(); ++i){
        cout<<*i<<" ";
    }

    vector<int> g1;

    for (auto i = 0; i < 5; i++)
    {
        g1.push_back(i);
    }

    cout<<"\n Size"<< g1.size();
    cout<<"\n Capacity"<< g1.capacity();
    cout<<"\n Max size"<< g1.max_size();

    g1.resize(4);

    cout<< "\n" << g1.size();

    g1.shrink_to_fit();
    cout << "\n Vector elements are :";
    for (auto i = g1.begin(); i != g1.end(); ++i){
        cout<< *i << " ";
    }   

    vector<int> v1, v2;
    v1.push_back(1);
    v2.push_back(2);
    v1.push_back(3);
    v2.push_back(4);

    v1.pop_back();
    v2.pop_back();

    v1.swap(v2);




    cout<< "\n Vector 1: ";
    for(int i = 0; i<v1.size();i++){
        cout<< v1[i] << " ";
    }
}