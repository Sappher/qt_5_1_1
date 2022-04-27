TARGET = qsqlmysql

INCLUDEPATH += C:/mysql-5.6.14-win32/include
LIBS+=C:/mysql-5.6.14-win32/lib/libmysql.lib

SOURCES = main.cpp
OTHER_FILES += mysql.json
include(../../../sql/drivers/mysql/qsql_mysql.pri)

PLUGIN_CLASS_NAME = QMYSQLDriverPlugin
include(../qsqldriverbase.pri)
