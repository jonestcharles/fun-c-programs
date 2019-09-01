#include <stdio.h>

int main() {
	/* program reads from a file where first value is an integer indicating
	number of grades, then reads grades and computes average, before outputting
	to terminal. See studentGrades.txt for example file */
	FILE *ifile;
	int N, i;
	double grade;
	double averageGrade = 0;
	
	ifile = fopen("studentGrades.txt", "r"); // open the file
	fscanf(ifile, "%d", &N); // get number of grades
	
	// get all grades and sum
	for (i=0;i<N;i++) {
		fscanf(ifile, "%lf", &grade);
		averageGrade += grade;
	}
	
	averageGrade = averageGrade/N; // calculate average after getting all grades
	
	printf("%0.2lf\n", averageGrade); // print the average grade
	
	fclose(ifile);
	
	return 0;
}
