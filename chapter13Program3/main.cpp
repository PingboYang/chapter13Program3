#include <iostream>
using namespace std;

class Car{
private:
    int yearModel;
    string make;
    int speed;
public:
    Car(int a, string b, int c );
    int accessYearModel();
    string accessMake();
    int accessSpeed();
    void accelerate();
    void brake();
};

Car::Car(int a, string b, int c ){
    yearModel=a;
    make=b;
    speed=c;
}
int Car::accessYearModel(){
    return yearModel;
}

string Car::accessMake(){
    return make;
}
int Car::accessSpeed(){
    return speed;
}

void Car::accelerate(){
    speed+=5;

}
void Car::brake(){
    speed-=5;
}
int main() {
    Car carObj(2022, "black", 1000);
    carObj.accelerate();
    cout <<carObj.accessSpeed()<<endl;
    carObj.accelerate();
    cout <<carObj.accessSpeed()<<endl;
    carObj.accelerate();
    cout <<carObj.accessSpeed()<<endl;
    carObj.accelerate();
    cout <<carObj.accessSpeed()<<endl;
    carObj.accelerate();
    cout <<carObj.accessSpeed()<<endl;



    cout << "Speed is: "<<carObj.accessMake() << endl;
    return 0;
}

