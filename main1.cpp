# include <iostream>
# include <fstream>
# include <iomanip>
using namespace std;
void threeinfp(string , string );
void  fourinfo(string,string);
void fifeinfp(string,string);
void sixinfp(string , string );
void display();
void display1();
void speci();
void regis();
void choice ();
string choose(char);
void listb();
string toyo(string);
string Ford(string);
string Lifan(string);
string Nissan(string);
string Suzuki(string);
string BMW (string);
string Honda(string);
string Volkswagen(string);
int main ()
{   system("color 3E");
	display();
	ifstream cars ("CAR LISTES");
	system("cls");
	string MODEL;
	string num;
	int year;
	string BRAND;
	int Y;
	string  B;
	char a;
	string M;
	string color;
	int values;
	double price;
string colore;
int percent;

    cout<<"\n\n\t\t\tHello There\n";
    cout<<"\t\t\tWe hope you're doing Well.if you wouidn't mind,\n";
    cout<<"\t\t\tcould you kindly share with us the name of your desired car?\n";
    cout<<"\t\t\tyou input is highly valued,and we could be delighted to assist you in\n";
    cout<<"\t\t\tfinding the perfect the match for your automative needs.\n\n\n";
    int c;
    cout<<"\t\t\tYou want to see brand listes?"<<endl;
    cout<<"\t\t1,Yes"<<endl;
    cout<<"\t\t2,No"<<"\n\t\t";
    cout<<">>";
    cin>>c;
    	switch(c)
    {
    	case 1:
    		listb();
    		break;
    	case 2:
			display1();
			return 0;
			break;
		default:
		  cout<<"please try again!"<<endl;
		  break;	
	}  
	cout<<"Please Enter your first letter of Your choice:"<<"\n\t";
	cout<<">>";
	cin>>a; 
	B=choose(a);
	cout<<"Which Model do you prefer?"<<"\n\t";
	cout<<">>";
	cin>>M; 
	cout<<"Please enter Your choice of color(White,Red,Grey,Black,Blue):"<<"\n\t";
	cout<<">>";
    cin>>colore; 
	cout<<"Which year product do you prefer(1999 - 2024):"<<"\n\t";
	cout<<">>";
    cin>>Y; 
	cout<<"What price range you go for(16,000 - 3,500,000):"<<"\n\t";
	cout<<">>";
	cin>>price;
	system("cls");
	cout<<left<<setw(20)<<"BRAND"<<left<<setw(15)<<"MODEL"<<left<<setw(15)<<"COLORE"<<left<<
	setw(15)<<"YEAR"<<left<<setw(15)<<"PRICE($)"<<left<<setw(15)<<"PERCENTAGE(%)"<<endl;
	int n = 1;
     while(cars>>num,cars>>BRAND,cars>>MODEL,cars>>color,cars>>year,cars>>values)
     {
     	percent=0;
     	if(values<=price)
     	percent+=20;
     	if(B==BRAND)
     	percent+=20;
     	if(M==MODEL)
     	percent+=20;
     	if(colore==color)
     	percent+=20;
     	if(Y<=year)
     	percent+=20;
   	if(percent>=60)
  	cout<<left<<setw(20)<<BRAND<<left<<setw(15)<<MODEL<<
	  left<<setw(15)<<color<<left<<setw(15)<<year<<left<<setw(15)<<values<<left<<setw(15)
	  <<percent<<endl;
	 }
	 int p;
	 do{
	 	   cout<<"\t1, For More specification\n";
	       cout<<"\t2, Go For registration\n";
	       cout<<"\t0, To Exit\n\t";
	       cout<<">>";
	       cin>>p;
	       switch(p)
	       {
	       	case 1:
	       		speci();
	       		return 0;
	       	case 2:
	       		regis();
	       		return 0;
	       	case 0:
	       		display1();
	       	   	return 0;
	       	default:
			  cout<<"Wrong Choice please try Again:"<<endl;
		   }
	 }while(p!=0);  
	return 0;
} 
void display ()
{
	cout<<"***************************************************************\n*"<<endl;
	cout<<"*\t\tWELCOME TO CAR SELLING PROJECT!";
	cout<<"\n*\n*\n*\t\tThis is From Section two Group 4\t\t \n*";
	cout<<"\t\tOur project is about car sales            \n*";
	cout<<"\t\tIt will give the user lists of cars with their detail information.          \n*";
	cout<<"\t\tIt also register the user and reserve the desired Car            \n*";
	cout<<"\t\tfor some days if the user wantes to buy the car                  \n*";
	cout<<"\t\tstay with us !!!!!                          \n*";
	cout<<"\n*\n**************************************************************\n\n\n";
	system("pause");
}
void threeinfp(string p , string s)
        { 
        string cp,cp0,cp1,cp2,cp3,cp4,cp5,cp6,cp7,
        cp8,cp9,cp10,cp11,cp12,cp13,cp14;
		ifstream pop("threeinfo");      
        while (pop>>cp,pop>>cp0)
        {
                if (cp==p && cp0==s)
                {
			   pop>>cp1,pop>>cp2,pop>>cp3,pop>>cp4,
			   pop>>cp5,pop>>cp6
			   ,pop>>cp7,pop>>cp8,
			   pop>>cp9, pop>>cp10, pop>>cp11, pop>>cp12,pop>>cp13,
			   pop>>cp14;
			   cout<<"***************************************************************\n*"<<endl;
			   cout<<"*\n*\t\tEngine\t"<<"   "<<cp1<<endl;
			   cout<<"*\n*\t\tHorse power\t"<<"   "<<cp2<<" "<<cp3<<endl;
			   cout<<"*\n*\t\tTransmassion\t"<<"   "<<cp4<<"   "<<cp5<<endl;
			   cout<<"*\n*\t\tSeating capacity\t"<<"   "<<cp6<<endl;
			   cout<<"*\n*\t\tFeatures:\t"<<" "<<cp7<<"  "<<cp8<<endl;
			   cout<<"*\t\t\t\t"<<cp9<<" "<<cp10<<" "<<cp11<<endl;
			   cout<<"*\t\t\t\t"<<cp12<<" "<<cp13<<" "<<cp14<<endl;
			   cout<<"***************************************************************\n*"<<endl;
			   
	           	}
		}
		choice ();
	}
	
