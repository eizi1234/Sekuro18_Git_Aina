#include <iostream>
using namespace std;
#include <string>
//saya juga menggunakan referensi dari 
//https://www.geeksforgeeks.org/system-design/introduction-of-programming-paradigms/
class RobotPemadam {
    private:
        int jarak ;
        string status;

    public:
        void inputSensor() {
            cout << "Masukkan jarak: ";
            cin >> jarak;
        }

        void prosesLogika() {
            if (jarak > 20) {
                status = "MAJU MENCARI API";
            } else if (jarak <= 20 && jarak > 5) {
                status = "UDAH DEKET NIH BRAY";
            } else { // jarak <= 5
                status = "POSISI TEPAT! GAS SEMPROT KALI YE";
            }
            cout << "Status: " << status << endl;
        }

        void cetakStatus() {
            cout << "Sensor: " << jarak << " cm" << endl; 
            cout << "Action: " << status << endl;        //ini versi 2
        } 
};

int main() {
    RobotPemadam robot;
    robot.inputSensor();
    robot.prosesLogika();
    robot.cetakStatus();
    return 0;
}