#include <iostream>
using namespace ::std;
class student
{
    private:
    int age;
    string name;
    float weight;
    
    public:
    void setage(int newAge)
    {
        if(newAge<=100)
        {
            this -> age = newAge;
        }
    }
    void setname(string newName)
    {
        this ->name= newName;
    }
    void setweight(float newWeight)
    {
        this ->weight= newWeight;
    }
    int getage()
    {
        return age;
    }
    string getname()
    {
        return name;
    }
    float getweight()
    {
        return weight;
    }
};
int main()
{
    student myObj;
    myObj.setage(22);
    myObj.setname("Shankar");
    myObj.setweight(54.4);
    cout<<"Age: "<<myObj.getage()<<"\n"<<"Name: "<<myObj.getname()<<"\n"<<"Weight: "<<myObj.getweight();
    return 0;
}