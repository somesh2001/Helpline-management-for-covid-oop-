//MULTIPLE INHERITENCE1
#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <ctype.h>

using namespace std;
//base class 1
class symptoms
{
private:
    string prec;
    string a[10];
    //array of size 10
    void symp()
    { // this method asks the questions to the user and the user input gets stored in an array
        cout<<"\n___________________________________________\n";
        cout<<"\nEnter y for 'yes' and 'n' for no:\n";
        cout<<"1.Do you have fever(y/n) :" << endl;
        cin>>a[0];
        cout<<"2.Do you have cough(y/n) :" << endl;
        cin>>a[1];
        cout<<"3.Do you have tiredness(y/n) :" << endl;
        cin>>a[2];
        cout<<"4.Are you facing difficulty in breathing(y/n) :" << endl;
        cin>>a[3];
        cout<<"5.Do you have chest pain(yes/no) :" << endl;
        cin>>a[4];
        cout<<"6.Do you have loss of test or smell(y/n) :" << endl;
        cin>>a[5];
        cout<<"7.Do you have ache and pains(y/n) :" << endl;
        cin>>a[6];
        cout<<"8.Do you have headache(y/n) :" << endl;
        cin>>a[7];
        cout<<"9.Do you have rash on skin(y/n) :" << endl;
        cin>>a[8];
        cout<<"10.Do you have dry cough(y/n) :" << endl;
        cin>>a[9];
        cout<<"\n____________________________________________\n";}
    void precaution(string b)                      //function to display the precautions using file handeling
    {   ifstream ob;
        ob.open(b);
        while (getline(ob, prec))
        {cout << "\n"<< prec;}
        ob.close();}
    void symp(char r)                           //depending on the user input this function tells that user health falls under which category
    {   int n = 0;
        for (int i=0;i< 10; i++)
        { if (a[i] == "y" || a[i] == "Y")
            {                        //if there is Yes(y)
                n = n + 1;}         //then add 1 to the 'n'
}
        if (n<=6)
        { // this if else loop decide what symptoms user have and also gives precautions
            cout<<"\n\t\t=====================\t\t\n";
            cout<<"Result:-     || You have none symtoms ||" << endl;
            cout<<"\t\t=====================\t\t\n";
            precaution("precaution.txt");}
        else if (n<=8)
        {   cout<<"\n\t\t=====================\t\t\n";
            cout<<"Result:-     || You have Mild symtoms ||\n"<<endl;
            cout << "\t\t=====================\t\t\n";
            precaution("precaution2.txt");}
        else if (n>8)
        {   cout<<"\n\t\t=====================\t\t\n";
            cout<<"Result:-     || You have Strong symtoms ||" << endl;
            cout<<"\t\t=====================\t\t\n";precaution("precaution3.txt");}
        else
        {cout << "------invalid input please try again------";}}
protected:
    void display()          //calling all the methods which is there in private
    {   symp();
        symp('a');
        cout << "\n____________________________________________\n";};
};
//base class 2
class contact
{
private:
    string p;
    void contact_info()    //this method displays the name of contact departments
    {   string con[7] = {" [Doctor] ", " [Emergency] ", " [Ambulance] ", " [Police] ", " [Covid helpline] ", " [Hospital] ", " [Child helpline] \n"};
        cout << "____________________________________\n\n";
        for (int i = 0; i < 7; i++)
        { cout<<i + 1<<con[i]<<"\n";
        };
        cout<<"____________________________________\n\n";
        cout<<" Select any Department which information you want " << endl; //taking user input for displaying the information
        cout<<"Please Enter option number = ";
        cin>>p;
        cout<<"\n____________________________________\n";
        if(p=="1")                              // if else condition - on the basis of user input give the information
        {   cout<<"\n\tInformation:-\n";
            cout<<"\n\t[A] Name = Mr. Sinha\n";
            cout<<"\n\t[B] contact number = 9575293103\n";
            cout<<"\n\t[c] Available time slot =  9 A.M to 5 P.M\n";
            cout<<"\n\t[D] Address = Rajwada Road Indore, pin-452001\n";}
        else if(p=="2")
        {cout<<"\nInformation:-\n";cout<<"\n[A] contact number = 9645565890\n";cout<<"\n[B] Available = 24*7 \n";}
        else if (p == "3")
        {cout<<"\nInformation:-\n";cout<<"\n[A] contact number = 108\n";cout<<"\n[B] Available = 24*7 \n";}
        else if (p=="4")
        {cout<<"\nInformation:-\n";cout<<"\n[A] contact number = 100\n";cout<<"\n[B] Available = 24*7 \n";}
        else if (p == "5")
        {cout<<"\nInformation:-\n";cout<<"\n[A]Helpline Number: +91-11-23978046\n";cout<<"\n[B]Toll Free: 1075\n";
        cout<<"\n[c]Helpline Email ID: ncov2019@gov.in\n";
        }
        else if (p == "6")
        {cout<<"\nInformation:-\n";cout<<"\n[A] Hospital Name = Patidar Hospital\n";cout<<"\n[B] contact number = 9753374899\n";
        cout<<"\n[c] Available time slot =  9 A.M to 5 P.M\n";cout<<"\n[D] Address =  Ujjain, Madhya Pradesh, pin-45220\n";
        }
        else if (p == "7")
        {cout<<"\nInformation:-\n";cout<<"\n[A] Child helpline number = 1098\n";cout<<"\n[c] Available time  =  24*7 day and night\n";}
        else
        {cout << "\ninvalid input please try again" << endl;
            contact_info();}}

