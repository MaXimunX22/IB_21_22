#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief This Function cancatenate two vector
 * 
 * @param V1 Vector1
 * @param V2 Vector2
 * @return vector<int> Result of the concatenation
 */
vector<int> concatenation(const vector<int> & V1, const vector<int> & V2){
  vector<int> concatenated_vector{V1};
  for (int i{0}; i < V2.size(); ++i) {
    concatenated_vector.push_back(V2[i]);
  }
  return concatenated_vector;
}


int main() {
  int n1;
  while (cin >> n1) {
    vector<int> V1(n1);
    for (int i = 0; i < n1; ++i) cin >> V1[i];
    int n2;
    cin >> n2;
    vector<int> V2(n2);
    for (int i = 0; i < n2; ++i) cin >> V2[i];
    vector<int> res = concatenation(V1, V2);
    cout << res.size() << endl;
    for (int i = 0; i < (int)res.size(); ++i) cout << " " << res[i];
    cout << endl;
  }
}