#include <iostream>
#include <string.h>
#include <algorithm>
#include <list>
using namespace std;

// Utility function to reverse elements of an array
void reverse(int arr[], int n)
{
	for (int low = 0, high = n - 1; low < high; low++, high--) {
		swap(arr[low], arr[high]);
	}
}
int main() {
    string card;
    int SIZE,i,c;
    list<int> lista;
    cin >> card;
    SIZE = card.size();
    int ca[SIZE],ne[SIZE];
    for(int i=0;i<SIZE;i++){
        ca[i] = card[i]-48;
    }
    //SIZE = sizeof(ca)/sizeof(ca[0]);
    reverse(ca,SIZE);
    for(int i=1; i<SIZE;i=i+2){
        ca[i] = ca[i]*2;
    }
    for(int i=0;i<SIZE;i++){
        if(ca[i]>9){
            ca[i] = ca[i] - 9;
        }
    }
    int sum=0;
    for(int i=0;i<SIZE;i++){
        sum=sum+ca[i];
    }
    if(sum%10 == 0 && sizeof(ca)/sizeof(ca[0]) == 16){
        cout << "valid";
    }
    else{
        cout << "not valid";
    }


    return 0;
}
