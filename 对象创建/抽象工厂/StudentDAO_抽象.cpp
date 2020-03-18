//
// Created by zl on 20-3-15.
//

class IDBConnection {

};

class IDBCommand {

};

class IDataReader {

};

class IDBFactory {
public:
    virtual IDBConnection *CreatIDBConnection() = 0;

    virtual IDBCommand *CreatIDBCommand() = 0;

    virtual IDataReader *CreatIDataReader() = 0;

    IDBFactory(IDBConnection *dbConnection, IDBCommand *dbCommand, IDataReader *dataReader) {

    }
    ~IDBFactory()={}
};


//支持Sqlserver
class SqlConnection : public IDBConnection {

};


class SqlCommand : public IDBCommand {

};

class SqlReader : public IDataReader {

};

//得到了关联性的保证,叫做家族工厂更合适
class SqlDBFactory : public IDBFactory {
public:
    IDBConnection *CreatIDBConnection() {
    }

    IDBCommand *CreatIDBCommand() {
    }

    IDataReader *CreatIDataReader() {
    }
};


class StudentDAO {
    IDBFactory *idbFactory;

    vectorc <Student> getStudents() {
        IDBConnection *connection = idbFactory->CreatIDBConnection();
        connetction->Connect("");

        IDBCommand *command = idbFactory->CreatIDBCommand();
        command->setCommand("");

        IDataReader *reader = command->ExecuteReader();
        while (reader->Read()) {

        }
    }
};

