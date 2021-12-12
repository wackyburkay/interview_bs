#include <iostream>
#include <algorithm>
#include <vector>
#include <execution>

using namespace std;
void printVector(vector<int> vec, string name){
    cout << "Vector: " << name << endl;
    for(auto x:vec){
        cout << x << "" << endl;
    }
}

using namespace std;
int main() {

    vector<int> tickets{5};

    sort(tickets.begin(), tickets.end());

    //delete this line, only for debugging.
    printVector(tickets, "tickets");

    vector<int> temp;
    int i,j;
    int maxNum = 0;

    for(i=0;i<tickets.size();i++){
        temp.clear();
        for(j=i;j<tickets.size();j++){
            int diff = tickets[j+1]-tickets[j];
            if(diff == 0 || diff == 1 || diff == -1 || j == tickets.size()-1){
                temp.push_back(tickets[j]);
            } else {
                temp.push_back(tickets[j]);
                break;
            }
        }
        //delete this line, only for debugging.
        printVector(temp, "temp");
        if(temp.size()> maxNum){
            maxNum = temp.size();
        }
    }

    cout << "\nEnd Result: Maximum "<< maxNum << " elements can be written in a subsequence." << endl;

}
