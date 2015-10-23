//Name:Evelyn Murillo
//October 22 2015
#include <iostream> // for cin and cout
#include <fstream> // to read files and use fin and fout
#include <cstdlib> // to exit
#include <string> //for stings 
#include <iomanip> // set precision making the output pretty
	
using namespace std;
	
int main(){
	    
	    ifstream fin;
	    ofstream fout;
	    char userFile[12];//declaring the variables
	    string lastName;
	    string firstName;
	    string maxStudent;
	    double score1;
	    double score2;
	    double score3;
	    double score4;
	    double score5;
	    double score6;
	    double average;
	    double maxAverage;
	    
	    cout << "Enter file  name, that  you want to get!!!" << endl;//user input
	    cin >> userFile;
	    
	    fin.open(userFile);
	    fout.open("result.txt");//the format the results will print ont
	    
	    //seeing if the input or output will fail
	    if(fin.fail() || fout.fail())
	    {
	        cout << "Error!" << endl;
	        exit(1);
	    }
	    
	   
	    while(fin >> firstName >> lastName >> score1 >> score2 >> score3 >> score4 >> score5 >> score6)
	    {//reading file
	        average = (score1 + score2 + score3 + score4 + score5 + score6) / 6; //calculations that finds the average
	    
	        fout.setf(ios::fixed);//making this a pretties print 
	        fout.setf(ios::showpoint);
	        fout.precision(2);
	        fout.setf(ios::left);
	        
	        fout << setw(15) << firstName << setw(15) << lastName << setw(8) << score1 << setw(8) << score2 << setw(8) << score3 
	             << setw(8) << score4 << setw(8) << score5<< setw(8) << score6 << setw(8) << average << endl;
	             
	       //this will find the maximum average 
	       if(average > maxAverage)
	       {
	            maxStudent = firstName + " " + lastName;
	            maxAverage = average;
	       }
	       else
	       {
	            maxAverage;
	       }
	    }
	    
	    fout << "The high schore is ! " << maxStudent << endl;
	    
	    fin.close();//have to have this or their will be a error in the code
	    fout.close();
	    return 0;
	}
