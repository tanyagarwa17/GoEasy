#include<iostream>

using namespace std;
int i;
class Item
{
	int itemcode[50];
  	float itemprice[50];  
  	int count;
  	
	public:
 	inline init()
  	{
    	count=0;
  	}
  	void addItem();
  	void removeItem();
  	void displayTotal();
  	void viewItem();
};

void Item::addItem()
{
  cout<<"1:SHAMPOO \n\n a-sunsilk(10) \n b-tresemme(11) \n c-patanjali(12) \n\n 2:SOAP \n\n a-pears(21) \n b-khadi(22) \n c-dove(31) \n"<<endl;
  cout<<"3:TOOTHPASTE \n\n a-colgate(8) \n b-sensodyne(9)\n c-dabur(7)";
  cout<<"\n\n 4:FACEWASH \n\n a-ponds(67) \n b-himalaya(99) \n c-dermaco(88) \n\n 5:CONDITIONER \n\n a-loreal(93) \n b-matrix(56) \n c-tresemme(55) \n\n"<<endl;
  cout<<"_____________"<<endl;
  cout<<"Enter  code for an item:";
  cin>>itemcode[count];
  cout<<"Enter price for an item:";
  cin>>itemprice[count];
  count++;
}

void Item::removeItem()
{
  int rem;
  cout<<"Enter code for an item:";
  cin>>rem;
  for(i=0;i<count;i++)
  if(itemcode[i]==rem)
  itemprice[i]=0;
}

void Item::displayTotal()
{
  int sum=0;
  cout<<"Your total bill is=";
  for(i=0;i<count;i++)
  sum=sum+itemprice[i];
  cout<<" "<<sum<<"/-";
}

void Item::viewItem()
{
  for(i=0;i<count;i++)
  {
    cout<<itemcode[i]<<" ";
    cout<<itemprice[i]<<"/-"<<endl;
  }
}

int main()
{
  Item order;
  order.init();
  int choice;
  do
  {
 	cout<<"\nWelcome to GOEASY !!\n";
 	cout<<"________________________________"<<endl;
  	cout<<"Select one of the following: \n";
  	cout<<"1:Add item\n";
	cout<<"2:Remove item\n";
	cout<<"3:View all items\n";
 	cout<<"4:Display total price of item\n";
 	cout<<"5:Quit\n";
 	cout<<"Enter you choice:";
 	cin>>choice;
 	switch(choice)
 	{
  	 	case 1: 
    		cout<<"___________"<<endl;
        	order.addItem();
        	break;
   		case 2:
      		order.removeItem();
      		break;
    	case 4:
     		order.displayTotal();
     		cout<<"\n *********thankyou********* \n\n";
     		break;
   		case 3:
    		order.viewItem();
     		break;
   		case 5:
			exit(0);
  	}
  }
  while(1);	
  return 0;
} 
