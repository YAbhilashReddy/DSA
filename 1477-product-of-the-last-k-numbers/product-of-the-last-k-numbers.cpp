class ProductOfNumbers {
public:
    vector<int> prepro;
    int size = 0;
    ProductOfNumbers() {
        prepro.push_back(1);
        size = 0;
    }
    
    void add(int num) {
        if(num == 0) prepro = {1} , size = 0;
        else prepro.push_back(prepro.back() * num) ,size++;
    }
    
    int getProduct(int k) {
        if(k > size) return 0;
        return prepro[size] / prepro[size - k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */