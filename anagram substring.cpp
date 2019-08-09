#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.


int sherlockAndAnagrams(string s) {

    int c = 0;
    map<string, int> hash_map;

    for(int i = 0; i < s.length(); i++){

        for(int j = 1; j <= s.length()-i; j++){

            string tmp = s.substr(i, j);
            sort(tmp.begin(), tmp.end());
            if(!hash_map[tmp]){
                hash_map[tmp] = 1;
            }else{
                hash_map[tmp] += 1;
            }
        }
    }
    
    for(auto i : hash_map){
        cout<<i.first<<"-"<<i.second<<endl;
    }
    

    for(auto i : hash_map){
        c += (i.second * i.second-1)/2;
    }

    return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        // int result = sherlockAndAnagrams(s);

        // fout << result << "\n";
    }

    fout.close();

    return 0;
}
