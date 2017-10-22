#include "fileoption.h"

int readUserData(QString name,QString psw) {
    std::string databaseName[100];
    std::string databasePsw[100];
    QString qdatabaseName[100];
    QString qdatabasePsw[100];
    int i = 0;
    std::ifstream infile("//Users//onefan//Desktop//C++pro//try//OnlineApp1//user.txt");
    while(!infile.eof()) {
        infile>>databaseName[i];
        infile>>databasePsw[i];
        qdatabaseName[i] = QString::fromStdString(databaseName[i]);
        qdatabasePsw[i] = QString::fromStdString(databasePsw[i]);
        i++;
    }
    int n = i;
    for(i = 0; i <n; i++) {
        if(qdatabaseName[i] == name) {
            if(qdatabasePsw[i] == psw) {
                return 1;//登录成功
            }
            else {
                return 2;//密码错误
            }
        }
    }
    return 3;//用户不存在
};
void writeUserData(QString qname,QString qpsw) {
    std::string name = qname.toStdString();
    std::string psw = qpsw.toStdString();
    std::ofstream outfile,fout;
    outfile.open("//Users//onefan//Desktop//C++pro//try//OnlineApp1//user.txt",std::ios::app);
    outfile<<name<<std::endl;
    outfile<<psw<<std::endl;
    outfile.close();
}
