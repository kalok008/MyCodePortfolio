#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int arr[n][2];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin>>arr[i][j];
        }
    }
    
    int count = 0;
    vector<int> razgovori;
    bool possible = true;
    
    for(int i = 1; i < n; i++){
        
        int a = arr[i-1][0];
        int b = arr[i-1][1];
        int c = arr[i][0];
        int d = arr[i][1];
        
        if(a>=c && b>=d){
            continue;
        }else if(a>=c && b<d && d>a){
            possible = false;
            break;
        }else if(a>=c && b<d && d<=a && c>b){
            possible = false;
            break;
        }else if(a>=c && b<d && d<=a && c<=b){
            
            count++;
            razgovori.push_back(i);
            arr[i-1][0] = b;
            arr[i-1][1] = a;
            
        }else if(a<c && b>=d && c>b){
            possible = false;
            break;
        }else if(a<c && b>=d && c<=b && d>a){
            possible = false;
            break;
        }else if(a<c && b>=d && c<=b && d<=a){
            count++;
            razgovori.push_back(i + 1);
            arr[i][0] = d;
            arr[i][1] = c;
        }else if(a<c && b<d && c>d){
            possible = false;
            break;
        }else if(a<c && b<d && d>a){
            possible = false;
            break;
        }else if(a<c && b<d && d<=a && c<=b){
            count++;
            razgovori.push_back(i + 1);
            arr[i][0] = d;
            arr[i][1] = c;
        }
    }
    
    if(possible){
        cout<<count<<endl;
        for(int i=0; i<razgovori.size(); i++){
            cout<<razgovori[i]<<' ';
        }
    }else{
        cout<<"Impossible!";
    }
    return 0;
}
