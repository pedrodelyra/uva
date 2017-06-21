#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;

vector<ii> offson = {
                     {       3,    1}, {        5,   2}, {       11,   4}, {       29,   6}, {       97,   8},
                     {      127,  14}, {      541,  18}, {      907,  20}, {     1151,  22}, {     1361,  34},
                     {     9587,  36}, {    15727,  44}, {    19661,  52}, {    31469,  72}, {   156007,  86},
                     {   360749,  96}, {   370373, 112}, {   492227, 114}, {  1349651, 118}, {  1357333, 132},
                     {  2010881, 148}, {  4652507, 154}, { 17051887, 180}, { 20831533, 210}, { 47326913, 220},
                     {122164969, 222}, {189695893, 234}, {191913031, 248}, {387096383, 250}, {436273291, 282}
                    };

int main() {
        int n;
        while(~scanf("%d", &n)) {
                int max_dist = 0;
                for(int i = 0; offson[i].first <= n and i < offson.size(); ++i)
                        max_dist = offson[i].second;
                printf("%d\n", max_dist);
        }
        return 0;
}
