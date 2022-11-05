int cifmaxpar(int n){
    if(n<10){
        if(n%2!=0){
          return -1;
        }
        else{
            return n;
        }
    }
    if(cifmaxpar(n%10)>cifmaxpar(n/10)){
        return cifmaxpar(n%10);
    }
    else{
        return cifmaxpar(n/10);
    }
    
}
