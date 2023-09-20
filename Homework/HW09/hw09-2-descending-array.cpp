/*
    ให้ผู้ใช้กรอกค่าเข้ามาเก็บในอาเรย์ จากนั้นให้ทำการแสดงค่าข้อมูล 2 แบบคือ "เรียงข้อมูลจากมากไปน้อย" และ "เรียงข้อมูลจากน้อยไปมาก"
    
    Test case:
        Input : 
            1
        Input : 
            5
        Input : 
            1
        Input : 
            4
        Input : 
            6
        Input : 
            9
        Input : 
            13
        Input : 
            -1
    Output:
        0-99 : 1 1 4 5 6 9 13
        99-0 : 13 9 6 5 4 1 1

*/

#include <stdio.h>

int main() {
    int arr[100] ;  // สร้างอาเรย์สำหรับเก็บข้อมูล
    int n = 0 , num ;

    // รับค่าจากผู้ใช้และเก็บในอาเรย์
    while (1) {
        printf( "Input number input -1 for stop : \n" ) ;
        scanf( "%d" , &num ) ;

        if ( num == -1 ) {
            break ;  // หยุดรับข้อมูลเมื่อผู้ใช้ป้อน -1
        }

        arr[n] = num ;
        n++ ;
    }

    // เรียงข้อมูลจากมากไปน้อย
    printf( "0-99 : " ) ;
    for ( int i = n - 1; i >= 0; i-- ) {
        printf( "%d " , arr[i] ) ;
    }
    printf( "\n" ) ;

    // เรียงข้อมูลจากน้อยไปมาก
    printf( "99-0 : " ) ;
    for ( int i = 0; i < n; i++ ) {
        printf( "%d" , arr[i] ) ;
    }
    printf( "\n" ) ; 

    return 0 ;
}
