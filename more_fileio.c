#include <stdio.h>

int main() {
	/* program reads from a .txt file holding class average grades. First entry
	is your class. Program returns 'Yes' if your calss average is higher than the
	others, and 'No' if not. */
	FILE *ifile;
	int N = 2; // starts at 2 - your grade is 1, so first checked is 2
	int flag = 0;
	double yourGrade, otherGrade;
	
	ifile = fopen("gradeComparison.txt", "r"); // open the file gradeComparison.txt
	fscanf(ifile, "%lf", &yourGrade); // get your class grade (1st entry)
	
	// ingest all other grades, check if they are higher than yours
	// loop breaks at EOF, or if flag is tripped to TRUE
	while (fscanf(ifile, "%lf", &otherGrade) != EOF && !flag) {
		if (otherGrade > yourGrade) {
			flag = 1;
		} else {
			N++; //count to print position (doesn't count if flag tripped)
		}
	}
	
	if (flag) {
		printf("No %d\n", N); // print No, and first grade that was higher
	} else {
		printf("Yes\n"); // print if your grade is highest
	}
	
	fclose(ifile); //close file
	
	return 0;
}
