#include<iostream>
using namespace std;

int main(){
	
	int quant;
	int choice;
	
	// Quantity for food items in inventory
	int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
	
	// Quantity for sold food items
	int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
	
	//Price of these
	int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

	cout<<"\n\t Quantity of items we have: ";
	cout<<"\n Rooms available: ";
	cin>>Qrooms;
	cout<<"\n Quantity of Pasta available: ";	
	cin>>Qpasta;
	cout<<"\n Quantity of Burger available: ";	
	cin>>Qburger;
	cout<<"\n Quantity of Noodles available: ";
	cin>>Qnoodles;
	cout<<"\n Quantity of Shake available: ";
	cin>>Qshake;
	cout<<"\n Quantity of Chicken-rolls available: ";
	cin>>Qchicken;
	
	m:
	cout<<"\n\t\t\t Please select from the menu options ";
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Pasta";
	cout<<"\n3) Burger";
	cout<<"\n4) Noodles";	
	cout<<"\n5) Shake";
	cout<<"\n6) Chicken-rolls";
	cout<<"\n7) Information regarding collection and sales";
	cout<<"\n8) Exit";
	
	cout<<"\n\n Please enter your choice! ";
	cin>>choice;
	
	switch(choice){
		case 1: cout<<"\n\n Enter the number of rooms you want: ";
		cin>>quant;
		if(Qrooms-Srooms >= quant){
			Srooms = Srooms + quant;
			Total_rooms=Total_rooms+quant*1200;
			cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you!";
		} else 
			cout<<"\n\tOnly "<<Qrooms -Srooms<<" Rooms remaining in hotel";
			break;
			
			case 2: cout<<"\n\n Enter Pasta quantity : ";
		cin>>quant;
		if(Qpasta - Spasta >= quant){
			Spasta = Spasta + quant;
			Total_pasta=Total_pasta+quant*250;
			cout<<"\n\n\t\t"<<quant<<" Pasta is the order!";
		} else 
			cout<<"\n\tOnly "<<Qpasta -Spasta<<" Pasta remaining in hotel";
			break;
	
	
	case 3: cout<<"\n\n Enter Burger quantity : ";
		cin>>quant;
		if(Qburger - Sburger >= quant){
			Sburger = Sburger + quant;
			Total_burger=Total_burger+quant*120;
			cout<<"\n\n\t\t"<<quant<<" Burger is the order!";
		} else 
			cout<<"\n\tOnly "<<Qburger -Sburger<<" Burger remaining in hotel";
			break;
	
	
	case 4: cout<<"\n\n Enter Noodles quantity : ";
		cin>>quant;
		if(Qnoodles - Snoodles >= quant){
			Snoodles = Snoodles + quant;
			Total_noodles=Total_noodles+quant*140;
			cout<<"\n\n\t\t"<<quant<<" Noodles is the order!";
		} else 
			cout<<"\n\tOnly "<<Qnoodles -Snoodles<<" Noodles remaining in hotel";
			break;
	
	
		case 5: cout<<"\n\n Enter Shake quantity : ";
		cin>>quant;
		if(Qshake - Sshake >= quant){
			Sshake = Sshake + quant;
			Total_shake=Total_shake+quant*120;
			cout<<"\n\n\t\t"<<quant<<" Shake is the order!";
		} else 
			cout<<"\n\tOnly "<<Qshake -Sshake<<" Shake remaining in hotel";
			break;
	
	
		case 6: cout<<"\n\n Enter Chicken-roll quantity : ";
		cin>>quant;
		if(Qchicken - Schicken >= quant){
			Schicken = Schicken + quant;
			Total_chicken=Total_chicken+quant*150;
			cout<<"\n\n\t\t"<<quant<<" Chicken-roll is the order!";
		} else 
			cout<<"\n\tOnly "<<Qchicken -Schicken<<" Chicken-roll remaining in hotel";
			break;
	
	
		case 7: 
				cout<<"\n\t\tDetails of sales and collection ";
				cout<<"\n\n Number of rooms we had : "<<Qrooms;
				cout<<"\n\n Number of rooms we gave for rent : "<<Srooms;
				cout<<"\n\n Reaminig rooms: "<<Qrooms-Srooms;
				cout<<"\n\n Total room collection for the day: "<<Total_rooms;
				
				
				
				cout<<"\n\n Number of Pasta we had : "<<Qpasta;
				cout<<"\n\n Number of Pasta we gave for rent : "<<Spasta;
				cout<<"\n\n Reaminig Pasta: "<<Qpasta-Spasta;
				cout<<"\n\n Total Pasta collection for the day: "<<Total_pasta;
				
	
				
				cout<<"\n\n Number of Burger we had : "<<Qburger;
				cout<<"\n\n Number of Burger we gave for rent : "<<Sburger;
				cout<<"\n\n Reaminig Burger: "<<Qburger-Sburger;
				cout<<"\n\n Total Burger collection for the day: "<<Total_burger;
	
	
			
				cout<<"\n\n Number of Noodles we had : "<<Qnoodles;
				cout<<"\n\n Number of Noodles we gave for rent : "<<Snoodles;
				cout<<"\n\n Reaminig Noodles: "<<Qnoodles-Snoodles;
				cout<<"\n\n Total Noodles collection for the day: "<<Total_noodles;
	
				

				cout<<"\n\n Number of Shake we had : "<<Qshake;
				cout<<"\n\n Number of Shake we gave for rent : "<<Sshake;
				cout<<"\n\n Reaminig Shake: "<<Qshake-Sshake;
				cout<<"\n\n Total Shake collection for the day: "<<Total_shake;
				
				
				cout<<"\n\n Number of Chicken-rolls we had : "<<Qchicken;
				cout<<"\n\n Number of Chicken-rolls we gave for rent : "<<Schicken;
				cout<<"\n\n Reaminig Chicken-rolls: "<<Qchicken-Schicken;
				cout<<"\n\n Total Chicken-rolls collection for the day: "<<Total_chicken;
	
		case 8: 
			exit(0);
			
		default:
			cout<<"\n Please select from the numbers mentioned above!";	
	
	}
	
	goto m;
	
	return 0;
}
