#include <iostream>

int main()
{
    //Determine the net_worth from the following...
    double sales = 95000,
    state_tax_rate = 0.04,
    country_tax_rate = 0.02,
    net_amount_received;

    net_amount_received = sales * (1-(state_tax_rate + country_tax_rate));
    std::cout << "net_worth = $" << net_amount_received << std::endl;

    //Continuing further... we can determine the total task
    std::cout<< "Total tax = $" << sales * (state_tax_rate + country_tax_rate) << "\n";
    return 0;
}