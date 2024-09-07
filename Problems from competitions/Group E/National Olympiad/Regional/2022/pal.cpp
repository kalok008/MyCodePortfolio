#include <iostream>
#include <vector>
using namespace std;
bool palindrom(int x);
int main() {
	int T;
	cin >> T;
	int arr[T][3];
	for(int i=0; i<T; i++) {
		for(int j=0; j<3; j++) {
			cin>>arr[i][j];
		}
	}

	for(int i=0; i<T; i++) {
		int a = arr[i][0];
		int b = arr[i][1];
		int c = arr[i][2];
		int count = 0;
		vector <int> pos;
		while(a<=b) {
			if(palindrom (a) == true) {
				pos.push_back(a);
				count++;
			}
			a+=c;
		}
		switch(count) {
		case 0:
			cout<<"0\n";
			break;

		case 1:
			cout<<"1\n";
			break;

		default:
			int max_distance=0, min_distance=10000000;
			for(int i=0; i<pos.size()- 1; i++) {
				int dist = pos.at(i+1)-pos.at(i);
				max_distance= max(max_distance, dist);
				min_distance= min(min_distance, dist);
			}
			cout<<pos.size()<<' '<<min_distance-1<<' '<<max_distance-1<<endl;
		}
	}

	return 0;
}
bool palindrom(int x) {
	int reversed = 0;
	int original = x;
	while(x>0) {
		reversed = reversed * 10 + x%10;
		x /= 10;
	}
	return reversed == original;
}
