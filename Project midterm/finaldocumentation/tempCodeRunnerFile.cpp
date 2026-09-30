const int X = 100; // constant
//--------------ADMIN'S------------//
string patient_name1[X], patient_name2[X], month[X], department_name[X], doctor_name[X], doc_timings[X], doc_charges[X];
int age[X], weight[X], day[X], year[X], time[X], charges[X];
//------------PATIENT'S-----------//
string p_name[X], p_name2[X], p_month[X], p_department_name[X], p_doctor_name[X], doc_names[X], ch[X];
int p_age[X], p_weight[X], p_day[X], p_year[X], p_time[X], p_charges[X], rt_doc[X];

//--------------------------------------VARIABLES---------------------------//
int i = 0, j = 0, y = 0, c = 0, v = 0, b = 0, k = 0;
int mainchoice;
int a; // department selection variable
int opt1, opt2, opt3, opt4;
char availability, discount;
int num_of_visit;
string p_n1, p_n2, p_m;
int p_a, p_w, p_d, p_y, p_tm, fees, p_t;
string department, doc_n;
//-------------ADMIN'S------------//
string user, pass_of_admin_account, reenter_pass_of_admin_account, dis_name, dis_name2;
int option, count = 0, dis_charges, dis_cal;
string history1, history2, passA;
//-----------PATIENT'S-----------//
string patient_username, pass_of_patient_account, reenter_pass_of_patient_account;
int p_option, p_count = 0, choose_doc, d;
string check1, check2, passP, recs;