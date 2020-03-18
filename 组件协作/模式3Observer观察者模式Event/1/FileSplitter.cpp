//
// Created by zhanglu on 2020/3/8.
//

class FileSplitter {
    string path;
    int number;
    ProgressBar *progressBar;
public:
    void split() {
        //...
        //读大文件
        for (int i = 0; i < number; i++) {
            //分批写小文件
            //...
            // this->progressBar.setValue(i);
        }
    }
};