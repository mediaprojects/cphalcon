
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2013 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

extern zend_class_entry *phalcon_db_adapter_ce;

PHALCON_INIT_CLASS(Phalcon_Db_Adapter);

PHP_METHOD(Phalcon_Db_Adapter, __construct);
PHP_METHOD(Phalcon_Db_Adapter, setEventsManager);
PHP_METHOD(Phalcon_Db_Adapter, getEventsManager);
PHP_METHOD(Phalcon_Db_Adapter, fetchOne);
PHP_METHOD(Phalcon_Db_Adapter, fetchAll);
PHP_METHOD(Phalcon_Db_Adapter, insert);
PHP_METHOD(Phalcon_Db_Adapter, update);
PHP_METHOD(Phalcon_Db_Adapter, delete);
PHP_METHOD(Phalcon_Db_Adapter, getColumnList);
PHP_METHOD(Phalcon_Db_Adapter, limit);
PHP_METHOD(Phalcon_Db_Adapter, tableExists);
PHP_METHOD(Phalcon_Db_Adapter, viewExists);
PHP_METHOD(Phalcon_Db_Adapter, forUpdate);
PHP_METHOD(Phalcon_Db_Adapter, sharedLock);
PHP_METHOD(Phalcon_Db_Adapter, createTable);
PHP_METHOD(Phalcon_Db_Adapter, dropTable);
PHP_METHOD(Phalcon_Db_Adapter, addColumn);
PHP_METHOD(Phalcon_Db_Adapter, modifyColumn);
PHP_METHOD(Phalcon_Db_Adapter, dropColumn);
PHP_METHOD(Phalcon_Db_Adapter, addIndex);
PHP_METHOD(Phalcon_Db_Adapter, dropIndex);
PHP_METHOD(Phalcon_Db_Adapter, addPrimaryKey);
PHP_METHOD(Phalcon_Db_Adapter, dropPrimaryKey);
PHP_METHOD(Phalcon_Db_Adapter, addForeignKey);
PHP_METHOD(Phalcon_Db_Adapter, dropForeignKey);
PHP_METHOD(Phalcon_Db_Adapter, getColumnDefinition);
PHP_METHOD(Phalcon_Db_Adapter, listTables);
PHP_METHOD(Phalcon_Db_Adapter, getDescriptor);
PHP_METHOD(Phalcon_Db_Adapter, getConnectionId);
PHP_METHOD(Phalcon_Db_Adapter, getSQLStatement);
PHP_METHOD(Phalcon_Db_Adapter, getRealSQLStatement);
PHP_METHOD(Phalcon_Db_Adapter, getSQLVariables);
PHP_METHOD(Phalcon_Db_Adapter, getSQLBindTypes);
PHP_METHOD(Phalcon_Db_Adapter, getType);
PHP_METHOD(Phalcon_Db_Adapter, getDialectType);
PHP_METHOD(Phalcon_Db_Adapter, getDialect);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_seteventsmanager, 0, 0, 1)
	ZEND_ARG_INFO(0, eventsManager)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_fetchone, 0, 0, 1)
	ZEND_ARG_INFO(0, sqlQuery)
	ZEND_ARG_INFO(0, fetchMode)
	ZEND_ARG_INFO(0, bindParams)
	ZEND_ARG_INFO(0, bindTypes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_fetchall, 0, 0, 1)
	ZEND_ARG_INFO(0, sqlQuery)
	ZEND_ARG_INFO(0, fetchMode)
	ZEND_ARG_INFO(0, bindParams)
	ZEND_ARG_INFO(0, bindTypes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_insert, 0, 0, 2)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, values)
	ZEND_ARG_INFO(0, fields)
	ZEND_ARG_INFO(0, dataTypes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_update, 0, 0, 3)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, fields)
	ZEND_ARG_INFO(0, values)
	ZEND_ARG_INFO(0, whereCondition)
	ZEND_ARG_INFO(0, dataTypes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_delete, 0, 0, 1)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, whereCondition)
	ZEND_ARG_INFO(0, placeholders)
	ZEND_ARG_INFO(0, dataTypes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_getcolumnlist, 0, 0, 1)
	ZEND_ARG_INFO(0, columnList)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_limit, 0, 0, 2)
	ZEND_ARG_INFO(0, sqlQuery)
	ZEND_ARG_INFO(0, number)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_tableexists, 0, 0, 1)
	ZEND_ARG_INFO(0, tableName)
	ZEND_ARG_INFO(0, schemaName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_viewexists, 0, 0, 1)
	ZEND_ARG_INFO(0, viewName)
	ZEND_ARG_INFO(0, schemaName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_forupdate, 0, 0, 1)
	ZEND_ARG_INFO(0, sqlQuery)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_sharedlock, 0, 0, 1)
	ZEND_ARG_INFO(0, sqlQuery)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_createtable, 0, 0, 3)
	ZEND_ARG_INFO(0, tableName)
	ZEND_ARG_INFO(0, schemaName)
	ZEND_ARG_INFO(0, definition)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_droptable, 0, 0, 2)
	ZEND_ARG_INFO(0, tableName)
	ZEND_ARG_INFO(0, schemaName)
	ZEND_ARG_INFO(0, ifExists)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_addcolumn, 0, 0, 3)
	ZEND_ARG_INFO(0, tableName)
	ZEND_ARG_INFO(0, schemaName)
	ZEND_ARG_INFO(0, column)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_modifycolumn, 0, 0, 3)
	ZEND_ARG_INFO(0, tableName)
	ZEND_ARG_INFO(0, schemaName)
	ZEND_ARG_INFO(0, column)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_dropcolumn, 0, 0, 3)
	ZEND_ARG_INFO(0, tableName)
	ZEND_ARG_INFO(0, schemaName)
	ZEND_ARG_INFO(0, columnName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_addindex, 0, 0, 3)
	ZEND_ARG_INFO(0, tableName)
	ZEND_ARG_INFO(0, schemaName)
	ZEND_ARG_INFO(0, index)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_dropindex, 0, 0, 3)
	ZEND_ARG_INFO(0, tableName)
	ZEND_ARG_INFO(0, schemaName)
	ZEND_ARG_INFO(0, indexName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_addprimarykey, 0, 0, 3)
	ZEND_ARG_INFO(0, tableName)
	ZEND_ARG_INFO(0, schemaName)
	ZEND_ARG_INFO(0, index)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_dropprimarykey, 0, 0, 2)
	ZEND_ARG_INFO(0, tableName)
	ZEND_ARG_INFO(0, schemaName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_addforeignkey, 0, 0, 3)
	ZEND_ARG_INFO(0, tableName)
	ZEND_ARG_INFO(0, schemaName)
	ZEND_ARG_INFO(0, reference)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_dropforeignkey, 0, 0, 3)
	ZEND_ARG_INFO(0, tableName)
	ZEND_ARG_INFO(0, schemaName)
	ZEND_ARG_INFO(0, referenceName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_getcolumndefinition, 0, 0, 1)
	ZEND_ARG_INFO(0, column)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_adapter_listtables, 0, 0, 0)
	ZEND_ARG_INFO(0, schemaName)
