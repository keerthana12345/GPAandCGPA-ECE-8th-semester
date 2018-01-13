#include <iostream>
using namespace std;
int calculateGPA();
int calculateCGPA();
int main()
{
    int b;
    cout<<" calculation for gpa and cgpa:\n";
    cout<<" enter your choice: ";
    cin>>b;
    switch(b)
    {
    case 1:
        calculateGPA;
        break;
    case 2:
        calculateCGPA;
        break;
    }

  int calculateGPA();
  {
    int l;
    cout<<" calculate GPA for 8th sem\n";
    float credit[l];
    float point[l];


    for(int i=0;i<1;i++)
    {
        cout<<"wireless comm: ";
        cin>>credit[i];
        cout<<"wireless networks: ";
        cin>>credit[i];
        cout<<"elective 5: ";
        cin>>credit[i];
        cout<<"elective 6: ";
        cin>>credit[i];
        cout<<"project work: ";
        cin>>credit[i];
        cout<<"wireless comm gradept: ";
        cin>>point[i];
        cout<<"wireless networks gradept: ";
        cin>>point[i];
        cout<<"elective 5 gradept: ";
        cin>>point[i];
        cout<<"elective 6 gradept: ";
        cin>>point[i];
        cout<<"project work gradept: ";
        cin>>point[i];
    }

    float sum=0;
    float tot;
    for(int j=0;j<1;j++)
    {
        tot=credit[j]*point[j];
        sum=sum+tot;
    }

    float totCr=0;
    for(int k=0;k<1;k++)
    {
        totCr=totCr+credit[k];
    }

    cout<<"\n\n\nTotal Points: "<<sum<<" . Total Credits: "<<totCr<<" .Total GPA: "<<sum/totCr<<" .";
  }
  int calculateCGPA();
{

    int l;
    cout<<"to calculate CGPA";
    cout<<"How many semester results do you want input? :";
    cin>>l;
    float semrs[l];
    int i;

    for(i=0;i<l;i++)
    {
        cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
        cin>>semrs[i];
    }

    float semtot=0;
    for(int j=0;j<l;j++)
    {
        semtot=semtot+semrs[j];
    }

    cout<<"******** Your CGPA is "<<semtot/l<<" **********";
}}

