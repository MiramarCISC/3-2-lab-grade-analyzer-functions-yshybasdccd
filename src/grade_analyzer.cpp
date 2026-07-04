#include "grade_analyzer.hpp"
#include <iostream>

using namespace std;

double calculateTotal(double score1, double score2, double score3) {
    return  score1 + score2 + score3; //returns scores added together
}

double calculateAverage(double total, int count){
    if (count <= 0){ 
        // checks if the count is less than or equal to 0
        return 0.0;
    } else {
    return total / count; // otherwise, returns total divided by count
    }
}

char determineLetterGrade(double average) {
    if (average >= 90) { // if avg greater than (>) or equal to (=) (ex >=) 90, show A
        return 'A';
    } else if (average >= 80){ // if avg >= 80, show B
        return 'B';
    } else if (average >= 70){ // if avg >= 70, show C
        return 'C';
    } else if (average >= 60){ // if avg >= 60, show D
        return 'D';
    } else{
        return 'F'; // else, return F
    }
}

bool isPassing(double average) {
    if (average >= 70){ // checks if average is greater than or equal to 70 and returns true
        return true;
    } else {
    return false; // any other condition will return false
    }
}

bool isValidScore(double score) {
    if (score >= 0 && score <= 100){
        return true; // checks if score is greater than 0 and less than 100
    } else {
    return false; // anything else returns false
    }
}

void printGradeReport(double total, double average, char letterGrade, bool passing) {
    cout << endl;
    cout << "Grade Report" << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Letter Grade: " << letterGrade << endl;

    if (passing) {
        cout << "Status: Passing" << endl;
    } else {
        cout << "Status: Not Passing" << endl;
    }
}
