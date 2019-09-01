#include <stdio.h>

int main() {
	/* You are grading final exams and you are recording grades (integers) in a
	file "myGrades.txt". You just got distracted by a phone call and can't
	remember whether or not you already recorded the grade of the student whose
	paper you just finished grading.
	Expecting that this may not be the last time your phone rings you decide to
	write a C-program to help you out. The program should first read, from the
	user input, the grade (an integer) that you need to check on. Next, the
	program should open the file "myGrades.txt", find the last number in the
	file, close the file, and compare the last number from the file to the grade
	read from the user input. If the two grades are equal then you presumably
	already recorded the grade and don't have to do anything. If on the other
	hand the two grades do not equal each other then you have not yet recorded
	this new grade and need to do so by appending this new grade to the file.
	Finally, reopen the file and print its new contents to the screen. */
	FILE *ifile;
	int checkGrade, lastGrade; // grade to initially check
	char myGrades[] = "myGrades.txt";
	
	scanf("%d", &checkGrade); // read grade from user input
	
	ifile = fopen(myGrades, "r"); // open the file myGrades.txt
	
	// get last grade in file
	while (fscanf(ifile, "%d", &lastGrade) != EOF) {
	}
	fclose(ifile); // close file
	
	// if checkGrade is not lastGrade, append checkGrade
	if (checkGrade != lastGrade) {
		ifile = fopen(myGrades, "a"); // open the file myGrades.txt to append
		fprintf(ifile, " %d", checkGrade);
		fclose(ifile); // close the file
	}
	ifile = fopen(myGrades, "r"); // open the file myGrades.txt
	while (fscanf(ifile, "%d", &lastGrade) != EOF) {
		printf("%d ", lastGrade);
	}
	fclose(ifile); //close file
	
	return 0;
}
