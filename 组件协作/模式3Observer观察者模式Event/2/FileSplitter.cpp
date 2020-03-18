//
// Created by zhanglu on 2020/3/8.
//
class IProgress {
    virtual void DoProgress(float value) = 0;

    virtual ~IProgress();
};

class FileSplitter {
    string path;
    int number;
//    ProgressBar *progressBar;//具体控件
    IProgress *m_iProgress; //抽象通知
public:
    void split() {
        //...
        //读大文件
        for (int i = 0; i < number; i++) {
            //分批写小文件
            //...
            m_iProgress->DoProgress(i);
        }
    }
};