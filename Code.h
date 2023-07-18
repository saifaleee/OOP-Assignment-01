/*  NAME : SAIF ALI KHAN  
	ROll NO : 21i-0649
	Section : E
	Assignment : 01

*/
#pragma once 
#include<iostream>
using namespace std;

char* convertToTapCode(char* str) {
	char tap_code[200] = { 0 }; // make an array of size 100 and set all elements to 0
	char* tc_ptr = tap_code;
	int tracker = 0; // keeps track of pointer position

	for (int i = 0; !(*(str + i) == '\0'); i++) {

		if ((*(str + i) == 'a')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'b')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'c') || (*(str + i) == 'k')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'd')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'e')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}

		// now for second row
		else if ((*(str + i) == 'f')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'g')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'h')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'i')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'j')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}

		// now for 3rd row
		else if ((*(str + i) == 'l')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'm')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'n')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'o')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'p')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}

		// now for 4th row
		else if ((*(str + i) == 'q')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'r')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 's')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 't')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'u')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}

		// now for the 5th row
		else if ((*(str + i) == 'v')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'w')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'x')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'y')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		else if ((*(str + i) == 'z')) {
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
			*(tc_ptr + tracker) = '.';
			tracker++;
		}
		if (!(*(str + i+1) == '\0')) {
			*(tc_ptr + tracker) = ' '; // two spaces after letter finishes
			tracker++;
			*(tc_ptr + tracker) = ' ';
			tracker++;
		}
	}
	// after storing the code in array we need to copy it to another array of fixed size
	int counter = 0;
	for (int j = 0; j < 200; j++) {
		if (!(*(tc_ptr + j) == '0')) {
			counter = j + 1;
			break;
		}
	}
	char* final_array = new char[counter];

	for (int k = 0; k < counter; k++) {
		*(final_array + k) = *(tc_ptr + k);
	}


	/*for (int i = 0; i < 200; i++) {
		cout << *(tc_ptr + i);
	}*/
	
	return (tc_ptr);
}


char * convertToString(char* str){

	char tap_code[10] = {'1','1','1','1','1','1','1','1','1','1'}; // make an array of size 10 and set all elements to 0
	char* tc_ptr = tap_code;
	int tracker = 0; // keeps track of pointer position
	int row = 0;
	int column = 0;
	bool flag = true;

	char array[5][5]={{'a','b','c','d','e'},{'f','g','h','i','j'},{'l','m','n','o','p'},{'q','r','s','t','u'},{'v','w','x','y','z'}};

	for (int i = 0; !(*(str+i)=='\0') ; i++){

		if ((*(str+i)=='.') && flag){
			row = row+1;
		}
		else if((*(str+i)==' ')){

			if (flag==false){

				*(tc_ptr+tracker) = array[row-1][column-1];
				tracker++;
				row=0;
				column=0;
				i++;
				flag = true;
			}
			else {
			flag = false;
			}
		}
		else if((*(str+i)=='.') && (!(flag))){
			column = column+1;
		}


	}

	*(tc_ptr+tracker) = array[row-1][column-1];
	int size=0;
	for (int j=0;(!(*(tc_ptr+j)=='1'));j++){
		size=size+1;
	}
	char * strng = new char[size];
	for (int j = 0 ; j<size;j++){
		*(strng+j)=*(tc_ptr+j);
	}
	for (int k=0;k<size+1;k++){
		if (!(strng[k] > 97 && strng[k] < 123)) {
			strng[k] = '\0';
		}
	}
	return (strng);
}

char* additionOfBigInteger(char * Num1, char* Num2){
	int size1 = 0;
	int size2 = 0;
	int fsize = 0;
	for (int i = 0; *(Num1 + i) != '\0'; i++) {
		size1++;
	}
	for (int i = 0; *(Num2 + i) != '\0'; i++) {
		size2++;
	}

	if (size1 > size2) {
		fsize = size1 + 2;
	}
	else {
		fsize = size2 + 2;
	}

	char* final_arr = new char[fsize] {'.'};
	int arrtracker = (fsize - 1);
	int tempp = arrtracker;
	arrtracker = arrtracker - 1;

	int carry = 0;

	for (int i = fsize; i >= 3; i--) {

		int temp = 0;
		temp = (int(Num1[size1 - 1]) - 48) + (int(Num2[size2 - 1]) - 48);
		if (temp < 10) {
			if (carry > 1) {
				carry = 1;
			}
			*(final_arr + arrtracker) = char((temp + 48) + carry);
			carry = 0;
		}
		else {
			if (carry > 1) {
				carry = 1;
			}
			int remain = int(temp) - 10;
			*(final_arr + arrtracker) = char((remain + 48) + carry);
			carry += 1;
		}
		size1--;
		size2--;
		arrtracker--;
	}

	*(final_arr + tempp) = '\0';

	for (int j = tempp; j > 0; j--) {

		if (final_arr[j] = '.') {

			for (int i = 0; i < tempp; i++) {
				final_arr[i] = final_arr[i + 1];

			}
			break;
		}

	}
	/*for (int i=0;i<tempp;i++){
		cout << *(final_arr+i);
	}*/
	return (final_arr);
}


