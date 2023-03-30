#include <stdio.h>

int main(void) {
	int i,item, max = -1, avg, total = 0, year,min=0;
	
	for( i = 1995; i < 2000; ++i) {
		printf("Enter items exported in %d-%d", i, i+1);
		scanf("%d", &item);
		total += item;
		if(max < item) {
			max = item;
			year = i;
		}
		
		if(min > item) {
			min = item;
			year = i;
		}
	}
	
	avg = total / 5;
	printf("Total Exports is: %d.\nAverage Export is: %d.\nMax Export was %d at %d-%d Min export was %d at %d-%d", total, avg, max, year, year+1, min, year, year+1);

	return 0;
}

