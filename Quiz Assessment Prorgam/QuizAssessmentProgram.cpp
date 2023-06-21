#include<iostream>
#include<fstream>
using namespace std;


void physics(char (&m)[10]) {
    cout<<"---------------------------------------------"<<endl;
    //For mentioning that student chose "Physics" in DataBase.
    ofstream stuDB("studentDB.txt", ios::app);
    if (stuDB.is_open()) {
        stuDB << "Subject: Physics" << endl;
    }
    ifstream phyMS("PhysicsMS.txt");
    char awns[10];
    if (phyMS.is_open()) {
        char line[500];
        int lineCount = 0;


        while (phyMS.getline(line, 500)) {
            lineCount++;

            // Read five lines
            if (lineCount <= 6) {
                cout << line << endl;
            }


            // Skip one line
            if (lineCount == 6) {
                lineCount = 0; // Reset the line counter
            }
        }
    }

    cout<<"---------------------------------------------"<<endl;

    cout<<"Now, Awsner them in sequnce (1-10) / (a-d) / (Only smallcase): \n";
    for (int i = 0; i < 10; ++i) {
        cout<<"MCQ no."<<i+1<<" : ";
        cin>>awns[i];
        m[i]=awns[i];

    }
    cout<<"\n---------------------------------------------"<<endl;

    cout << "Student Given Answer: ";
    for (int i = 0; i < 10; i++) {
        cout <<"("<<i+1<<")-"<<m[i] << "  ";
    }

    char phyAnwsers[10] = {'c','a','b','b','a','a','c','c','b','d'};

    int marks =0;
    int correctQuestions[10] = {0};


    for (int i = 0; i < 10; ++i) {
        if (m[i]==phyAnwsers[i]){
            marks++;
            correctQuestions[marks-1] = i;
        }


    }
    cout << "\nStudent's Total Correct Answer: "<<marks<<endl;
    cout << "Students Correct Questions: ";
    for (int i = 0; i < marks; i++) {
        cout << correctQuestions[i]+1 << " ";
    }

    cout<<"\nStatus: ";
    if(marks >3){
        cout<<" Passed"<<endl;
    } else {
        cout<<" Failed";
    }

    //Now, Writing all our data into the studentDB file.


    ofstream write1 ("studentDB.txt",ios::app);
    if(stuDB.is_open()){

        write1 << "Student Given Answer: ";
        for (int i = 0; i < 10; i++) {
            write1 <<"("<<i+1<<")-"<<m[i] << "  ";
        }

        write1 << "\nStudent's Total Correct Answer: "<<marks<<endl;

        write1 << "Students Correct Questions: ";
        for (int i = 0; i < marks; i++) {
            write1 << correctQuestions[i]+1 << " ";
        }

        write1<<"\nStatus: ";
        if(marks >3){
            write1<<" Passed"<<endl;
        } else {
            write1<<" Failed\n";
        }

        write1<<"\n---------------------------------------------"<<endl;
    }


    cout<<"\n---------------------------------------------"<<endl;

}

void biology(char (&m)[10]) {
    cout<<"---------------------------------------------"<<endl;
    //For mentioning that student chose "Physics" in DataBase.
    ofstream stuDB("studentDB.txt", ios::app);
    if (stuDB.is_open()) {
        stuDB << "Subject: Biology" << endl;
    }
    ifstream bioMS("BiologyMS.txt");
    char awns[10];
    if (bioMS.is_open()) {
        char line[500];
        int lineCount = 0;


        while (bioMS.getline(line, 500)) {
            lineCount++;

            // Read five lines
            if (lineCount <= 6) {
                cout << line << endl;
            }


            // Skip one line
            if (lineCount == 6) {
                lineCount = 0; // Reset the line counter
            }
        }
    }

    cout<<"---------------------------------------------"<<endl;

    cout<<"Now, Awsner them in sequnce (1-10) / (a-d) / (Only smallcase): \n";
    for (int i = 0; i < 10; ++i) {
        cout<<"MCQ no."<<i+1<<" : ";
        cin>>awns[i];
        m[i]=awns[i];

    }
    cout<<"\n---------------------------------------------"<<endl;

    cout << "Student Given Answer: ";
    for (int i = 0; i < 10; i++) {
        cout <<"("<<i+1<<")-"<<m[i] << "  ";
    }

    char bioAnwsers[10] = {'a','a','b','d','a','c','a','c','b','a'};

    int marks =0;
    int correctQuestions[10] = {0};


    for (int i = 0; i < 10; ++i) {
        if (m[i]==bioAnwsers[i]){
            marks++;
            correctQuestions[marks-1] = i;
        }


    }
    cout << "\nStudent's Total Correct Answer: "<<marks<<endl;
    cout << "Students Correct Questions: ";
    for (int i = 0; i < marks; i++) {
        cout << correctQuestions[i]+1 << " ";
    }


    //Now, Writing all our data into the studentDB file.


    ofstream write1 ("studentDB.txt",ios::app);
    if(stuDB.is_open()){

        write1 << "Student Given Answer: ";
        for (int i = 0; i < 10; i++) {
            write1 <<"("<<i+1<<")-"<<m[i] << "  ";
        }

        write1 << "\nStudent's Total Correct Answer: "<<marks<<endl;

        write1 << "Students Correct Questions: ";
        for (int i = 0; i < marks; i++) {
            write1 << correctQuestions[i]+1 << " ";
        }
        write1<<"\n---------------------------------------------"<<endl;
    }


    cout<<"\n---------------------------------------------"<<endl;

}


