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