ZEND_END_ARG_INFO()

PHALCON_INIT_FUNCS(phalcon_db_adapter_method_entry){
	PHP_ME(Phalcon_Db_Adapter, __construct, NULL, ZEND_ACC_PROTECTED|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Db_Adapter, setEventsManager, arginfo_phalcon_db_adapter_seteventsmanager, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, getEventsManager, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, fetchOne, arginfo_phalcon_db_adapter_fetchone, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, fetchAll, arginfo_phalcon_db_adapter_fetchall, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, insert, arginfo_phalcon_db_adapter_insert, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, update, arginfo_phalcon_db_adapter_update, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, delete, arginfo_phalcon_db_adapter_delete, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, getColumnList, arginfo_phalcon_db_adapter_getcolumnlist, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, limit, arginfo_phalcon_db_adapter_limit, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, tableExists, arginfo_phalcon_db_adapter_tableexists, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, viewExists, arginfo_phalcon_db_adapter_viewexists, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, forUpdate, arginfo_phalcon_db_adapter_forupdate, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, sharedLock, arginfo_phalcon_db_adapter_sharedlock, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, createTable, arginfo_phalcon_db_adapter_createtable, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, dropTable, arginfo_phalcon_db_adapter_droptable, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, addColumn, arginfo_phalcon_db_adapter_addcolumn, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, modifyColumn, arginfo_phalcon_db_adapter_modifycolumn, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, dropColumn, arginfo_phalcon_db_adapter_dropcolumn, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, addIndex, arginfo_phalcon_db_adapter_addindex, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, dropIndex, arginfo_phalcon_db_adapter_dropindex, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, addPrimaryKey, arginfo_phalcon_db_adapter_addprimarykey, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, dropPrimaryKey, arginfo_phalcon_db_adapter_dropprimarykey, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, addForeignKey, arginfo_phalcon_db_adapter_addforeignkey, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, dropForeignKey, arginfo_phalcon_db_adapter_dropforeignkey, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, getColumnDefinition, arginfo_phalcon_db_adapter_getcolumndefinition, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, listTables, arginfo_phalcon_db_adapter_listtables, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, getDescriptor, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, getConnectionId, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, getSQLStatement, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, getRealSQLStatement, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, getSQLVariables, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, getSQLBindTypes, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, getType, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, getDialectType, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_Adapter, getDialect, NULL, ZEND_ACC_PUBLIC) 
	PHP_FE_END
};

