#include<bits/stdc++.h>
using namespace std;
int main(){
	pair<int,int> p[5] = {make_pair(1,2), make_pair(3,5), make_pair(2,-1), make_pair(4,5), make_pair(4,2)};
	priority_queue<pair<int,int> > q;
	for(int i=0; i<5; i++)
		q.push(p[i]);
	for(int i=0; i<5; i++){
		pair<int,int> x = q.top();
		q.pop();
		printf("(%d, %d)\n", x.first, x.second);
	}
	return 0;
}

