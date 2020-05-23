bool isPrime(int number);
int main(){
 return 0;
}
bool isPrime(int number){
    bool flag = true;
    for(int i = 2;i<number;i++){
        if(number %i==0){
            flag = false;
            break;
        }
    }
    return flag;
}