void fourinfo(string p , string s) 
         {   
          string cp,cp0,cp1,cp2,cp3,cp4,cp5,cp6,cp7,
                   cp8,cp9,cp10,cp11,cp12,cp13,cp14,cp15,cp16;
                    ifstream pop("FOURinfo");
		    while (pop>>cp,pop>>cp0) 
		    {
		    	
		    	
		    	
		       if (cp==p && cp0==s)
		       {	
			   pop>>cp1,pop>>cp2,pop>>cp3,pop>>cp4,
			   pop>>cp5,pop>>cp6
			   ,pop>>cp7,pop>>cp8,
			   pop>>cp9, pop>>cp10, pop>>cp11, pop>>cp12,pop>>cp13,
			    pop>>cp14, pop>>cp15, pop>>cp16;
			   cout<<"*************************************************************\n";
			   cout<<"*\n*\t\tEngine\t"<<cp1<<endl;
			   cout<<"*\n*\t\tHorse power\t"<<cp2<<" "<<cp3<<endl;
			   cout<<"*\n*\t\tTransmassion\t"<<" "<<cp4<<" "<<cp5<<endl;
			   cout<<"*\n*\t\tSeating capacity\t"<<"   "<<cp6<<endl;
			   cout<<"*\n*\t\tFeatures:\t"<<" "<<cp7<<"  "<<cp8<<endl;
			   cout<<"*\t\t\t\t"<<cp9<<" "<<cp10<<" "<<endl;
			   cout<<"*\t\t\t\t"<<cp11<<" "<<cp12<<" "<<" "<<cp13<<endl;
			   cout<<"*\t\t\t\t"<<cp14<<" "<<cp15<<" "<<cp16<<endl;
			   cout<<"**************************************************************" <<endl;
			   	}
	        }
	        choice ();
	    }
	    
	    
		void fifeinfp(string p , string s)
		{    
		string cp,cp0,cp1,cp2,cp3,cp4,cp5,cp6,cp7,
                   cp8,cp9,cp10,cp11,cp12,
				   cp13,cp14,cp15,cp16,cp17,cp18;
				    ifstream pop("FIFEinfo");
		       while (pop>>cp,pop>>cp0) 
		    {
		       if (cp==p && cp0==s)
		       {
			 
			   pop>>cp1,pop>>cp2,pop>>cp3,pop>>cp4,
			   pop>>cp5,pop>>cp6
			   ,pop>>cp7,pop>>cp8,
			   pop>>cp9, pop>>cp10, pop>>cp11, pop>>cp12,pop>>cp13,
			    pop>>cp14, pop>>cp15, pop>>cp16,pop>>cp17,pop>>cp18,
			   cout<<"*************************************************************\n";
			   cout<<"*\n*\t\tEngine\t"<<cp1<<endl;
			   cout<<"*\n*\t\tHorse power\t"<<cp2<<" "<<cp3<<endl;
			   cout<<"*\n*\t\tTransmassion\t"<<cp4<<"   "<<cp5<<endl;
			   cout<<"*\n*\t\tSeating capacity\t"<<cp6<<endl;
			   cout<<"*\n*\t\tFeatures:\t"<<cp7<<"  "<<cp8<<endl;
			   cout<<"*\t\t\t\t"<<cp9<<" "<<cp10<<" "<<endl;
			   cout<<"*\t\t\t\t"<<cp11<<" "<<cp12<<endl;
			   cout<<"*\t\t\t\t"<<cp13<<" "<<cp14<<" "<<cp15<<endl;
			   cout<<"*\t\t\t\t"<<cp16<<" "<<cp17<<" "<<cp18<<endl;
			   cout<<"**************************************************************\n";
	        	}
		}
		choice ();
	}
		void sixinfp(string p , string s)
		{   
		  	string cp,cp0,cp1,cp2,cp3,cp4,cp5,cp6,cp7,
                   cp8,cp9,cp10,cp11,cp12,
				   cp13,cp14,cp15,cp16,cp17,cp18,cp19,cp20;
		    	ifstream pop("SIXinfo");
		    	 while (pop>>cp,pop>>cp0) 
		    	 {
				 if (cp==p && cp0==s)
				 {
			   pop>>cp1,pop>>cp2,pop>>cp3,pop>>cp4,
			   pop>>cp5,pop>>cp6
			   ,pop>>cp7,pop>>cp8,
			   pop>>cp9, pop>>cp10, pop>>cp11, pop>>cp12,pop>>cp13,
			    pop>>cp14, pop>>cp15, pop>>cp16,
				pop>>cp17,pop>>cp18,pop>>cp19,pop>>cp20;
				cout<<"*************************************************************\n";
			   cout<<"*\n*\t\tEngine\t"<<cp1<<endl;
			   cout<<"*\n*\t\tHorse power\t"<<cp2<<" "<<cp3<<endl;
			   cout<<"*\n*\t\tTransmassion\t"<<cp4<<"   "<<cp5<<endl;
			   cout<<"*\n*\t\tSeating capacity\t"<<cp6<<endl;
			   cout<<"*\n*\t\tFeatures:\t"<<cp7<<"  "<<cp8<<endl;
			   cout<<"*\t\t\t\t"<<cp9<<" "<<cp10<<" "<<endl;
			   cout<<"*\t\t\t\t"<<cp11<<" "<<cp12<<" "<<endl;
			   cout<<"*\t\t\t\t"<<cp13<<" "<<cp14<<" "<<endl;
			   cout<<"*\t\t\t\t"<<cp15<<" "<<cp16<<" "<<" "<<cp17<<endl;
			   cout<<"*\t\t\t\t"<<cp18<<" "<<cp19<<" "<<" "<<cp20<<endl;
			   cout<<"**************************************************************\n";
	           	}    
		}
	      choice ();
	}
	void listb()
	{    
	    cout <<"BRAND LISTES"<<endl;
		cout <<"\t1,Toyota"<<endl;
		cout <<"\t2,Ford"<<endl;
		cout <<"\t3,Lifan"<<endl;
		cout <<"\t4,Nissan"<<endl;
		cout <<"\t5,BMW"<<endl;
		cout <<"\t6,Honda"<<endl;
		cout <<"\t7,Volkswagen"<<endl;
		cout <<"\t8,Suzuki"<<endl;
	}
	string choose(char p)
	{
		string d;
		switch (p)
		{    
		    case 't':
			case 'T':
			 d=toyo("Toyota");
			 return d;
			case 'f':
			case 'F':
				d=Ford("Ford");
				return d;
			case 'l':
			case 'L':
				d=Lifan("Lifan");
				return d;
			case 'n':
			case 'N':
				d=Nissan("Nissan");
				return d;
			case 's':
			case 'S':
				d=Suzuki("Suzuki");
				return d;
			case 'b':
			case 'B':
			   d=BMW ("BMW");
				return d;
			case 'h':
			case 'H':
				d=Honda("Honda");
				return d;
			case 'v':
			case 'V':
			   d=Volkswagen("Volkswagen");
				return d;	
		}
	}
