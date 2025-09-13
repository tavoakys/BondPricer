#include <iostream>
#include <iomanip>
#include <cmath>
#include <chrono>
using namespace std;

int main() {

    double faceValue;
    double annualCoupon;
    double yield;
    int timeToMaturity;
    int couponFrequency;

    cout << "Face value in $ (e.g., 100 for 100$): ";
    cin >> faceValue;

    cout << "Annual coupon rate in % (e.g., 5 for 5%): ";
    cin >> annualCoupon;

    cout << "Yield to maturity in % (e.g., 6 for 6%): ";
    cin >> yield;

    cout << "Time to maturity in years (e.g., 3 for 3 years): ";
    cin >> timeToMaturity;

    cout << "Coupon frequency (payments per year) (e.g. 1=annual, 2=semiannual, 4=quarterly, 12=monthly): ";
    cin >> couponFrequency;

    if (faceValue <= 0 || annualCoupon < 0 || yield < 0 || timeToMaturity <= 0 || couponFrequency <= 0) {
        cout << "Invalid input. Please use positive values.\n";
        return 0;
    }

    auto start = chrono::high_resolution_clock::now();

    double couponPerPeriod = (annualCoupon / 100) * faceValue / couponFrequency;
    double yieldPerPeriod = (yield / 100) / couponFrequency;
    int totalPeriods = timeToMaturity * couponFrequency;

    double bondPrice = 0;
    for (int i = 1; i <= totalPeriods; i++) {
        bondPrice += couponPerPeriod / pow(1 + yieldPerPeriod, i);
    }

    bondPrice += faceValue / pow(1 + yieldPerPeriod, totalPeriods);

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> timeElapsed = end - start;

    cout << fixed << setprecision(4);
    cout << "\n--- Bond Price ---\n";
    cout << "Price: " << bondPrice << "\n";

    cout << "\n(Details)\n";
    cout << "Coupon per period: " << couponPerPeriod << "\n";
    cout << "Yield per period : " << yieldPerPeriod * 100 << "%\n";
    cout << "Total periods    : " << totalPeriods << "\n";

    cout << "\nTime elapsed: " << timeElapsed.count() << " ms\n";

    return 0;
}