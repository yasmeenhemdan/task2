#include <iostream>
using namespace std;
int main()
{

    // fun to employment application form

    int ApplicantEmploymentNO, DateOfBirth, NationalIDNO, TelephoneNO;
    string JobAppliedFor, EducationalData, Languages, Name, Gender, Address, Nationality, Religion, MaritalStatus;
    cout << "please enter your information ..."<<endl;

    cout << "applicant employment no. : " << ApplicantEmploymentNO;
    cin >> ApplicantEmploymentNO;

    cout << "job applied for : " << JobAppliedFor;
    cin >> JobAppliedFor;

    cout << "educational data : " << EducationalData;
    cin >> EducationalData;

    cout << "languages : " << Languages;
    cin >> Languages;

    // var to personal data

    cout << "personal data :-"<<endl;

    cout << "name : " << Name;
    cin >> Name;

    cout << "date of birth : " << DateOfBirth;
    cin >> DateOfBirth;

    cout << "gender: male / female : " << Gender;
    cin >> Gender;

    cout << "national I.D No. : " << NationalIDNO;
    cin >> NationalIDNO;

    cout << "nationality : " << Nationality;
    cin >> Nationality;

    cout << "religion : " << Religion;
    cin >> Religion;

    cout << "marital status : " << MaritalStatus;
    cin >> MaritalStatus;

    // var to contact data

    cout << "contact data :-"<<endl;

        
    cout << "address : " << Address;
    cin >> Address;

    cout << "telephone No. : " << TelephoneNO;
    cin >> TelephoneNO;
    cout<<"thank you for applying for the job";
}