    //if user input is not valid then again ask the user for their input calling all the methods which is there in private
protected:
    void display2()
    {contact_info();
    cout << "\n_______________________________________\n";}
};
//base class 3
class consultation
{
private:
    string input;
    string time_appointment2;
    string g;
    int q = 0;
    string appointment2;
    void operator--() //displaying all the options using opertator overloading
    {   string pr[3] = {" [doctor consultation] ", " [App consultation] ", " [Mental Support] \n"};
        cout << "\n_________________________________\n\n";
        for (int i = 0; i < 3; i++)
        {cout << i + 1 << pr[i] << "\n";}
        cout << "_________________________________\n\n";}

    void operator++()       //this operator is used for displaying all the doctors names and also for taking inputs
    {                       
        string appointment; // from the user.
        int p;
        string time_slot;
        cout<<"\n_________________________________\n";
        string con[6] = {" [Dr. Sunil Agrawal's] ", " [Dr. Jatin Agrawal] ", " [Dr. Hema Jajoo] ", " [Mr. Sanjeev Tripathi] ", " [Dr. Apoorv Patodi] "};
        for (int i = 0; i < 5; i++)
        {cout<< "\n"
        <<i + 1<< con[i] << "\n";}
        cout<<"\n_________________________________\n";
        // declaring maps
        map<int, string> phone;
        map<int, string> avai;
        map<int, string> addr;
        map<int, string> experience;
        map<int, string> fees;
        // declaring keys and values in above maps.
        phone[1] = "+91 11411 94717";
        phone[2] = "+91 7697671500";
        phone[3] = "+91 9753374899";
        phone[4] = "+91 9436781590";
        phone[5] = "+91 7000094869";
        avai[1] = "9 A.M to 8 P.M";
        avai[2] = "9 A.M to 8 P.M";
        avai[3] = "9 A.M to 8 P.M";
        avai[4] = "9 A.M to 8 P.M";
        avai[5] = "9 A.M to 8 P.M";
        addr[1] = "Vijay Nagar, Indore";
        addr[2] = "1st Floor, Heritage Building, Indore";
        addr[3] = "40, Patrakar Colony, Indore";
        addr[4] = "G-12, Kohinoor Tower, Indore";
        addr[5] = "Kanchan Bag, Indore";
        experience[1] = " BDS, MDS - Prosthodontist (18 years as specialist)";
        experience[2] = " MBBS, M.D. Psychiatry (11 Years Experience Overall) ";
        experience[3] = " MBBS, DGO Gynecologist(30 years as specialist)";
        experience[4] = " M.Phil- Medical & Social Psychology (15 years as specialist) ";
        experience[5] = "B.Sc. - Home Science (Food & Nutrition) 8 Years Experience Overall ";
        fees[1] = "300 R.s Consultation fee at clinic";
        fees[2] = "400 R.s Consultation fee at clinic";
        fees[3] = "600 R.s Consultation fee at clinic";
        fees[4] = "400 R.s Consultation fee at clinic";
        fees[5] = "250 R.s Consultation fee at clinic";

        cout << "\nSelect the option number(1,2,3,4,5) = \n";
        cin >> g;
        cout << "\n_________________________________\n";
        try
        {int s = 0;                         // using try except loop if user gaves the wrong input then this loop is going
        for (int i = 0; g[i] != '\0'; i++) // to execute.
        {
            if (isalpha(g[i]) != 0)
                    s++;}
            if (g == "0")
            {throw 5;}
            if (s > 0)
            { throw 4;}
            if (s == 0)
            {stringstream degree(g);
            degree>>p;}
            if (p > 5 || p < 0)
            {
                throw 2;
            }
            if (p > 0 || p < 5)
            { // accessing the values of map using by using the user input as a key
                cout << "\nInformation:-\n";
                cout << "\nName :-" << con[p - 1] << "\n"<< "\nContact number. :- " << phone[p] << "\n"<< "\nAvailable time :- " << avai[p] << "\n";
                cout << "\nAddress :- " << addr[p] << "\n\n"<< "Experience:- " << experience[p] << "\n"<< "\nFees:- " << fees[p] << "\n";
                cout << "\n_________________________________\n";
                cout << "\nPress----'Y' to book appointment and any other key to avoid the appointment: \n"; // taking input from user about the appointment
                cin >> appointment;
                if (appointment == "y" || appointment == "Y")
                {   cout << "\n           ==============================\n";
                    cout << "\n              Please choose time slot: \n";
                    cout << "\n           ==============================\n";
                    cout << "available time slot = [1] |9 A.M to 1 P.M| , [2] |3 P.M to 8 P.m|" << endl;
                    while (time_slot != "1" || time_slot != "2")
                    {   cout << "Choose time slot(1,2): ";
                        cin >> time_slot;
                        if (time_slot == "1" || time_slot == "2")
                        {break;
                    }
                    if (time_slot != "1" || time_slot != "2")
                        {
                            cout << "\nwrong input please write again\n";}}
                    if (time_slot == "1")
                    {
                        cout << "\n.::Time slot available\n\nplease visit between |9 A.M to 1 P.M|" << endl;}
                    else if (time_slot == "2")
                    {
                        cout << "\n.::Time slot available\n\nplease visit between |3 P.M to 8 P.M|" << endl;}}
                else
                {
                    cout << "No problem " << endl;}}}
        catch (int a)
        {
            cout << "\n =======please enter number between (1 to 5) :"<< "=========";
            consultation dis;
            ++dis;
            cout << "\n_________________________________\n";}}
    void operator++(int)    // to display the mental support using postfix operator
    {
        string data;
        string questions[6];
        cout<<"\nPlease answer the following Questions: \n";
        cout<<"\nEnter y for 'yes' and 'n' for no:\n";
        cout<<"\n1.Do you feel depressed (y/n) :" << endl;
        cin >> questions[0];
        cout << "2.Do you think about dying or killing yourself. (y/n) :" << endl;
        cin >> questions[1];
        cout << "3.Do you often get tired for no reason (y/n) :" << endl;
        cin >> questions[2];
        cout << "4.Do you think unnecessarily. (y/n) :" << endl;
        cin >> questions[3];
        cout << "5.Do you feel detached from other people since witnessing or experiencing a traumatic event? (y/n): " << endl;
        cin >> questions[4];
        cout << "6. you don't thave a good realation with your friends and family (y/n): " << endl;
        cin >> questions[5];
        cout << "\n";
        //this for loop counting the number of yes(y) given by the user
        for (int i = 0; i < 6; i++)
        {
            if (questions[i] == "y" || questions[i] == "Y")
            { 
              q = q + 1;}               //if there is Yes(y) then add 1 to the 'q'
        } 
        if (q <= 3)
        {
            cout << "\n | *Your Mental health is Absolutely fine\n you are mentally strong* |\n";}
        else if (q > 4)
        {   ifstream ob1; //using file handelling call the file
            ob1.open("mentalSupport.txt");
            while (getline(ob1, data))
            {       cout << "\n"
                     << data;}
            ob1.close();
            cin >> appointment2;
            if (appointment2 == "y" || appointment2 == "Y")
            {   cout<<"\n           ==============================\n";
                cout<<"\n              Please choose time slot: \n";
                cout<<"\n           ==============================\n";
                cout<<"\nAvailable time slot = [1] |9 A.M to 1 P.M|, [2]  |3 P.M to 6 P.m| " << endl;
                while (time_appointment2 != "1" || time_appointment2 != "2")
                {   cout << "Choose time slot(1,2): ";
                    cin >> time_appointment2;
                    if (time_appointment2 == "1" || time_appointment2 == "2")
                    {
                        break;}
                    if (time_appointment2 != "1" || time_appointment2 != "2")
                    {
                        cout << "\nwrong input please write again\n";}}
                if (time_appointment2 == "1")
                {
                    cout << "\n.::Time slot available\n\nplease visit between |9 A.M to 1 P.M|" << endl;}
                else if (time_appointment2 == "2")
                {
                    cout << "\n.::Time slot available\n\nplease visit between |3 P.M to 6 P.M|" << endl;}}
            else
            {
                cout << "No problem" << endl;}}}
public:        //calling all the methods
    string data2;
    void display3()
    {   consultation dis;
        --dis;
        cout << "Please Enter the choise(1,2,3): " << endl;
        cin >> input;
        if (input == "1")
        {++dis;}
        else if (input == "2")
        {   ifstream ob2; //using file handelling call the file
            ob2.open("Appconsultation.txt");
            while (getline(ob2, data2))
            {    cout << "\n"<< data2;}
                 ob2.close();
                 }
        else if (input == "3")
        {   cout << "\n          | Mental support | \n";
            dis++;}
        else
        {   cout << "\ninvalid input\nplease write again\n";
            display3();}}
};
class location
{
private:
    int a;
    string g;
    string b;
  void Location_input()    //all the locations
    {
        string areas[8] = {" [Lalbagh Palace] ", " [Rajwada] ", " [Nehru Park] ", " [Pipliyapula Regional Park] ", " [Heritage Market.] ", " [Topkhana Market] ", " [Vijay Nagar ] ", " [Sitlamata Bazar] "};
        cout<<"\n"<<endl;
        for (int i = 0; i < 8; i++)
        {
        cout<<i + 1 << areas[i] << endl;}
        cout<<"\nEnter your location number (1,2,3,4,5,6,7,8): ";
        cin>>g;
        try
        {   int s = 0;                         // using try except loop if user gaves the wrong input then this loop is going
            for (int i = 0; g[i] != '\0'; i++) // to execute.
            {    if (isalpha(g[i]) != 0)
                    s++;}
            if (s > 0)
            {
            throw 4;}
            if (s == 0)
            {   stringstream degree(g);
                degree>>a;}
            if (a > 8 || a <= 0)         //if user input is greater than 8 or  equal to zero it will throw error and again ask the user to enter valid input
            {   throw 4;}}
        catch (int r)
        {   cout << "\t\n\n\n|----invalid input----|";
            cout << "\t\n| ----type again ---- |\n";
            Location_input();}}
    void ambulance()
    {
        map<int, string> ambu; //intiger as key and string as key value
        ambu[1] = "yes";
        ambu[2] = "no";
        ambu[3] = "yes";
        ambu[4] = "no";
        ambu[5] = "yes";
        ambu[6] = "yes";
        ambu[7] = "no";
        ambu[8] = "yes";
        cout << "\n\t_____________________________________________________________________________\n";
        cout << "\n----- Enter your nearby or your location to check ambulance avaibility in your area -----\n";
        Location_input(); //displaying all the locations
        cout << "\n_____________________________________________\n";
        if (ambu[a] == "yes")
        { //if there is any ambilance in the selected location
            cout << "\nambulance is available in your area\n\n[A] contact number = 108\n\n[B] Available = 24*7 \n"
                 << endl;}
        else if (ambu[a] == "no")
        { //if there is No ambilance in the selected location
            cout << "\nsorry , ambulance is not available in your area" << endl;}
        cout << "_____________________________________________\n";
        cout << " \nDo you want to search of for another (y/n): ";
        cin >> b;
        if (b == "y" || b == "Y")
        { // if yes(y) then call the ambulance() method again.
            ambulance();}
        else
        {cout << "No problem";}
        cout << "\n_____________________________________________\n";}
    void cov()
    {   map<int, string> covid;
        covid[1] = "yes";
        covid[2] = "yes";
        covid[3] = "no";
        covid[4] = "yes";
        covid[5] = "yes";
        covid[6] = "no";
        covid[7] = "yes";
        covid[8] = "yes";
        cout<<"\n\t_____________________________________________________________________________\n";
        cout<<"\n----- Enter your nearby or your location to check covid center avaibility in your area -----\n";
        Location_input();
        cout << "\n_____________________________________________\n";
        if (covid[a] == "yes")
        { cout << "\ncovid centers are available in your area\n"<< endl;
            cout << "\nInformation:-\n\n[A]Helpline Number: +91-11-23978046\n\n[B]Toll Free: 1075\n\n[c]Covid center Email ID: ncov2019@gov.in\n"; }
        else if (covid[a] == "no")
        {
        cout<<"\nSorry , covid centers are not available in your area" << endl;}
        cout<<"\n_____________________________________________\n";
        cout<<" \ndo you want to search for another location(y/n) : ";
        cin>>b;
        if (b == "y" || b == "Y")
        {cov();}
        else
        {   cout << "no problem";
            cout << "\n_____________________________________________\n";}}
    void pat()
    {
        map<int, string> patient;
        patient[1] = "no";
        patient[2] = "no";
        patient[3] = "yes";
        patient[4] = "no";
        patient[5] = "yes";
        patient[6] = "no";
        patient[7] = "no";
        patient[8] = "yes";
        cout << "\n\t_____________________________________________________________________________\n";
        cout << "\n----- Enter your nearby or your location to check is there any covid patient is in your area -----\n";
        Location_input();
        cout << "\n_____________________________________________\n";

        if (patient[a] == "yes")
        {
            cout << "\nThere is a covid patient in your area\n\n suggestion:- Avoid going outdoor\n"<< endl;}
        else if (patient[a] == "no")
        {
        cout << "\nNo patient is in your area" << endl;}
        cout << "_____________________________________________\n";
        cout << " \ndo you want to search for another location(y/n) : ";
        cin >> b;
        if (b == "y" || b == "Y")
        {
            pat();}
        else
        {
            cout << "no problem";
            cout << "\n_____________________________________________\n";}}
public:
    void display_location()
    { //three different method becuse in the derived class we need to call one method at a time
        ambulance();}
    void display_location(int t)
    {
        pat();}

