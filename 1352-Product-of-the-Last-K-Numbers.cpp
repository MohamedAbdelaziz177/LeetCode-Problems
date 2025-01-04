class ProductOfNumbers {
public:
    vector<int>v;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        v.push_back(num);
    }
    
    int getProduct(int k) {
        reverse(v.begin(), v.end());

        int p = 1;

        for(int i = 0; i < k; i++) p *= v[i];

                reverse(v.begin(), v.end());
       return p;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */