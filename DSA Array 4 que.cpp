#include<iostream>
using namespace std;
int main() {
	char *subjects[7]={"Discrete Structures","Data Communication","DSA","Cloud Comp.","App. Dev.","Unix & Shell Modelling","Web Dev."};
	for (int i=0;i<7;i++)
	cout<<subjects[i]<<"\n";
	return 0;
}

// Program to create 10 element array & print it reverse.....

#include<iostream>
using namespace std;
int main() {
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	for (int i=9;i>=0;i--)
	cout<<arr[i]<<"\n";
	return 0;
}

//Program for creating and displaying multidimensional array.....

#include<iostream>
using namespace std; 
int main()
{
    int x[2][3][2] =
    {
        { {0,1}, {2,3}, {4,5} },
        { {6,7}, {8,9}, {10,11} }
    };
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                cout << "Element at x["<<i<<"]["<<j<<"]["<<k<<"]="<<x[i][j][k]<<endl;
            }
        }
    }
    return 0;
}

//Program for addition of matrices.....

#include<iostream>
using namespace std;
int main(){
	int arr1[3][3],arr2[3][3],sum[3][3];
	cout<<"Enter Elements in 1st array : ";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter Elements in 2nd array : ";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>arr2[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum[i][j] = arr1[i][j]+arr2[i][j];
		}
		printf("\n");
	}
	printf("\nSum : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}
