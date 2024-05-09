#include <iostream>
#include <string>
using namespace std ;

class Car{
    private:
        
        string DriverMode;
        int m_MaxSeating;
        int m_price;
        void m_UpdatePrice(int base=500000){
            m_price=m_MaxSeating*base;
        }
    public:
    int m_Engine;
    int m_Fueltank;
    string m_brand;
    string m_madel;
    int m_year;
    int gas1;
    
    Car(string x,string y,int z,int s){
        m_brand=x;
        m_madel=y;
        m_year=z;
        m_MaxSeating=s;
    }
    int get_m_MaxSeating(){
        return m_MaxSeating;
    }
    int m_getPrice(){
            m_UpdatePrice();
            return m_price;
        }
    int get_gas_grand(){
        m_Fueltank=3000;
        return m_Fueltank;
    }
    int set_gas_grand(int gas){
        gas1=gas;
        return gas1;
    }
    int fuel_up(int v,int gas_type){
        set_gas_grand(gas1);
        int cache;
        while(gas_type!=gas1){
            cout<<"Error: Gas_Grand: "<<gas_type<<" Correct Gas_Grand: "<<gas1<<endl;
            gas_type=gas1;
        }
        while(m_Fueltank<v){
            cout<<"Error: FueltankCapacity: "<<m_Fueltank<<" But fill up: "<<v<<endl;
            cache=v;
            v=m_Fueltank-1;
        }
        cout<<"fuel_up: "<<cache<<" Gas_Grand: "<<gas_type<<endl;
        return 0;
    }
};

class BMW_Car:public Car{
    private:
    string DriverMode;
    
    public:
    BMW_Car(string y,int z,int s):Car("BMW",y,z,s){
        cout<<"constructing BMW_Car\n";
        DriverMode="Rear-wheal";
    }
    string get_DriverMode(){
        return DriverMode;
    }
};
class AUDI_Car:public Car{
    private:
    string DriverMode;
    
    public:
    AUDI_Car(string y,int z,int s):Car("AUDI_Car",y,z,s){
        cout<<"constructing AUDI_Car\n";
        DriverMode="Front-wheal";
    }
    string get_DriverMode(){
        return DriverMode;
    }
};

class BENZ_Car:public Car{
    private:
    string DriverMode;
    
    public:
    BENZ_Car(string y,int z,int s):Car("BENZ",y,z,s){
        cout<<"constructing BENZ_Car\n";
        DriverMode="Front-wheal";
    }
    string get_DriverMode(){
        return DriverMode;
    }
};
    
int main(){
    BMW_Car car1("X5",2023,6);
    cout<<car1.m_brand<<" : ";
    cout<<"Driver Mode = "<<car1.get_DriverMode()<<"\n";
    car1.get_gas_grand();
    car1.set_gas_grand(98);
    car1.fuel_up(30000,95);
    AUDI_Car car2("X5",2023,6);
    cout<<car2.m_brand<<" : ";
    cout<<"Driver Mode = "<<car2.get_DriverMode()<<"\n";
    car2.get_gas_grand();
    car2.set_gas_grand(95);
    car2.fuel_up(30000,95);
    BENZ_Car car3("X5",2023,6);
    cout<<car3.m_brand<<" : ";
    cout<<"Driver Mode = "<<car3.get_DriverMode()<<"\n";
    
    
}
