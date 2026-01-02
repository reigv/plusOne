#include <iostream>
using namespace std;

int main() {

    int digits[] = {1,2,3};
    int count=0;

    for (int i : digits) // for each element of digit store in i, one at the time
    {
        count++;
    }

    double total=0;
    double power;
    for (int i=0; i<count; i++){
        power =1;
        for (int po=0; po < count-i-1; po++){
            
            power*= 10;
        }

        total += digits[i] * power;
    }

    total += 1;

    for (int i=0; i< count; i++){
        power =1;
        for (int po=0; po < count-i; po++){
            
            power*= 10;
        }
        digits[i] = total /power * 10;
        total = (int)total % (int)(power /10); 
    }

    cout<< "Result: "<<digits[0]<<","<<digits[1]<<","<<digits[2]<<endl;
    return 0;

}