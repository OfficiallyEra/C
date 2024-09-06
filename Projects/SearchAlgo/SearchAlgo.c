#include "SearchAlgo.h"

/*
    @author : OfficiallyEra
    Date : 6th of September 2024
    update : 7 time(s)
    FileId : SearAlgo.m.01
*/


// Function to perform bubble sort
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Binary Search Engine
int binarySearch(int arr[], int size, int key)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2; // to avoid overflow

        if (arr[mid] == key)
            return mid; // key found at index mid
        else if (arr[mid] < key)
            low = mid + 1; // search in the right half
        else
            high = mid - 1; // search in the left half
    }

    return -1; // key not found
}

// Linear Search Engine
int linearSearch(int array[], int sizeOfArr, int element)
{
	for(int i=0;i<sizeOfArr;i++)
	{
		if(array[i]==element)
		{
			return i;
		}
	}
	return -1;
}


//main
int main(int argc,char** argv)
{
	int i=0, n=0, arr[100], element=0, choice=0, searchedIndex=0, size=0;
	const static int margin = 3;
	
	printf("Enter The number of elements you want to register : ");
	scanf("%d",&n);
	
	for( i; i < n; i++ )
	{
		printf("Enter element no [ %d ] > ",i+1);
		scanf(" %d", &arr[i]);
	}
	
	printf("Enter what element you want to search : ");
	scanf(" %d",&element);

	size = sizeof(arr)/sizeof(int);

	printf("Choose one search algo ! \n\n\t[1]Linear Search\n\t[2]Binary Search\n\t[3]Exit\n\n\t[#]Your Choice > ");
	scanf("%d",&choice);

	if (choice==0)
	{
		printf("Sorry You have to enter a choice to continue !");
	}
	else if(choice > margin)
	{
		printf("[ERROR] -> Illegal Overflow -> {Input}[ %d ] Overflow Stack Called [Overflow ID : 0xffffff]",choice);
	}
	else
	{
		if(choice==1)
		{
			printf("\n\n========Performed Linear Search=========\n\n");

			searchedIndex = linearSearch(arr, size, element); //linear search function called

			if(searchedIndex != -1)
			{
				printf("The element [ %d ] was found at index [ %d ]", element, searchedIndex + 1);
			}
			else
			{
				printf("\n\n========Performed Linear Search=========\n\n");
				printf("Element Not found!");
			}
			
		}
		else if (choice==2)
		{
			printf("\n\n========Performed Bubble Sort=========\n\n");
			
			bubbleSort(arr, n); //sort before binary search
			
			printf("Sorted array: ");
			for (i = 0; i < n; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n");

			// Perform binary search on the sorted array
    		searchedIndex = binarySearch(arr, n, element);

			if(searchedIndex != -1)
			{
				printf("\n\n========Performed Binary Search=========\n\n");
				printf("The element [ %d ] was found at index [ %d ]", element, searchedIndex + 1);
			}
			else
			{
				printf("\n\n========Performed Binary Search=========\n\n");
				printf("Element Not found!");
			}

		}
		
	}
	
	
	
	
	return 0;
}
