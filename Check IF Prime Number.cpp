#include<iostream.h>
#include<conio.h>
int main() {
    // T => 84 F=> 70
    int Postive_Num;
    char Boolean[] = {84}; // True
    cout<<"Please Enter A +ve Number: "<<std::endl;
    cin>>Postive_Num;
    if(Postive_Num == 1 || Postive_Num == 0){
        Boolean[0] = 70; // Changed To False
    }
    for(int i = 2; i < Postive_Num / 2; i++){
        if(Postive_Num % i == 0){
            Boolean[0] = 70; // Changed To False
            break;
        }
    }
    if(Boolean[0] == 84){
          cout<<Postive_Num<<": Is A Prime Number"<<endl;
    }else{
          cout<<Postive_Num<<": Not A Prime Number"<<endl;
    }
    return 0;
}

// For More Clarifaction => https://www.programiz.com/cpp-programming/examples/prime-number
