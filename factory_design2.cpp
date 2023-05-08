#include <iostream>
using namespace std;

class Plan
{
protected:
    double rate;

public:
    virtual void getRate() = 0;
    void calculateBill(int units)
    {
        cout << units * rate << endl;
    }
};
class DomesticPlan : public Plan
{
public:
    void getRate()
    {
        rate = 3.45;
    }
};
class Commercial : public Plan
{
public:
    void getRate()
    {
        rate = 7.58;
    }
};
class Institutional : public Plan
{
public:
    void getRate()
    {
        rate = 11.52;
    }
};

class GetPlanFactory : public Plan
{
public:
    static Plan *getPlan(string planType)
    {
        Plan *pl;
        if (planType == "")
        {
            return NULL;
        }
        if (planType == "Domestic")
        {
            pl = new DomesticPlan();
        }
        else if (planType == "Commercial")
        {
            pl = new Commercial();
        }
        else if (planType == "Institutional")
        {
            pl = new Institutional();
        }
        return pl;
    }
};

int main()
{
    string planType;
    int units;
    cout << "Enter the name of plan" << endl;
    cin >> planType;
    cout << "Enter the number of units" << endl;
    cin >> units;
    cout << "Bill amount for " << planType << " of "
         << "units is: " << units << endl;
    Plan *pl = GetPlanFactory::getPlan(planType);
    pl->getRate();
    pl->calculateBill(units);
    return 0;
}
