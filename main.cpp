#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string name;
    double product;
    int ID;
    int qty;
    int phone=300;
    int table=100;
    int printer=800;
    float total_amount,vat,cash;
    int balance,insufficient;



    cout<<"........Welcome To Amingo Markert Conner........"<<endl;


      //products available
    cout<<"Products Available and Prices"<<endl;
    cout<<"Phone  = "<<phone<<"USD" <<endl;
    cout<<"table  = "<<table<<"USD" <<endl;
    cout<<"printer  = "<<printer<<"USD" <<endl;
    cout<<""<<endl;


    //client details
    cout<<"Please enter your name:"<<endl;
    cin>>name;
    cout<<""<<endl;
    cout<<"Please enter your unique ID:"<<endl;
    cin>>ID;
    cout<<""<<endl;

    //customer orders
    cout<<"YOU CAN ONLY BUY ONE ITEM"<<endl;
    cout<<""<<endl;
    cout<<"How many do you want?"<<endl;
    cin>>qty;
    cout<<""<<endl;
    cout<<"Please enter your cash"<<endl;
    cin>>cash;
    cout<<""<<endl;
    cout<<"What product do you want to purchase please"<<endl;
    cin>>product;
    cout<<""<<endl;




    if(product==phone){
        vat=0.12*(qty*phone);
        total_amount=(phone*qty)+vat;
        cout<<"Your total amount is "<<total_amount<<" USD"<<endl;
    }

      else if(product==table){
        vat=0.12*(qty*table);
        total_amount=(table*qty)+vat;
        cout<<"Your total amount is "<<total_amount<<" USD"<<endl;
   }

        else {
        vat=0.12*(qty*printer);
        total_amount=(printer*qty)+vat;
        cout<<"Your total amount is "<<total_amount<<" USD"<<endl;
    }


    insufficient=(total_amount-cash);
    balance=(cash-total_amount);


    if(cash==total_amount){
        cout<<"Thank you for shopping with us"<<endl;
    }
    else if(cash>total_amount){
        cout<<"Thank you for your payment"<<endl;
        cout<<"You have a change of  "<<balance<< "USD"<<endl;
        cout<<"Thank you for shopping with us"<<endl;
    }
    else{
        cout<<"Sorry, Insufficient Cash"<<endl;
        cout<<"Your balance is = - "<<insufficient<< "USD"<<endl;
    }


    //receipt
    cout<<""<<endl;
    cout<<"Name :"<<name;
    cout<<""<<endl;
    cout<<"UniqueID :"<<ID;
    cout<<""<<endl;
    cout<<"Product"<<product;
    cout<<""<<endl;
    cout<<"Quantity :"<<qty;
    cout<<""<<endl;
    cout<<"VAT Amount :"<<vat<< "USD";
    cout<<""<<endl;
    cout<<"Total Cost :" <<total_amount<< "USD";
    cout<<""<<endl;
    cout<<"Total Amount Paid :" <<cash<< "USD";
    cout<<""<<endl;
    cout<<"Balance :" <<balance<< "USD";
    cout<<""<<endl;
    cout<<"THANK YOU FOR SHOPPING WITH US"<<endl;
    cout<<""<<endl;


    return 0;
}