void chemistry(char (&m)[10]) {
    cout<<"---------------------------------------------"<<endl;
    //For mentioning that student chose "Physics" in DataBase.
    ofstream stuDB("studentDB.txt", ios::app);
    if (stuDB.is_open()) {
        stuDB << "Subject: Chemistry" << endl;
    }
    ifstream chemMS("ChemistryMS.txt");
    char awns[10];
    if (chemMS.is_open()) {
        char line[500];
        int lineCount = 0;


        while (chemMS.getline(line, 500)) {
            lineCount++;

            // Read five lines
            if (lineCount <= 6) {
                cout << line << endl;
            }


            // Skip one line
            if (lineCount == 6) {
                lineCount = 0; // Reset the line counter
            }
        }
    }

    cout<<"---------------------------------------------"<<endl;

    cout<<"Now, Awsner them in sequnce (1-10) / (a-d) / (Only smallcase): \n";
    for (int i = 0; i < 10; ++i) {
        cout<<"MCQ no."<<i+1<<" : ";
        cin>>awns[i];
        m[i]=awns[i];

    }
    cout<<"\n---------------------------------------------"<<endl;

    cout << "Student Given Answer: ";
    for (int i = 0; i < 10; i++) {
        cout <<"("<<i+1<<")-"<<m[i] << "  ";
    }

    char chemAnwsers[10] = {'a','b','c','b','b','b','a','a','c','a'};

    int marks =0;
    int correctQuestions[10] = {0};


    for (int i = 0; i < 10; ++i) {
        if (m[i]==chemAnwsers[i]){
            marks++;
            correctQuestions[marks-1] = i;
        }


    }
    cout << "\nStudent's Total Correct Answer: "<<marks<<endl;
    cout << "Students Correct Questions: ";
    for (int i = 0; i < marks; i++) {
        cout << correctQuestions[i]+1 << " ";
    }

    //Now, Writing all our data into the studentDB file.


    ofstream write1 ("studentDB.txt",ios::app);
    if(stuDB.is_open()){

        write1 << "Student Given Answer: ";
        for (int i = 0; i < 10; i++) {
            write1 <<"("<<i+1<<")-"<<m[i] << "  ";
        }

        write1 << "\nStudent's Total Correct Answer: "<<marks<<endl;

        write1 << "Students Correct Questions: ";
        for (int i = 0; i < marks; i++) {
            write1 << correctQuestions[i]+1 << " ";
        }
        write1<<"\n---------------------------------------------"<<endl;
    }

    cout<<"\n---------------------------------------------"<<endl;

}


int main(){
    char stuAnswer[10];
    char stuName[100];
    char stuID[100];
    cout<<"Quiz Assessment Program\n";

    cout<<"---------------------------------------------"<<endl;

    cout<<"LOGIN CREDENTIALS\n";
    cout<<"Enter Name: ";
    cin.getline(stuName,100);
    cout<<"Enter ID: ";
    cin.getline(stuID,100);

    ofstream stuDB ("studentDB.txt",ios::app);
    if(stuDB.is_open()){
        stuDB <<"\nName: "<<stuName << "\n"<<"ID: "<<stuID << endl;
    }

    cout<<"---------------------------------------------"<<endl;
    cout<<"Choose 1 Subject Fo Quiz:\n\n";
    cout<<"1)Physics\n";
    cout<<"2)Biology\n";
    cout<<"3)Chemistry\n";
    int n = -99;
    cout<<"Enter choice (1-3): ";
    cin>>n;
    switch (n) {
        case 1: {
            physics(stuAnswer);
            break;
        }
        case 2: {
            biology(stuAnswer);
            break;
        }
        case 3: {
            chemistry(stuAnswer);
            break;
        }
    }


    return 0;
}

