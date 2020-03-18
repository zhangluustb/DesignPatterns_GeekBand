//
// Created by zhanglu on 2020/3/8.
//
#include "FileSplitter.cpp"

class MainForm : public Form, public IProgress {
    TextBox *textBox_filename;
    TextBox *textBox_number;
    ProgressBar *progressBar;
public:
    void Click() {
        string path = textBox_filename->gettext();
        int num = textBOx_number->gettext();

        FileSplitter splitter(path, num, this);
        splitter.split();
    }

    virtual void DoProgress(float value) {
        progressBar.setValue(value);
    }
};

class ConsoleNotifer:public IProgress {
public:
    virtual void DoProgress(float value) {
        progressBar.setValue(value);
    }
}


