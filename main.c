//
//  main.c
//  fibonacci
//
//  Created by Mert Kacir on 20.02.2020.
//  Copyright © 2020 Ömer Kacır. All rights reserved.
//

#include <stdio.h>
int fibonacci(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    return (fibonacci(n-1)+fibonacci(n-2));
        
    
}


int main(int argc, const char * argv[]) {
    int sayi;
    printf("Sayiyi giriniz:");
    scanf("%d",&sayi);
    int sonuc=fibonacci(sayi);
    printf("fib %d = %d\n",sayi,sonuc);
    
 
    
    return 0;
}