char* subtractionOfBigInteger(char * Num1, char* Num2)	{
	char i = '\0'; // not complete
	char* ptr = &i;
	return ptr ;
}

char* multiplicationOfBigInteger(char * Num1, char* Num2){
	char i = '\0'; // not complete
	char* ptr = &i;
	return ptr;
}

void removePunctuation(char *str){
	for (int k = 0 ; k < 5 ; k++){ // checking for errors five times
    for (int i=0; !(*(str+i)=='\0'); i++){
        if ( (*(str+i)=='.') || (*(str+i)=='~') || (*(str+i)=='!') || (*(str+i)=='@') || (*(str+i)=='#') || (*(str+i)=='$') || (*(str+i)=='%') || (*(str+i)=='^') || (*(str+i)=='&') || (*(str+i)==';') || (*(str+i)=='*') || (*(str+i)=='(') || (*(str+i)==')') || (*(str+i)=='_') || (*(str+i)=='+') || (*(str+i)=='=') || (*(str+i)=='"') || (*(str+i)==':') || (*(str+i)=='/') || (*(str+i)=='?') || (*(str+i)==','))
        {
            //*(str+i)=' ';
            for (int m=i;;m++){
                    if(*(str+(m+1))=='\0')
                    {
                        *(str+m)=*(str+(m+1)); 
                        break;
                    }
                    else
                    {
                    *(str+m)=*(str+(m+1)); 
                    }
                }
        }
    }
    }
    for (int k = 0 ; k < 5 ; k++) { // checking for errors five times
        for (int i=0; !(*(str+i)=='\0'); i++){
        if (*(str+i)==' ')
        {
            if (*(str+(i+1))==' ')
            {
                for (int m=i;;m++){
                    if(*(str+(m+1))=='\0')
                    {
                        *(str+m)=*(str+(m+1)); 
                        break;
                    }
                    else{
                    *(str+m)=*(str+(m+1)); 
                    }
                }
            }
             
        }
        }
    }

    /*for (int i=0; !(*(str+i)=='\0'); i++){
    cout << *(str+i);*/
    
}

void countLetters(char* str, int *&array, int &size)
{
	int* array1 = new int[3]{ 0 };
	int frequency = 0;
	int tracker = 0;
	array = array1;
	bool flag = false;
	for (int i = 0; !(*(str + i) == '\0'); i++)
	{

		for (int k = 0; !(*(str + k) == '\0'); k++)
		{

			if (*(str + i) == *(str + k)) {
				frequency++;

			}
		}
		if (i == 0 || frequency == 1) {
			*(array + tracker) = frequency;
		}
		else if (frequency > 1) {

			for (int l = i - 1; l >= 0; l--) {
				if (*(str + l) == *(str + i)) {
					flag = true;
					break;
				}
				else {
					flag = false;
				}
			}

			if (flag == true) {
				tracker--;
			}
			else {
				*(array + tracker) = frequency;
			}


		}

		tracker++;
		frequency = 0;
	}
	size = tracker;
	/*for (int l=0; l<size; l++){
		cout << *(array+l) << endl;
	}   */
}

bool isprimeNumber(int n, int i){
	if (n % i == 0) {
		return false;
	}
	else if (n < 3) {
		if (n == 2) {
			return true;
		}
		else
			return false;
	}
	if (i * i > n) {
		return true;
	}

	return isprimeNumber(n, i + 1); // keep checking for next divisors
}

