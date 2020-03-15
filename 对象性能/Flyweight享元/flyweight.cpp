//
// Created by zl on 20-3-15.
//
//利用共享的方式控制对象的规模
class Font {
private:
    //unique key
    string key;
    //object state
    //...
public:
    Font(const string &key) {
        //...
    }
};

class FontFactory {
private:
    map<string, Font *> fontPool;
public:
    Font *GetFont(const string &key) {
        map<string, Font *>::iterator item = fontPool.find(key);
        if (item != fontPool.end()) {
            return fontPool[key];
        } else {
            Font *font = new Font(key);
            fontPool[key] = font;
            return font;
        }
    }

    void clear() {
        //...
    }
};

