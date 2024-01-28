int count=0;
int digitcount(int num){
    if(num>0){
        num=num/10;
        ++count;
        digitcount(num);
    }
    

return count;
}