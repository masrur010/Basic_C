#include<stdio.h>
int main(){

    int n, element,c = 0, searech, check = 0;
    printf("Enter number of element you want to store in this array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter all elements of arr[%d] : ",n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Elements of this array :\n");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter the element you want to delete : ");
    scanf("%d",&element);

    for(int i=0;i<n;i++){
        if(arr[i] == element) continue;
        else {
            arr[c] = arr[i];
            c++;
        }
    }

    printf("After deleting %d from this array : \n",element);

    for(int i=0;i<c;i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter the element you're looking for : ");
    scanf("%d",&searech);

    for(int i=0;i<c;i++){
        if(arr[i] == searech) {
            check = 1;
            break;
        }
    }

    if(check==1)
        printf("%d is found!\n",searech);
    else
        printf("%d doesn't exixst!\n",searech);

return 0;

}
