/*package com.company;

import java.util.Scanner;

public class YetAnother2intProb {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- >0) {
            int a,b;
            a = sc.nextInt();
            b = sc.nextInt();
            if (a == b) {
                System.out.println("0");
            } else if (a > b) {
                int c = a - b;
                if (c % 10 == 0) {
                    System.out.println(c / 10);
                } else {
                    System.out.println(c / 10 + 1);
                }
            } else {
                int c = b - a;
                if (c % 10 == 0) {
                    System.out.println(c / 10);
                } else {
                    System.out.println(c / 10 + 1);
                }
            }

        }
    }
}*/
#include<stdio.h>
int main()
{
    int a,b,i,t;
    scanf("%d",&t);
    for ( i = 0; i < t; i++)
    {
        scanf("%d%d",&a,&b);
         if (a == b) {
            printf("0\n");
            } else if (a > b) {
                int c = a - b;
                if (c % 10 == 0) {
                  printf("%d\n",c / 10);
                } else {
                    printf("%d\n",c / 10 + 1);
                }
            } else {
                int c = b - a;
                if (c % 10 == 0) {
                    printf("%d\n",c / 10);
                } else {
                    printf("%d\n",c / 10 + 1);
                }
            }
    }
    
    return 0;
}