    void display_location(char y)
    {
        cov(); }};
// derived class - which inheriting both the base classes
class master : public symptoms, public contact, public consultation, public location
{
public:
    string data;
public:
    //constructor
    master()
    {
        cout << "\n\t **** Welcome to Helpline Management System ****";
        cout << "\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Symptoms check\n\t\t[2] contacts\n\t\t[3] Consultation\n\t\t[4] Ambulance Availability\n\t\t[5] Covid patient near your location\n\t\t[6] Qurantine center \n\t\t";}
    //distructor
    ~master()
    {
        cout << "\nThanks for visiting\n"
             << endl; }
    /*((Encapsulation - from line 134 to 170 ))*/
private:
    string choise;
    int opt;

    void switch_s()                     //switch statement - depending on the user input this statement
    {                                   //either take the user to the main menu or exit the application*/
        switch (opt)
        {
        case 1:
            master();
            input();
        case 0:
            break;}}
    void input()                // Depending on the user input this function call the methods from the base classes
    {
        cout<<"Enter the choice (1,2,3,4,5,6): ";
        cin>>choise;
        if(choise == "1")
        {   display();
            cout << "\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n";
            cin >> opt;
            switch_s();}
        else if (choise == "2")
        {
            display2(); //calling the method from the base class
            cout << "\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n";
            cin >> opt;
            switch_s();}
        else if (choise == "3")
        {
            display3();
            cout << "\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n";
            cin >> opt;
            ofstream obj;
            switch_s();}
        else if (choise == "4")
        {
            display_location();
            cout << "\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n";
            cin >> opt;
            switch_s();
        }
        else if (choise == "5")
        {
            display_location(1);
            cout << "\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n";
            cin >> opt;
            switch_s();}
        else if (choise == "6")
        {
            display_location('h');
            cout << "\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n";
            cin >> opt;
            switch_s();}
        else
        {
            cout << "Invalid input !! try again" << endl;
            input();}}
public:
    //use of polymorphism to display the information
    void Display_info(int a)
    {   cout<<"\n\n\n\t\t\n\t    =====================\n";
        cout<<"\n:)      || *Its great having you* ||\n"<<endl;
    }
    void Display_info(char a)
    {
        cout << ":)      || *Please visit again* ||\n"<<endl;}
    //calling the method from the private Access specifier of this class.
    void call_input()
    {   input();
        Display_info(1);
        Display_info('f');}
};
int main()
{   
    system("color 0A"); //filling the colour
    master p;           //making an object-'p' for the derived class
    p.call_input();     //calling the method from the derived class
    return 0;
}
