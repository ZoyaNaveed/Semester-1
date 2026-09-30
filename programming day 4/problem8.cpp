#include<iostream>
using namespace std;

main()
{

int exam_hour;
cout<< "Enter the exam starting time here (hours): ";
cin>> exam_hour;

int exam_min;
cout<< "Enter the exam starting time here (minutes): ";
cin>> exam_min;

int arrival_hour;
cout<< "Enter the time of arrival here (hours): ";
cin>> arrival_hour;

int arrival_min;
cout<< "Enter the time of arrival here (minutes): ";
cin>> arrival_min;

int diff1;
diff1 = exam_hour - arrival_hour;

if (diff1 < 0){
    diff1 = diff1 * -1;
}

int diff2;
diff2 = exam_min - arrival_min;

if (diff2 < 0){
    diff2 = diff2 * -1;
}


int total_exam_min;
total_exam_min = (exam_hour * 60) + exam_min;

int total_arrival_min;
total_arrival_min = (arrival_hour * 60) + arrival_min;

int sub_total_min;
sub_total_min = (total_exam_min - total_arrival_min);

if (sub_total_min < 0){
    sub_total_min = -1 * sub_total_min;
}

if ( total_arrival_min > total_exam_min){
    cout<< "Late" <<endl;

    if (sub_total_min < 60){
        cout<<sub_total_min << " minutes late from the start";
    }
    if (sub_total_min >= 60 && diff2 < 10){
        cout<< diff1 << ":" << "0"<<diff2<< " hours late from the start";
    }
    if (sub_total_min >= 60 && diff2 >= 10){
        cout<< diff1 << ":" <<diff2<< " hours late from the start";
    }

}

if (total_arrival_min == total_exam_min){
    cout<< "On time" <<endl;
}

if (total_arrival_min < total_exam_min && sub_total_min <= 30 ){
    cout<< "On time" <<endl;

    if (sub_total_min < 60){
        cout<<sub_total_min << " minutes before from the start";
    }
}

else if (total_arrival_min < total_exam_min){
    cout<< "Early" <<endl;

    if (sub_total_min < 60){
        cout<<sub_total_min << " minutes before from the start";
    }
    if (sub_total_min >= 60 && diff2 < 10){
        cout<< diff1 << ":" << "0"<<diff2<< " hours before from the start";
    }
    if (sub_total_min >= 60 && diff2 >= 10){
        cout<< diff1 << ":" <<diff2<< " hours before from the start";
    }

}
}