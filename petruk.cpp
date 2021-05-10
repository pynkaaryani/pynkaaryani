#include <iostream>
#include <cstring>

/*Anggota Kelompok :
1. Muhammad Ega Putra Anzani
2. Nur Mita Utami
3. Pynka Aryani Angelia Haryanto*/

using namespace std;
const int cols = 16, rows = 15;

char words[rows][cols] =      { "tgbwwinterwsesn",
                                "aaunttmmhfoodnb",
                                "jlwcqldzmpmvdmr",
                                "asagmquwvvbsohi",
                                "bwplotanadtpgnc",
                                "rewngodjcpnatnk",
                                "eeotwosbqharrsa",
                                "azcgeswewnaknpb",
                                "dinnerqodlwdcar",
                                "onopkwmparktzcc",
                                "qbfrogmamwpweey",
                                "lqzqnnmrzjjsclg",
                                "mosgzczetdbooto",
                                "pdcrzmsngrdnrpz",
                                "ohnkzwaterjgtra"};

char *getWordVertical(int q);
char *reverse(char *o);
bool searchVertical(char *n);
bool searchHorizontal(char *n);


int main(){
  char word[16];
  int n;
  cin>>n;
  cin.ignore(1,'\n');
  for(int i=0;i<n;i++){
    cin.getline(word,16,'\n');
    if(searchVertical(word) || searchHorizontal(word))
      cout<<"Ada\n";
    else
      cout<< "Tidak Ada\n";
     }
    return 0;
}

bool searchHorizontal(char *n){
	bool mantap;
	for(int i=0;i<15;i++){
		if(strstr((words+i),n) || strstr(reverse((words+i)),n)){
			mantap = true;
			break;
		}
		else
		{ 
		    mantap = false;
		}
	}
		return mantap;
}

char *getWordVertical(int q){
    
	static char string[16];
		for(int i=0;i<15;i++){
		*(string+i) = words[i][q];
		}
		
		char *n = string;
		return n;
}

char *reverse(char *o){
    static char n[16];
    for(int i = 0;i<15;i++){
        *(n+i) = *(o+14-i);
    }

    return n;
}

bool searchVertical(char *n){
    bool mantap;
	for(int i=0;i<15;i++){
		if(strstr(getWordVertical(i),n) || strstr(reverse(getWordVertical(i)),n)){
			mantap = true;
			break;
		}
		else
		{
		    mantap = false;

		}
	}
	return mantap;
}
