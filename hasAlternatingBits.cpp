bool hasAlternatingBits(int n) {

    // if we right shift any number ex:10 
    //before: 10101 ,after right shift: 01010
    // 10101^01010==11111
    //and if we xor rightshifted value with original one it will become 11111
    
    long long num=n^(n>>1);//11111
    //if our num is a line of consecutive ones we have to return true
    // if we and any number(with consecutive ones) n with n+1 it will give us 00000 so for our ans we have to return oposite of zero means true 
    // !00000==1
     return !(num&(num+1));//!00000==1
}
