
int main() {

    int digits[] = {1,2,3};
    int count=0;

    for (int i : digits) // for each element of digit store in i, one at the time
    {
        count++;
    }

    double total;
    double power;
    for (int i=0; i<count; i++){
        power =1;
        for (int po=0; po < count-i; po++){
            
            power*= 10;
        }
    }

 
    return 0;

}