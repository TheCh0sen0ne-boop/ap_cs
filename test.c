#include <stdio.h>

int[50] build_arr()
{
    //create empty int array of length 50
    int arr[50];

    //populate created array with odds 2-100
    for(int i=0; i < 50; i++)
    {
        //what do I want to happen AT EACH POSITION/INDEX of the array?
        arr[i] = (i+1)*2;
    }
}