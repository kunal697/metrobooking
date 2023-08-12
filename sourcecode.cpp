 #include<iostream>
 #include<fstream>
using namespace std;


class book{
    private: 
     int from,to,no,type;
     string ans;
   public: 
     void booking();
     void timetable();
     void station();
     void contact_us();
     void menu();
};
  

        

void book::menu()
{
    int x;
    cout<<"\n\n\n\t\t\t______________________________________________HOME______________________________________________________";
    cout<<"\n\t\t\t1.Booking\n\t\t\t2.Timetable\n\t\t\t3.Stations\n\t\t\t4.contact us\n\t\t\t5.Exit\n";
    cout<<"Choose the Operation: ";
    cin>>x;

    switch(x)
    {
        case 1 :
             booking();
            break;
        case 2 :
               timetable();
               break;
        case 3 :
               station();
               break;
        case 4 :
              contact_us();
              break;
        case 5 :
                cout<<"Your Feedback is Valuable for us!\n";
                 cout<<"Please Let us know what you think\n";
                cout<<"Thanks\n";
                break;
        default :
              cout<<"Enter the correct opeerection";
        
    }

}

void book::station()
{   cout<<"\t\t\t________________________________________Avilable Stations: ________________________________________________________";
    cout<<"\n\t\t\t1.PCMC\n\t\t\t2.Bhosari\n\t\t\t3.Chatrapati Shivaji Nagar\n\t\t\t4.Civil court\n";
    cout<<"\t\t\t__________________________________We are Coming soon to other areas_______________________________________________\n";
    cout<<"Do you want to go home (YES /yes): ";
    cin>>ans;

    if(ans=="YES" || ans =="yes"|| ans =="Yes")
    menu();
    else
     cout<<"\t\t\t\t\t\t\t\tThanks for visiting\n";

}

void book::timetable()
{
     cout<<"                                   Operational Section : PCMC to Civil Court\n";
    cout<<"Frequency of Trains : 10 mins\n";
    cout<<"Off Peak Frequency : 15 mins\n";
    cout<<"Service Time : 7 am to 10 pm(15Hrs)\n";
    cout<<"Station Stopping Time : 30 Sec\n";
    cout<<"Travel Time from PCMC to Civil Court : 25 mins\n ";
    cout<<"Do you want to go home (YES /yes): ";
    cin>>ans;

    if(ans=="YES" || ans =="yes"|| ans =="Yes")
    menu();
    else
     cout<<"\t\t\t\t\t\t\t\t\t\tThanks for visiting\n";

}

void book::booking()
{
     float fare;
    cout<<"_____________________________WELCOME TO METRO TICKET BOOKING__________________________________"<<endl;
    cout<<"\n1.PCMC\n2.Bhosari\n3.Chatrapati Shivaji Nagar\n4.Civil court\n";
    cout<<"FROM : ";
    cin>>from;
    cout<<"TO: ";
     cin>>to;
     cout<<"Number of Tickets: ";
    cin>>no;
    cout<<"Journey type: \n1.One Way\n2.Return\n";
    cin>>type;

    if(from==1 && to==2 || (from==2 && to==1) || (from==2 && to==3))
       {
        fare=(10.50*no)*type;
        cout<<"Fare is "<<fare<<" ruppes\n";
       }
    else if((from==2 && to==3)|| (from==3 && to==2) || (from==2 && to==4) || (from==2 && to==4))
    {
        fare = (17.50*no)*type;
        cout<<"Fare is "<<fare<<" ruppes\n";
    }
    else if ((from==3 && to==4) || (from==4 && to==3))
    {
         fare = (7.00*no)*type;
        cout<<"Fare is "<<fare<<"ruppes\n";
    }
    else if ((from==1 && to==3) || (from==3 && to==1) || (from==1 && to==4) || (from==4 && to==1))
    {
        fare = (21.00*no)*type;
        cout<<"Fare is "<<fare<<" ruppes\n";
    }

    cout<<"Do you want to go home (YES /yes): ";
    cin>>ans;

    if(ans=="YES" || ans =="yes"|| ans =="Yes")
    menu();
    else
     cout<<"\t\t\t\t\t\t\tThanks for visiting\n";
 }

 void book::contact_us()
 {
    cout<<"Contact Number : 18002705501\n";
    cout<<"Mail : \n";
    cout<<"Address :Maharastra Metro Rail Corporation Pune,A1,A2 block civil court interchange metro station,\n\tNyaymurti Ranade path,Shivaji Nagar Pune,411005";
    cout<<"\nDo you want to go home (YES /yes): ";
    cin>>ans;

    if(ans=="YES" || ans =="yes"|| ans =="Yes")
    menu();
    else
     cout<<"\t\t\t\t\t\t\tThanks for visiting\n";
    
 }
 int main()
 { 
    book project;
    cout<<"                                                          WELCOME TO PUNE METRO\n";
    project.menu();



    return 0;
 }
