#include <iostream>
using namespace std;

int main()
{
    const double base_pizza=40.00;
    const double additional_olives=15.50;
    const double additional_onions=11.00;
    const double additional_cheese=12.30;
    const double additional_salami=22.00;
    const double additional_shrimps=25.40;
    double budget=100.00;
    double invoice=0.00;
    
    //welcome message to the customer
    cout<<"Welcome to antonio's pizzeria italina"<<endl;
    
    //update the budget and invoice
    budget=budget-base_pizza;
    invoice=invoice+base_pizza;
    
    //check if the budget is still enough for additional_olives
    if(additional_olives<=budget){
        //ask customer if they want additional_olives
        string answer;
        cout<<"Any olives? ";
        cin>>answer;
        
        //if yes then update the budget and invoice
        if(answer=="YES" || answer=="yes" || answer=="Yes"){
            budget=budget-additional_olives;
            invoice=invoice+additional_olives;
        }
    }
    
    //check if the budget is still enough for additional_onions
    if(additional_onions<=budget){
        //ask customer if they want additional_onions
        string answer;
        cout<<"Any onions? ";
        cin>>answer;
        
        //if yes then update the budget and invoice
        if(answer=="YES" || answer=="yes" || answer=="Yes"){
            budget=budget-additional_onions;
            invoice=invoice+additional_onions;
        }
    }
    
    //check if the budget is still enough for additional_cheese
    if(additional_cheese<=budget){
        //ask customer if they want additional_cheese
        string answer;
        cout<<"Any cheese? ";
        cin>>answer;
        
        //if yes then update the budget and invoice
        if(answer=="YES" || answer=="yes" || answer=="Yes"){
            budget=budget-additional_cheese;
            invoice=invoice+additional_cheese;
        }
    }
    
    //check if the budget is still enough for additional_salami
    if(additional_salami<=budget){
        //ask customer if they want additional_salami
        string answer;
        cout<<"Any salami? ";
        cin>>answer;
        
        //if yes then update the budget and invoice
        if(answer=="YES" || answer=="yes" || answer=="Yes"){
            budget=budget-additional_salami;
            invoice=invoice+additional_salami;
        }
    }
    
    //check if the budget is still enough for additional_shrimps
    if(additional_shrimps<=budget){
        //ask customer if they want additional_shrimps
        string answer;
        cout<<"Any shrimps? ";
        cin>>answer;
        
        //if yes then update the budget and invoice
        if(answer=="YES" || answer=="yes" || answer=="Yes"){
            budget=budget-additional_shrimps;
            invoice=invoice+additional_shrimps;
        }
    }
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    
    //antonio present the total invoice
    cout<<"Altogether that will be: R"<<invoice<<endl;
    
    //checck the invoice
    if(invoice>=99){
        cout<<"Here is a free cold drink."<<endl;
    }
    else{
        cout<<"Enjoy your pizza."<<endl;
    }
    
    //antonio present the change money
    cout<<"Here is your change money: R"<<budget<<endl;

    return 0;
}