string toyo (string p)
{
	cout<<"MODEL LISTES"<<endl;
	cout <<"\t\t* Corolla"<<endl;
	cout <<"\t\t* Hilux"<<endl;
	cout <<"\t\t* Yaris"<<endl;
	cout <<"\t\t* LandCruiser"<<endl;
	cout <<"\t\t* Supra"<<endl;
	return p;
}
string Ford(string p)
{
	cout<<"MODEL LISTES"<<endl;
	cout <<"\t\t* Ranger"<<endl;
	cout <<"\t\t* Everest"<<endl;
	cout <<"\t\t* EcoSport"<<endl;
	cout <<"\t\t* Fusion"<<endl;
	cout <<"\t\t* Explorer"<<endl;
	return p;
}
string Lifan(string p)
{
	cout<<"MODEL LISTES"<<endl;
  	cout <<"\t\t* X60"<<endl;
	cout <<"\t\t* X50"<<endl;
	cout <<"\t\t* 330"<<endl;
	cout <<"\t\t* 520"<<endl;
	return p;	
}
string Nissan(string p)
{
	cout<<"MODEL LISTES"<<endl;
	cout <<"\t\t* Tilda"<<endl;
	cout <<"\t\t* Navara"<<endl;
	cout <<"\t\t* Juke"<<endl;
	cout <<"\t\t* Qashqai"<<endl;
	return p;
}
 string Suzuki(string p)
 {
 	cout<<"MODEL LISTES"<<endl;
 	cout <<"\t\t* Alto"<<endl;
	cout <<"\t\t* Swift"<<endl;
	cout <<"\t\t* Celerio"<<endl;
	cout <<"\t\t* Baleno"<<endl;
	cout <<"\t\t* Vitara"<<endl;
	cout <<"\t\t* SwiftSport"<<endl;
	return p;	
 }
 string BMW (string p)
 {
 	cout<<"MODEL LISTES"<<endl;
 	cout <<"\t\t* X3"<<endl;
	cout <<"\t\t* X5"<<endl;
	cout <<"\t\t* X6"<<endl;
	return p;	
 }
