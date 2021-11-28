#include<iostream>
using namespace std;
int prime(int);
int main(){
	int i = 1,n,k;
	cout<<"Enter a positive integer: ";
	cin>>n;
	k = n;
	while(i<=n){
		if(prime(i) == 1 && prime(k) == 1){
			if(i + k == n){
				cout<<n<<" = "<<i<<" + "<<k;
				cout<<"\n";
			}
		}
		k--;
		if(k < i){
			i++;
			k = n;
		}
		if(i == n){
			break;
		}
	}
	return 0;
}
//function to check for prime
int prime(int n){             
	int i = 1,count = 0;
	while(i <= n){
		if(n % i == 0){
			count++;
		}
		i++;
	}
	if(count == 2){
		return 1;
	}
	return 0;
}
