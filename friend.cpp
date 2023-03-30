#include<iostream>
using namespace std;
class Distance
{
  private:
      int meters;
  
  public:
      Distance()
      {
          meters=10;
      }
    void displayData()
    {
        cout<<"display the value of meters: "<<meters<<endl;
    }
    //prototype or signature
       friend void GetValue(Distance &d);
};
 void GetValue(Distance &d)
{
    d.meters=d.meters+5;
}
int main()
{
    Distance d1;
    d1.displayData(); // meters=10
    
    GetValue(d1);// pass by reference
    
    d1.displayData();// meters=15
    return 0;
}

