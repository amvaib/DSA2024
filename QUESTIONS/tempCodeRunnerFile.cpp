int count = 0;


    for(int i =1 ; n!=0; i++){

        if(n&1){
        count ++;
    }
       n=  n>>1;
    }

    cout << count;