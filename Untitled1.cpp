#include<iostream>
using namespace std;

void makeSieve(int n){
	bool isPrime[n+1];
	for(int i=0;i<=n;i++){
		isPrime[i]=true;
//		cout<<isPrime[i]<<"\t";
	}
	isPrime[0]=false;	//*0* nor prime nor composite
	isPrime[1]=false;	//*1* nor prime nor composite
	for(int i=2;i*i<=n;i++){
		if(isPrime[i]==true){
//			cout<<isPrime[i]<<"\t";
			for(int j=i*i;j<=n;j+=i){	//This is puting vale of i multiple as false
				isPrime[j]=false;  // as they will be composite, eg: 2 mltiple 4,6,8....;3:3,6,9,...
//				cout<<isPrime[i]<<"\t";
//		
			}
		}
	}
//	clrscr();
	system("CLS");	//to clear screen
	cout<<0<<" : "<<"nor prime nor composite\n";
	cout<<0<<" : "<<"nor prime nor composite\n";
	for(int i=2;i<=n;i++){
		
		cout<<i<<" : ";
		if(isPrime[i]==true){
			cout<<"prime"<<endl;
		}else{
			cout<<"composite"<<endl;
		}
//		cout<<i<<" : "<<isPrime[i]<<"\n";
	}
	
}

int main(){
	int n;
	cin >> n;
	makeSieve(n);
	return 0;
}
