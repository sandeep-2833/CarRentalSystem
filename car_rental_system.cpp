#include<iostream>
using namespace std;
struct Car{
string company,model;
int year,reg_no,rent;
bool rented;
};

displayCar(Car car){
cout<<"Company: "<<car.company<<endl;
cout<<"Model: "<<car.model<<endl;
cout<<"Year: "<<car.year<<endl;
cout<<"Registration No: "<<car.reg_no<<endl;
cout<<"Rent: "<<car.rent<<" per day"<<endl<<endl;
}
int main()
{
Car car123={"Tata","Tiago",2022,123,5000,false };
Car car234={"Maruthi","Brezza",2023,234,7000,false };
Car car345={"Hyundai","i20",2022,345,4000,false };
cout<<"-----Available Cars----"<<endl<<endl;
displayCar(car123);
displayCar(car234);
displayCar(car345);
while(true){
int choice ;
cout<<"Enter 0 for exit"<<endl;
cout<<"Enter Regisration No"<<endl;

cout<<"Enter :";
cin>>choice;
 switch(choice)
 {
  case 123:{system("cls");

      if(!car123.rented)
        {
        car123.rented=true;
        cout<<"You have successfully rented the required car";
        displayCar(car123);
        }
        else{cout<<"This car is already been rented "<<endl;}
        break;
      }
      case 234:{system("cls");

      if(!car234.rented)
        {
        car234.rented=true;
        cout<<"You have successfully rented the required car";
        displayCar(car234);
        }
        else{cout<<"This car is already been rented "<<endl;}
        break;
      }
      case 345:{system("cls");
      {
      if(!car345.rented){

        car345.rented=true;
        cout<<"You have successfully rented the required car";
        displayCar(car345);
        }
    else{cout<<"This car is already been rented "<<endl;}
        break;
      }
      case 0:{
      exit(0);
      break;
      }
      default:{
      cout<<"Invalid Input"<<endl;}
      break;
 }
 }
}
}