char findUppercase(char* str){
	if (*(str) == '\0') {
		return '0';
	}

	else if (*(str) == 'A') {
		return 'A';
	}
	else if (*(str) == 'B') {
		return 'B';
	}
	else if (*(str) == 'C') {
		return 'C';
	}
	else if (*(str) == 'D') {
		return 'D';
	}
	else if (*(str) == 'E') {
		return 'E';
	}
	else if (*(str) == 'F') {
		return 'F';
	}
	else if (*(str) == 'G') {
		return 'G';
	}
	else if (*(str) == 'H') {
		return 'H';
	}
	else if (*(str) == 'I') {
		return 'I';
	}
	else if (*(str) == 'J') {
		return 'J';
	}
	else if (*(str) == 'K') {
		return 'K';
	}
	else if (*(str) == 'L') {
		return 'L';
	}
	else if (*(str) == 'M') {
		return 'M';
	}
	else if (*(str) == 'N') {
		return 'N';
	}
	else if (*(str) == 'O') {
		return 'O';
	}
	else if (*(str) == 'P') {
		return 'P';
	}
	else if (*(str) == 'Q') {
		return 'Q';
	}
	else if (*(str) == 'R') {
		return 'R';
	}
	else if (*(str) == 'S') {
		return 'S';
	}
	else if (*(str) == 'T') {
		return 'T';
	}
	else if (*(str) == 'U') {
		return 'U';
	}
	else if (*(str) == 'V') {
		return 'V';
	}
	else if (*(str) == 'W') {
		return 'W';
	}
	else if (*(str) == 'X') {
		return 'X';
	}
	else if (*(str) == 'Y') {
		return 'Y';
	}
	else if (*(str) == 'Z') {
		return 'Z';
	}

	return findUppercase(str + 1); // keep checking for next characters
}

void temp_sum(int** array, int row, int column, int& evenSum, int& oddSum);

void temp_sum(int** array, int row, int column, int& evenSum, int& oddSum) {

	if (column < 0) {
		return;
	}
	if (row != 0) {
		if ((array[row - 1][column]) % 2 == 0) {
			evenSum += array[row - 1][column];
		}
		else {
			oddSum += array[row - 1][column];
		}
	}
	else
	{
		if ((array[row][column]) % 2 == 0) {
			evenSum += array[row][column];
		}
		else {
			oddSum += array[row][column];
		}
	}
	temp_sum(array, row, column - 1, evenSum, oddSum);

}
int sum(int** array, int row, int column, int& evenSum, int& oddSum) {
	if (row <= 0) {
		return 0;
	}
	else
	{
		// Recursive call to traverse the matrix
		// in the Horizontal direction
		temp_sum(array, row, column - 1, evenSum, oddSum);
		sum(array, row - 1, column, evenSum, oddSum);
	}
}


void printspace(int n) {

	if (n < 1) {
		return;
	}
	else {
		cout << " ";
		return printspace(n - 1);
	}
}
void printstar() {
	cout << "*" << endl;;
}
void PrintPattern1(int start, int end){
	if (start + 1 < end) {
		printspace(start);
		printstar();
		PrintPattern1(start + 2, end);
		printspace(start);
		printstar();
	}
	else {
		printspace(start);
		printstar();
	}
}


void printspace2(int n) {

	if (n < 1) {
		return;
	}
	else {
		cout << " ";
		return printspace2(n - 1);
	}
}
void printstars2(int m) {

	if (m < 1) {
		return;
	}
	else {
		cout << "*";

		return printstars2(m - 1);
	}
}
void PrintPattern2(int row, int b,int space){
	if (row < 1) {
		return;
	}

	printspace2(space - b);
	printstars2(b);
	cout << endl;
	PrintPattern2(row - 1, b + 2, space + 1);
	if (space - b == 0) {
	}
	else {
		printspace2(space - b);
		printstars2(b);
		cout << endl;
	}
}

void printspace3(int n) {

	if (n < 1) {
		return;
	}
	else {
		cout << "  ";
		return printspace3(n - 1);
	}
}
void printstars3(int m) {

	if (m < 1) {
		return;
	}
	else {
		cout << " *" << " ";

		return printstars3(m - 1);
	}
}
void PrintPattern3(int space, int star,int test){
	if (space < 1) {
		return;
	}

	printspace3(space * 2);
	cout << " | ";
	printspace3(test - (star - 1));
	printstars3(star - 1);
	cout << " | ";
	printstars3(star - 1);
	printspace3(test - (star - 1));
	cout << " | ";
	cout << endl;
	PrintPattern3(space - 1, star + 2, test + 1);

	if (space == 1) {
	}
	else {
		printspace3(space * 2);
		cout << " | ";
		printspace3(test - (star - 1));
		printstars3(star - 1);
		cout << " | ";
		printstars3(star - 1);
		printspace3(test - (star - 1));
		cout << " | ";
		cout << endl;
	}
}
