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
    if (average >= A_MINIMUM) {
        return 'A';
    } else if (average >= B_MINIMUM) {
        return 'B';
    } else if (average >= C_MINIMUM) {
        return 'C';
    } else if (average >= D_MINIMUM) {
        return 'D';
    } else {
        return 'F';
    }
}

bool isPassing(double average) {
    return average >= PASSING_MINIMUM;
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
