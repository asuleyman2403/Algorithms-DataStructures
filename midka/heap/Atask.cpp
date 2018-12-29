#include <iostream>

using namespace std;

int size = 0;
struct heap{
    int value[100001];
    int size;
    heap(){ 
        size = 0;
    }
    void add(int x){
        value[size] = x;
        sift_down(size);
        size++;
    }

    void print(){
        for(int i = 0; i < size; ++i){
            cout << value[i] << " ";
        }
    }
    void sift_down(int pos){
        if(pos >= size) return;
        int ch1_pos =2 * pos + 1;
        int ch2_pos =2 * pos + 2;
        if(value[pos] < max(value[ch1_pos], value[ch2_pos])){
            if(value[ch1_pos] > value[ch2_pos]){
                swap(value[pos], value[ch1_pos]);
                sift_down(ch1_pos);
            }else{
                swap(value[pos], value[ch2_pos]);
                sift_down(ch2_pos);   
            }
        }
    }

};


int main(){

    heap *h = new heap();
    int n;
    cin >> n;
    int v;

    for(int i = 0; i < n; ++i){
        cin >> v;
        h->add(v);
    }


    for(int i = 0;i < n;i++){
        h->sift_down(i);
    }

    h->print();

    return 0;
}