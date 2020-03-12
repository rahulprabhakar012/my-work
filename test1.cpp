#include <bits/stdc++.h>
#include <stack>

using namespace std;

vector<string> split_string(string);

int max(int a,int b){
    if(a>b)
    return a;
    else {
    return b;
    }
}
int op(int a, int b){
    cout<<a<<b<<endl;
    return ((a&b) ^ (a|b) & (a^b));
}
int andXorOr(vector<int> a) {
int m1,m2,s=0,i,j;
m2=32667;
    for(i=0;i<a.size();i++)
    {    m1=a[i];
        for(j=i+1;j<a.size();j++)
    { 
        if(a[j]<m1){
            m2=m1;
            m1=a[j];
        }
        else if((a[j]<m2)&&(a[j]!=m1))
            m2=a[j];
    
    }
    s=max(s,op(m1,m2));
    }
    return s;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int a_count;
    cin >> a_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(a_count);

    for (int a_itr = 0; a_itr < a_count; a_itr++) {
        int a_item = stoi(a_temp[a_itr]);

        a[a_itr] = a_item;
    }

    int result = andXorOr(a);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

