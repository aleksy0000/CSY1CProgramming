#include <stdio.h>
#include <stdbool.h>

int main()
{
    int flowerbed[5];
    flowerbed[0] = 0;
    flowerbed[1] = 0;
    flowerbed[2] = 1;
    flowerbed[3] = 0;
    flowerbed[4] = 0;
    int flowerbedSize = sizeof(flowerbed) / sizeof(flowerbed[0]);
    int n = 1;
    //start of leetcode question
    int i;
    int CanPlantAmount = 0;
    bool CanPlant = false;

    if(flowerbedSize == 1)
    {
        if(flowerbed[0] == 0)
        {
            CanPlantAmount = CanPlantAmount + 1;
            flowerbed[0] = 1;
        }
    }
    
    for(i = 0; i < flowerbedSize; i++)
    {
        if(flowerbed[i] == 0)
        {
            if(i == flowerbedSize - 1)
            {
                if(flowerbed[i - 1] == 0)
                {
                    CanPlantAmount = CanPlantAmount + 1;
                    flowerbed[i] = 1;

                }
            }
            else if(i == 0)
            {
                if(flowerbed[i + 1] == 0)
                {
                    CanPlantAmount = CanPlantAmount + 1;
                    flowerbed[i] = 1;
                }
            }
            else if(flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
            {
                CanPlantAmount = CanPlantAmount + 1;
                flowerbed[i] = 1;
            }
        }
    }

    printf("%d", n);

    /*if(CanPlantAmount == n)
    {
        CanPlant = true;
    }

    return CanPlant;*/
}
