#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

// FUNCTIONS DECLERATION
void disArr (int[],int);
void fillArr (int[],int);
void sortArr (int arr[],int);
void addArr (int[],int);
float getAvg(int[],int);
void revArr (int [],int);
void minArr (int[],int);
void minn (int[],int);
void maxArr(int[],int);
void maxx (int[],int);

int main()
{
    char choice;

        int myArr [4]= {4,7,1,3};
    do
    {
//        cout<< "\nEnter your choice\n [f] for fill array\n [s] for sort\n [a] for add\n [g] for get avg.\n [r] for reverse\n [m] for minimum\n [x] for maximum\n [e] for exit."<<endl;
//        cin>> choice;
//        int myArr [4]= {4,7,1,3};
        cout<< "\nEnter your choice\n [d] for display\n [f] for fill array\n [s] for sort\n [a] for add\n [g] for get avg.\n [r] for reverse\n [m] for minimum\n [x] for maximum\n [e] for exit."<<endl;
        cin>> choice;

        switch (choice)
        {
        case 'd':
        case 'D':
            disArr(myArr,4);
            break;

        case 'f':
        case 'F':
            fillArr(myArr,4);
            break;

        case 's':
        case 'S':
            sortArr (myArr,4);
            for (int i = 0; i < 4; i++)
            {
                cout << myArr[i] << " ";
            }
            break;

        case 'a':
        case 'A':
            addArr (myArr,4);
            break;

        case 'g':
        case 'G':
            getAvg(myArr,4);
            break;
        case 'r':
        case 'R':
            revArr(myArr,4);
            break;

        case 'm':
            minArr (myArr,4);
            break;

        case 'M':
            minn(myArr,4);
            break;

        case 'x':
            maxArr(myArr,4);
            break;

        case 'X':
            maxx(myArr,4);
            break;

        default:
            cout<<"invalid input"<<endl;
        }

    }
    while (choice!='e');

    return 0;
}

// FUNCTIONS IMPLEMENTATION

void disArr (int arr [],int n){
for (int i=0;i<n;i++) {
    cout<< arr[i]<< " ";
}
}

// 1- FILL ARRAY WITH NEW ELEMENTS

void fillArr (int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<< "\nEnter array value no."<< i+1<<endl;
        cin>>arr[i];
        bool validInp = false;
        while (!validInp)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Input is not a number!" << endl;
                cout<< "\nEnter array value no."<< i+1<<endl;
                cin>>arr[i];
            }
            else
            {
                validInp =true;
            }
        }

    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// 2- ASCENDING SORT FOR ARRAY

void sortArr (int arr[],int n)
{
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if (arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

// 3- ADD TO ARRAY BY INDEX

void addArr (int arr[],int n)
{
    int index,a;
    cout<< "\nEnter element no."<<endl;
    cin>>index;
            bool validInp = false;
        while (!validInp)
        {
            if (cin.fail() || index>4)
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Input is not a number or exceed size" << endl;
                cout<< "\nEnter element no."<<endl;
                cin>>index;
            }
            else
            {
                validInp =true;
            }
        }
    cout<< "\nEnter value"<<endl;
    cin>>a;
        while (!validInp)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Input is not a number!" << endl;
                cout<< "\nEnter value"<<endl;
                cin>>a;
            }
            else
            {
                validInp =true;
            }
        }
    arr[index-1]= a;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

// 4- GET AVERAGE OF ARRAY NUMBERS

float getAvg (int arr[],int n)
{
    float sum;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    cout <<"\nAverage is: "<<sum/n<<endl;
}

// 5- REVERSE THE ARRAY

void revArr(int arr[],int n)
{
    for (int i=0; i<n/2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i]= arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// 6- MINIMUM VALUE IN ARRAY

void minArr(int arr[],int n)
{
    int minArr;
    sortArr (arr,n);
    minArr = arr[0];
    cout<< "\nMinimum array value is: " <<minArr<<endl;
}

void minn (int arr[],int n)
{
    int in,b = arr[0];
    for (int i=0; i<n; i++)
    {
        if (arr[i]<b)
        {
            b=arr[i];
            in=i;
        }
    }
    cout<<"minimum is element no. "<< in+1<< " and its value is: "<<b<<endl;
}

// 7- MAXIMUM VALUE IN ARRAY

void maxArr (int arr[],int n)
{
    int maxArr;
    sortArr (arr,n);
    maxArr = arr[n-1];
    cout<< "\nMaximm array value is: " <<maxArr<<endl;

}

void maxx (int arr[],int n)
{
    int in, b= arr[0];
    for (int i=1; i<n; i++)
    {
        if (arr[i]>b)
        {
            b=arr[i];
            in=i;
        }
    }
    cout<<"maximum is element no. "<< in+1<< " and its value is: "<<b<<endl;
}
