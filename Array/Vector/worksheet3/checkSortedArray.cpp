#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v) {
    bool flag = true;
    for (int i=0;i<v.size()-1;i++){
        if(v[i] > v[i+1]){
            flag = false;
            break;
        }
    }
    if (flag) cout << "sorted"; else cout << "unsorted";
}
int main() {
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(10);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    display(v1);
}