string Honda(string p)
{   cout<<"MODEL LISTES"<<endl;
	cout <<"\t\t* Civic"<<endl;
	cout <<"\t\t* Accord"<<endl;
	cout <<"\t\t* CR-V"<<endl;
	cout <<"\t\t* Pilot"<<endl;
	return p;
}
 string Volkswagen(string p)
 {  
    cout<<"MODEL LISTES"<<endl;
 	cout <<"\t\t* Golf"<<endl;
	cout <<"\t\t* Jetta"<<endl;
	cout <<"\t\t* Amarok"<<endl;
	cout <<"\t\t* Passat"<<endl;
	return p;
 }
 void display1()
 {
 	cout <<"\tThank you for choosing us to assist you. We sincerely hope\n";
	 cout<<"\tthat we have been able to provide you with a satisfactory and helpful service!"<<endl;
 }
 void speci()
 {
 	string p , s;
		cout<<"Enter your car brand:"<<endl<<"\t->";
	cin>>p; 
	cout<<"Enter your car model:"<<endl<<"\t->";
	cin>>s;
	system("cls");
      if((p=="Toyota"&&s=="LandCruiser")||(p=="Toyota"&& s=="Supra")||
	  (p=="Lifan"&& s=="330")||(p=="Nissan"&& s=="Navara")||
	  (p=="Suzuki"&& s=="Swift")||
	  (p=="Suzuki"&& s=="Baleno")||(p=="Suzuki"&& s=="Celerio")||
	  (p=="Suzuki"&& s=="Vitara")||(p=="Volkswagen"&& s=="Golf")||
	  (p=="Volkswagen"&& s=="Jetta")||(p=="Volkswagen"&& s=="Amarok")||
	  (p=="Volkswagen"&& s=="Passat")||(p=="Honda"&& s=="Civic"))
      threeinfp(p,s);
    else
    if((p=="Lifan"&&s=="520")||(p=="Nissan"&& s=="Tilda")||
	  (p=="Nissan"&& s=="Juke")||(p=="Nissan"&& s=="Qashqai")||
	  (p=="Suzuki"&& s=="Alto")||
	  (p=="BMW"&& s=="X6")||(p=="Honda"&& s=="Accord")||
	  (p=="Honda"&& s=="CR-V")||(p=="Honda"&& s=="Pilot"))
	  fourinfo(p,s);
	else
	if((p=="Toyota"&&s=="Hilux")||(p=="BMW"&& s=="X3")||
	  (p=="BMW"&& s=="X4")||(p=="BMW"&& s=="X5")||
	  (p=="Ford"&& s=="Ranger")||
	  (p=="Ford"&& s=="Everest")||(p=="Ford"&& s=="EcoSport")||
	  (p=="Ford"&& s=="Fusion")||(p=="Ford"&& s=="Explorer"))
	   fifeinfp(p,s);
	 else
	 if ((p=="Toyota"&&s=="Corolla")||(p=="Toyota"&& s=="Yaris")||
	  (p=="Lifang"&& s=="X60")||(p=="Lifan"&& s=="X50")||
	  (p=="Ford"&& s=="Ranger")||
	  (p=="Ford"&& s=="Everest")||(p=="Ford"&& s=="EcoSport")||
	  (p=="Ford"&& s=="Fusion")||(p=="Ford"&& s=="Explorer"))
	  sixinfp(p, s);
 	string name;
 }
 void regis()
 {
 	int phonenum;
 	string Email;
 	string brand;
 	string name;
 	string model;
 	string color;
 	string year;
 	system("cls");
 	   cout<<"\n\n\n\tWelcome to our car sales";
	   cout<< "portal! We're excited to help you find your next vehicle."<< endl;
	   cout<< "\tTo get started with the registration process,";
       cout<<"please take a moment to provide us with some key details about yourself."<< endl;
	   cout<<"\tThis information will allow us to efficiently assist you throughout";
 	   cout <<"the car buying experience\t\n"<< endl;
 	   cout << "ENTER YOUR FULL NAME:"<<endl<<"\t->";
 	   cin.ignore();
 	   getline(cin,name);
 	   cout<<"ENTER YOUR PHONE NUMBER(Only 8 DIGIT):"<<endl<<"\t->";
 	   cout<<" 09";
 	   cin>> phonenum;
 	   cout<<"ENTER YOUR EMAIL ADDRESS(@gmail.com):"<<endl<<"\t->";
 	   cin >> Email;
 	   cout<<"ENTER YOUR BRAND CHOICE:"<<endl<<"\t->";
 	   cin >> brand;
 	   cout<<"ENTER YOUR MODEL CHOICE:"<<endl<<"\t->";
 	   cin >> model;
 	   cout<<"ENTER YOUR COLOR CHOICE:"<<endl<<"\t->";
 	   cin>>color;
 	   cout<<"ENTER THE PRODUCT YEAR:"<<endl<<"\t->";
 	   cin>>year;
 	   ofstream user;
 	   user.open("project c++ register",ios::app);
 	   user<<name<<" "<<phonenum<<" "<<Email<<" "<<brand<<" "<<model<<" "<<color<<" "<<year<<"\n";
 	   user.close();
 	   cout<<"YOUR DATA HASBEEN SAVED!"<<endl;
 	     cout<<"\tWe would like to inform you that your reservation will only be held for";
		 cout<<"one week from the date of booking.\n After this time, the reservation may";
		 cout<<"be subject to cancellation or changes.\n";
	     cout<<"If you have any questions or require further information, please do not hesitate to contact us at your convenience.\n";
	     cout<<"Our office is located at [xxxxxxxxx], and you can reach us at [0000000000].\n";
		 cout<<"We appreciate your understanding and look forward to assisting you with your reservation.\n";
 }
 void choice ()
 {  
	int p;
      do{
	   cout<<"1)FOR Registration"<<endl;
	   cout<<"0)TO Exit"<<endl<<"\t->";
	   cin>>p;
     switch (p)
      { 
     	case 1:
     		 regis();
     		 return;
     	case 0:
     		 display1();
     		 break;	
        default:
        	cout<<"Wrong choice please try againe!"<<endl;	
	  }
    }
    while (p!=0|p!=1);
     
 }
