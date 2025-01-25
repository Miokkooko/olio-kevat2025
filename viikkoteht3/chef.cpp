#include "chef.h"
using namespace std;

Chef::Chef(string name)
{
    cout<<"Chef " <<name<<" constructed"<<endl;
    chefName =name;
}

Chef::~Chef()
{
    cout<<"Chef "<<chefName<<" destroyed"<<endl;
}

string Chef::getName()
{

}

int Chef::makeSalad(int a)
{
    int b = a/5;
    cout<<"Chef "<<chefName<<" with "<<a<<" items can make "<<b<<" salad portions"<<endl;
}

int Chef::makeSoup(int a)
{
    int b = a/3;
    cout<<"Chef "<<chefName<<" with "<<a<<" items can make "<<b<<" soup portions"<<endl;
}
