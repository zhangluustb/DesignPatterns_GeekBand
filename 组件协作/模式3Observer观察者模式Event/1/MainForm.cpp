//
// Created by zhanglu on 2020/3/8.
//

class MainForm : public Form {
    TextBox *textBox_filename;
    TextBox *textBox_number;
    ProgressBar* progressBar;
public:
    void Click() {
        string path = textBox_filename->gettext();
        int num = textBOx_number->gettext();

        FileSplitter splitter(path, num,progressBar);
        splitter.split();
    }
};


