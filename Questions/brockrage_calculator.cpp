#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function to calculate fees
double calculateFee(double notionalSize, double feeRate) {
    return notionalSize * feeRate / 100;
}

// Function to calculate notional size
double calculateNotionalSize(int contracts, double lotSize, double price) {
    return contracts * lotSize * price;
}

int main() {
    int contracts;
    double buyPrice, sellPrice;
    int leverage = 100;  // Default leverage for the program (can be changed)
    double lotSize = 0.001;  // Lot size for BTC/ETH Futures on Delta Exchange
    double makerFeeRate = 0.02;  // Maker fee rate (0.02%)
    double takerFeeRate = 0.05;  // Taker fee rate (0.05%)

    cout << "---- BTC/ETH Futures Scalping Offer Calculator (with Leverage) ----\n";
    
    // User inputs
    cout << "Enter number of contracts: ";
    cin >> contracts;

    cout << "Enter buy price: ";
    cin >> buyPrice;

    cout << "Enter sell price: ";
    cin >> sellPrice;

    cout << "Trade type (Maker/Taker): ";
    string tradeType;
    cin >> tradeType;

    // Calculate notional size
    double openingNotional = calculateNotionalSize(contracts, lotSize, buyPrice);
    double closingNotional = calculateNotionalSize(contracts, lotSize, sellPrice);

    // Determine fee rate based on trade type
    double openingFeeRate = (tradeType == "Maker" || tradeType == "maker") ? makerFeeRate : takerFeeRate;
    double closingFeeRate = 0.0; // Scalping offer waives closing fees

    // Calculate fees
    double openingFee = calculateFee(openingNotional, openingFeeRate);
    double closingFee = calculateFee(closingNotional, closingFeeRate);

    // Calculate PNL
    double pnl = (sellPrice - buyPrice) * contracts * lotSize;
    double leveragedPnl = pnl * leverage;

    // Calculate net profit/loss after fees
    double netProfitWithoutOffer = leveragedPnl - (openingFee + closingFee);  // Without scalping offer
    double netProfitWithOffer = leveragedPnl - openingFee;  // With scalping offer (closing fee waived)

    // Display results
    cout << fixed << setprecision(2);
    cout << "\n---- Results ----\n";
    cout << "Opening Notional Size: $" << openingNotional << endl;
    cout << "Closing Notional Size: $" << closingNotional << endl;
    cout << "Opening Fee (Without Scalping Offer): $" << openingFee << endl;
    cout << "Closing Fee (With Scalping Offer, Waived): $" << closingFee << endl;
    cout << "PNL (Without Leverage): $" << pnl << endl;
    cout << "PNL (With Leverage " << leverage << "x): $" << leveragedPnl << endl;
    cout << "Net Profit (Without Scalping Offer): $" << netProfitWithoutOffer << endl;
    cout << "Net Profit (With Scalping Offer): $" << netProfitWithOffer << endl;
    cout << "Profit Increase with Scalping Offer: $" << (netProfitWithOffer - netProfitWithoutOffer) << endl;

    return 0;
}
