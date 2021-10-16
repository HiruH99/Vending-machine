#include<iostream>

using namespace std;

int main(){
	int n;
	int seats[10];
	int cl1=0,ecn=5; // 1cl-1st class, ecn-economy
	
	for(int i=0;i<10;i++)
	seats[i]=0;
	
	while(cl1<5 || ecn<10){
		cout<<"\n Welcome to Miniairlines"<<endl;
		cout<<"***************************"<<endl;
		
		int choice=0;
		cout<<endl;
		cout<<"Please type 1 for first class reservation"<<endl;
		cout<<"Please type 2 for Economy class reservation"<<endl;
		cout<<endl;
		cout<<"Enter the desired section number : ";
		cin>>choice;
		
		while(!(choice>=1&&choice<=2)){
			cout<<"Section number is invalid, please enter the desired section again...."<<endl;
			cout<<endl;
			cout<<"Please type 1 for first class reservation"<<endl;
			cout<<"Please type 2 for Economy class reservation"<<endl;
			cout<<endl;
			cout<<"Enter the desired section number"<<endl;
			cin>>choice;
			cout<<endl;
		}
		
		//1st class reservation
		if (choice==1){
			
				if(cl1<5){
					cout<<"\n Boarding Pass "<<endl;
					cout<<"*****************"<<endl;
					cout<<"Section first class"<<endl;
					cout<<"Seat Number is "<<(cl1+1)<<endl;
					cout<<"**Have a safe flight**"<<endl;
					seats[cl1]+1;
					cl1++;
					cout<<endl;
					cout<<"Enter any number to continue"<<endl;
					cin>>n;
				}
				
			else if(ecn<10){
				char choice='\0';
				while(!(choice=='Y'|| choice=='N')){
					cout<<"\n First class is full, is it okay with a seat in economy section..."<<endl;
					cout<<"\n If yes enter Y / If no enter N "<<endl;
					cin>>choice;
					
					if(!(choice=='Y'|| choice=='N')){
						cout<<"Invalid input, please re-enter..."<<endl;
							}
				}
				cout<<endl;
				
				if(choice=='Y'){
					cout<<"\n Boarding Pass "<<endl;
					cout<<"******************"<<endl;
					cout<<"Section economy "<<endl;
					cout<<"Seat Number is "<<(ecn+1)<<endl;
					cout<<"**Have a safe flight**"<<endl;
					seats[ecn]+1;
					ecn++;
					cout<<endl;
					cout<<"Enter any number to continue"<<endl;
					cin>>n;
				}
				else if(choice=='N'){
					cout<<"Next flight leaves in 2 hours "<<endl;
					cout<<endl;
			}
		}
	}
		
		//economy reservation
		if (choice==2){
			
				if(ecn<10){
					cout<<"\n Boarding Pass "<<endl;
					cout<<"*****************"<<endl;
					cout<<"Section economy"<<endl;
					cout<<"Seat Number is "<<(ecn+1)<<endl;
					cout<<"**Have a safe flight**"<<endl;
					seats[ecn]+1;
					ecn++;
					cout<<endl;
					cout<<"Enter any number  to continue"<<endl;
					cin>>n;
				}
				
			else if(cl1<5){
				char choice='\0';
				while(!(choice=='Y'|| choice=='N')){
					cout<<"\n Economy is full, is it okay with a seat in first class section..."<<endl;
					cout<<"\n If yes enter Y / If no enter N "<<endl;
					cin>>choice;
					
					if(!(choice=='Y'|| choice=='N')){
						cout<<"Invalid input, please re-enter..."<<endl;
							}
				}
				cout<<endl;
				
				if(choice=='Y'){
					cout<<"\n Boarding Pass "<<endl;
					cout<<"******************"<<endl;
					cout<<"Section first class "<<endl;
					cout<<"Seat Number is "<<(cl1+1)<<endl;
					cout<<"**Have a safe flight**"<<endl;
					seats[cl1]+1;
					cl1++;
					cout<<endl;
					cout<<"Enter any number to continue"<<endl;
					cin>>n;
				}
				else if(choice=='N'){
					cout<<"Next flight leaves in 2 hours "<<endl;
					cout<<endl;
				}
			}
		}
	}
	cout<<"****All seats are full, sorry for the inconvenience..****"<<endl;
	cout<<"*********Next flight will be leaving in 2 hours**********"<<endl;
	cout<<"                        Thank you                        "<<endl;
	return 0;
}
