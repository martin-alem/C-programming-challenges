// Solutions to chapter 2 programming challenges
// Created by Martin Alemajoh on 10/1/22.
//

#include "solution.h"
#include <iostream>

using namespace std;

int sumOfTwoNumbers(){

    int number1 = 50;
    int number2 = 100;
    int sum = number1 + number2;

    return sum;
}

double salesPrediction(){
    return (56 / 100.0) * 8.6E6;
}

double salesTax(){
    int price = 95;
    double stateSaleTax = 0.04; // 4/100
    double countrySaleTax = 0.02; // 2/100

    double totalSaleTax = (price * stateSaleTax) + (price * countrySaleTax);

    return totalSaleTax;
}

void restaurantBill(){
    double tax = 6.75 / 100;
    double percentageTip = 20 / 100.0;
    double bill = 88.67;

    double taxAmount = tax * bill;
    double tipAmount = percentageTip * (bill + taxAmount);

    cout <<"Meal cost: "<<bill <<endl;
    cout <<"Tax amount: "<<taxAmount <<endl;
    cout <<"Tip amount: "<<tipAmount <<endl;
    cout <<"Total meal cost: "<<bill + taxAmount + tipAmount <<endl;

}

double averageOfValues(){
    int num1 = 28, num2 = 32, num3 = 37, num4 = 24, num5 = 33;
    int sum = num1 + num2 + num3 + num4 + num5;
    double average = sum / 5.0;
    return average;
}


double annualPay(){

    double payAmount = 2200.0;
    int payPeriods = 26;
    double annualPay = payAmount * payPeriods;

    return annualPay;
}

void oceanLevel(){
    double rateOfIncrease = 1.5; //mm/year
    double levelIn5Years = rateOfIncrease * 5;
    double levelIn7Years = rateOfIncrease * 7;
    double levelIn10Years = rateOfIncrease * 10;

    cout <<"Level in 5 years: "<<levelIn5Years <<"mm" <<endl;
    cout <<"Level in 7 years: "<<levelIn7Years <<"mm" <<endl;
    cout <<"Level in 10 years: "<<levelIn10Years <<"mm" <<endl;
}

void totalPurchase(){
    double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95;
    double subTotal = item1 + item2 + item3 + item4 + item5;
    double tax = (7/100.0) * subTotal;

    cout <<"Item1: "<<"$" <<item1 <<endl;
    cout <<"Item2: "<<"$" <<item2 <<endl;
    cout <<"Item3: "<<"$" <<item3 <<endl;
    cout <<"Item4: "<<"$" <<item4 <<endl;
    cout <<"Item5: "<<"$" <<item5 <<endl;
    cout <<endl;
    cout <<"Subtotal: " <<"$" <<subTotal <<endl;
    cout <<"Tax: " <<"$" <<tax <<endl;
    cout <<"Total: " <<"$" <<subTotal + tax <<endl;
}

void cyborgDataTypeSize(){
    cout <<"Size of char: " << sizeof(char) <<" byte" <<endl;
    cout <<"Size of int: "<< sizeof(int) <<" bytes" <<endl;
    cout <<"Size of float: " << sizeof(float) <<" bytes" <<endl;
    cout <<"Size of double: " << sizeof(double) <<" bytes" <<endl;
}

double milePerGallon(){
    double milesDriven = 375;
    double numberOfGallons = 15;
    double milesPerGallon = milesDriven / numberOfGallons;
    return milesPerGallon;
}

void distancePerTankOfGallon(){
    double milePerGallonInTown = 23.5;
    double milesPerGallonInHighWay = 28.9;
    int numberOfGallons = 20;

    double distanceInTown = numberOfGallons * milePerGallonInTown;
    double distanceOnHighWay = numberOfGallons * milesPerGallonInHighWay;

    cout <<"Distance travelled in town: "<<distanceInTown <<" miles" <<endl;
    cout <<"Distance travelled on high way: "<<distanceOnHighWay <<" miles" <<endl;
}

double landCalculation(){
    return 391876/43560.0;
}

double circuitBoardPrice(){
    double costPrice = 14.95;
    double profit = (35.0 / 100) * costPrice;
    double sellingPrice = costPrice + profit;

    return sellingPrice;
}

void personalInformation(){
    cout<<"Martin Alemajoh" <<endl <<"8984 North High Street, Columbus OH, 45887" <<endl <<"874-4875-9877" <<endl <<"Electrical/Computer Engineering" <<endl;
}

void stockCommission(){
    double numberOfShares = 750;
    double pricePerShare = 35.00;
    double totalAmount = numberOfShares * pricePerShare;
    double stockBrokerCommission = (2.0/100) * totalAmount;

    cout<<"Amount paid: $"<<totalAmount <<endl;
    cout<<"Commission: $"<<stockBrokerCommission <<endl;
    cout<<"Total amount: $"<<totalAmount + stockBrokerCommission <<endl;
}

void energyDrinkConsumption(){
    const int totalCustomers = 16500;
    double customersWhoBoughtED = (15.0 / 100) * totalCustomers;
    double customersWhoBoughtCD = (58.0 / 100) * customersWhoBoughtED;

    cout<<"Customers who bought energy drink: "<<customersWhoBoughtED <<endl;
    cout<<"Customers who bought citrus drink out of the total who bought energy drink: "<<customersWhoBoughtCD <<endl;
}

void annualHighTemperature(){

    double percentageIncrease = (2.0 / 100);
    double newYork = 85 + (85 * percentageIncrease);
    double denver = 88 + (88 * percentageIncrease);
    double phoenix = 106 + (106 * percentageIncrease);

    cout<<"New York: "<<newYork <<endl;
    cout<<"Denver: "<<denver <<endl;
    cout<<"Phoenix: "<<phoenix <<endl;
}

int howMuchPaint(){
    int areaPerGallon = 340;
    double lengthOfFence = 6;
    double widthOfFence = 100;
    double areaOfFence = lengthOfFence * widthOfFence;
    double numberOfGallons = areaOfFence / areaPerGallon; //for 1 coat
    return static_cast<int>(numberOfGallons * 2); // for two coats
}