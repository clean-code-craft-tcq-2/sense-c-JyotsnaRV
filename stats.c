#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    int i = 0;
    float total;
    // function call for sorting
    numberset = num_sort(numberset, setlength);
    //calculate the total value of the set of values
    for(i=setlength; i>0; i--)
    {
        total += numberset[i];
    }
    // update the minimum, maximum and average values
    s.min = numberset[i];
    s.average = total/setlength;
    s.max = numberset[i-1];
    // return the updated structure
    return s;
}

float* num_sort(float* data, int length)
{
    int i,j;
    float temp_var = 0;
    for(i=length; i>0; i--)
    {
        for(j=length; j>0; j--)
        {
            if(data[i] < data[j])
            {
                /* rearrange the array order when the condition is true */
                temp_var = data[i];
                data[i] = data[j];
                data[j] = temp_var;
            }
        }
    }
    // return the sorted data
    return data;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
