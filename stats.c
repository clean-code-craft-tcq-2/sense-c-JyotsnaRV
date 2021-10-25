#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    int i = 0;
    float total;
    /* function call for sorting */
    numberset = num_sort((float *)numberset, setlength);
    /* update the minimum */
    s.min = numberset[i];
    /* calculate the total value of the set of values */
    for(i=0; i<setlength; i++)
    {
        total += numberset[i];
    }
    /* update the maximum and average values */
    
    s.average = total/setlength;
    s.max = numberset[i-1];
    /* return the updated structure */
    return s;
}

float* num_sort(float* data, int length)
{
    int i,j;
    float temp = 0;
    for(i=0; i<length; i++)
    {
        for(j=0; j<length; j++)
        {
            if(data[i] < data[j])
            {
                /* rearrange the array order when the condition is true */
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    /* return the sorted data */
    return data;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
