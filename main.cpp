#include <iostream>

using namespace std;

int b1, a1 ;

char* revarray ( char* ar, int a, int b )
{
    char temp;
    if ( a > b )
    {
        return ar ;
    }
    temp = ar[a] ;
    ar[a]=ar[b] ;
    ar[b] = temp ;

    return revarray( ar, a+1, b-1 );

}

char* revname ( string name )
{
    char* arr2 = new char [ name.length()];
    for ( int i = 0 ; i < name.length() ; i++ )
    {
        arr2[i] = name[i] ;
    }
    return revarray( arr2 , 0 , name.length()-1 ) ;
}

int main()
{
    int n, x, y ;
    string name ;

    cout << " enter number of characters : " ;
    cin >> n ;
    char* arr = new char [n];
    char* arr1 = new char [n];
    char* arr3 = new char [name.length()];
    cout << " enter your characters " ;
    for (int i=0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }
    cout << "enter 1st boundry and second boundry " ;
    cin >> x >> y ;
    b1 = y ;
    a1 = x ;

    arr1 = revarray( arr, x, y ) ;

    for (int i=0 ; i < n ; i++)
    {
        cout <<  arr1 [i] << " "  ;
    }
    cout << endl ;
    cout << " enter name " ;
    cin >> name ;
    arr3 = revname ( name ) ;
    for (int i=0 ; i < name.length() ; i++)
    {
        cout <<  arr3 [i] << " " ;
    }



    return 0;
}
