#include<stdio.h>

int rate_count_house(int r, int unit, int arr[], int n){
    if(n==0) return 0;
    int food_required = r*unit;
    int food_till_now = 0;
    int house = 0;
    for (house = 0;house < n;house++)
    {
        food_till_now += arr[house];
        if(food_till_now >= food_required)
            break;
    }
    if(food_required > food_till_now)
        return 0;
    return house+1;
}

int main(){
    int arr[]={2,8,3,5,7,4,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    int r,unit;
    printf("Enter r\n");
    scanf("%d", &r);
    printf("Enter unit\n");
    scanf("%d", &unit);
    printf("amount of food in 1st %d houses is sufficient for all the rats", rate_count_house(r,unit,arr,size));
    return 0;
}