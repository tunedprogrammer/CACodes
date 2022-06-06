#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int findOptimalTime(vector<int> a, int n) {
 // since we want two minimums at a time
 // create a min heap
 priority_queue<int, vector<int>, greater<int>> pq;
 // push the sizes to pq
 for(int i=0; i<n; i++)
 pq.push(a[i]);
 int result = 0;
 while(pq.size() > 1) {
 // pop two smallest from min heap
 int first = pq.top();
 pq.pop();
 int second = pq.top();
 pq.pop();
 // total time to merge these two
 int temp = first + second;
 // add it to result
 result += temp;
 // add the combined list to pq
 pq.push(temp);
 }
 return result;
}
int main() {
 int n;
 cin>>n;
 vector<int> v(n);
 for(int i=0; i<n; i++) {
 cin>>v[i];
 }
int result = findOptimalTime(v, n);
 cout<<"Output: "<<result;
}
