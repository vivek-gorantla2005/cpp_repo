#include <iostream>
#include <string>
#include<map>
using namespace std;

class HashMap {
    private:
    struct HashElement {
        string key;
        string value;
    };
    
    HashElement hash_table[100];

    int hashFunction(const string &key) {
        int key_len = key.length();
        return key_len % 100;
    }

    public:
    HashMap() {
        for (int i = 0; i < 100; i++) {
            hash_table[i].key = "";
            hash_table[i].value = "";
        }
    }

    void hashtable(const string &key, const string &val) {
        int index = hashFunction(key);
        int oindex = index;
        while (hash_table[index].key != "" && hash_table[index].key != key) {
            index = (index + 1) % 100;
            if (index == oindex) {
                cout << "Hash table is full, cannot insert " << key << endl;
                return;
            }
        }
        
        if (hash_table[index].key == key) {
            cout << "Key already exists: " << key << endl;
        } else {
            hash_table[index].key = key;
            hash_table[index].value = val;
        }
    }

    void display() {
        for (int i = 0; i < 100; i++) {
            if (hash_table[i].key != "") { 
                cout << "Index " << i << ": Key = " << hash_table[i].key
                     << ", Value = " << hash_table[i].value << endl;
            }
        }
    }
};

int main() {
    // HashMap hashmap;
    // hashmap.hashtable("name", "John");
    // hashmap.hashtable("age", "30");
    // hashmap.hashtable("city", "New York");
    // hashmap.hashtable("country", "USA");

    // cout << "Hash Table Contents:" << endl;
    // hashmap.display();


    //hashmap using stl functions 
    map<string ,string> user;
    user["name"] = "vivek";
    user["age"] = "20";
    user["city"] = "delhi";
    user.insert({"class","btech"});
    user.emplace("section","J");
    map<string ,string> :: iterator it;
    cout<<"hashmap elements:\n";
    for(it=user.begin();it!=user.end();it++){
        cout<<it->first<<":"<<it->second<<"\n";
    }

    cout<< user.count("name")<<endl;  //prints number of times name occured in the map
    user.erase("name"); //deletes key with name and value associated with it

    //multimap  stores multiple keys and multiple values which may be same or different
    // unodered_map prints data in random fashion

    return 0;
}
