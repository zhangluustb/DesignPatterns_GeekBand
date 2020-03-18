//
// Created by zl on 20-3-15.
//

class IDBConnection {

};

class IDBConnectionFactory {
public:
    virtual IDBConnection *CreatIDBConnection() = 0;
};

class IDBCommand {

};

class IDBCommandFactory {
public:
    virtual IDBCommand *CreatIDBCommand() = 0;
};

class IDataReader {

};

class IDataReaderFactory {
public:
    virtual IDataReader *CreatIDataReader() = 0;
};

class StudentDAO {
    vectorc <Student> getStudents() {
        SqlConnection *connection = new SqlConnetction();
        connetction->Connect("");

        SqlCommand *command = new SqlCommand();
        command->setCommand("");

        SqlReader *reader = command->ExecuteReader();
        while (reader->Read()) {

        }

    }
};

//支持Sqlserver
class SqlConnection : public IDBConnection {

};

class SqlConnectionFactory : public IDBConnectionFactory {
public:
    IDBConnection *CreatIDBConnection() {

    }
};

class SqlCommand : public IDBCommand {

};

class SqlCommandFactory : public IDBCommandFactory {
public:
    IDBCommand *CreatIDBCommand() {

    }
};

class SqlReader : public IDataReader {

};

class SqlReaderFactory : public IDataReaderFactory {
public:
    IDataReader *CreatIDataReader() {

    }
};

//支持Mysql
class MysqlConnection : public IDBConnection {

};

class MysqlCommand : public IDBCommand {

};

class MysqlReader : public IDataReader {

};


class StudentDAO {
    IDBConnectionFactory *idbConnectionFactory;
    IDBCommandFactory *idbCommandFactory;
    IDataReaderFactory *iDataReaderFactory;

    vectorc <Student> getStudents() {
        IDBConnection *connection = idbConnectionFactory->CreatIDBConnection();
        connetction->Connect("");

        IDBCommand *command = idbCommandFactory->CreatIDBCommand();
        command->setCommand("");

        IDataReader *reader = command->ExecuteReader();
        while (reader->Read()) {

        }
    }
};

