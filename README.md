# Bond Pricer in C++

---

## What is Bond Valuation?

Bond valuation is the process of determining the fair price (or intrinsic value) of a bond based on its expected future cash flows.

---

## How Bond Valuation Works

The value of a bond is found by calculating the present value of all its expected cash flows:

* Each coupon payment is discounted back to the present using the required rate of return (also called the discount rate or yield to maturity).
* The face value is also discounted back to the present.

The formula is:

$$
\text{Bond Value} = \sum_{t=1}^{N} \frac{C}{(1+r)^t} + \frac{F}{(1+r)^N}
$$

Where:

* $C$ = coupon payment  
* $F$ = face value
* $N$ = number of periods until maturity  
* $r$ = yield to maturity

The formula basically says that a bond’s value today is the sum of all its future cash flows (coupon payments and face value), discounted back to the present using the required rate of return.

---

## Prof. Cohen's Hot Chocolate Recipe

* mlik
* dark chocolate
* sugar
* cinnamon
* cayenne pepper (if hes feeling mexican)

---

## Project Overview

This C++ project is a bond valuation calculator. In brief, it does the following:

* Computes bond price by discounting all coupon payments and the face value back to the present.
* Outputs results including the bond price, coupon per period, yield per period, and total periods.
* Measures execution time using the <chrono> library and displays how long the calculation took.

---

## Example Run

Face value in $ (e.g., 100 for 100$): 100 \
Annual coupon rate in % (e.g., 5 for 5%): 5 \
Yield to maturity in % (e.g., 6 for 6%): 6 \
Time to maturity in years (e.g., 3 for 3 years): 3 \
Coupon frequency (payments per year) (e.g. 1=annual, 2=semiannual, 4=quarterly, 12=monthly): 2 \
\
--- Bond Price --- \
Price: 97.2914 \
\
(Details) \
Coupon per period: 2.5000 \
Yield per period : 3.0000% \
Total periods    : 6 \
\
Time elapsed: 0.7347 ms \

---

## Importance of Bond Valuation

This matters because:

* Investment decisions – It helps investors know whether a bond is fairly priced, overvalued, or undervalued.
* Risk management – Shows how sensitive bond values are to changes in interest rates (important for portfolio strategy).
* Financial planning – Lets issuers and buyers estimate returns and costs accurately.
* Practical learning – The program demonstrates how to apply time value of money and discounting concepts in code.\

---

## Skills Demonstrated

The code demonstrates several useful programming and finance-related skills:

* C++ programming basics – input/output handling, condition checks, and formatting output.
* Mathematical modeling – applying the bond valuation formula with loops and exponentiation.
* Use of standard libraries – <cmath> for power functions, <iomanip> for output precision, and <chrono> for timing.
* Algorithmic thinking – breaking down bond pricing into coupon and face value components.
* Financial knowledge – understanding and implementing the concept of time value of money.

This aims to be a mini example of quant work, taking a financial model (bond pricing) and coding it for computation.

Check out the code [here](https://github.com/tavoakys/BondPricer/blob/master/BondPricer/BondPricer.cpp).

---

## Resources Used

* [Article: Investopedia] (https://www.investopedia.com/terms/b/bond-valuation.asp)
* This README.md file was written with the assistance of GPT-5.
