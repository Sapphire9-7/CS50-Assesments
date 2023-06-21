#include<stdio.h>
#include"cs50.h"
#include<math.h>
int start_size(void);
int end_size(int S_size);
int main(void)
{
int start = start_size();
int end = end_size(start);
if (start == end)
{
    printf("Years: 0\n");
}
else
{
    int year_count = 0;
    int total = start;
    do{
    float lama_born = floor(start/3.0);
    float lama_die = floor(start/4.0);
    total += (int)lama_born - (int)lama_die;
    start = total;
    year_count = year_count + 1;
    }
    while( total < end );
    printf("Years: %i", year_count);
    }
}

int start_size(void)
{
    int start_pop;
    do
    {
        start_pop = get_int("Enter start size of the population ");
    } while (start_pop < 9);
    return start_pop;
}

int end_size(int S_size)
{
    int end_pop;
    do
    {
        end_pop = get_int("Enter end size of the population ");
    } while (end_pop < S_size);
    return end_pop;

}

