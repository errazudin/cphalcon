
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_test.h"
#include "test.h"

#include "kernel/main.h"


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
/**
 * Phalcon\Mvc\Collection\Manager
 *
 * This components controls the initialization of models, keeping record of relations
 * between the different models of the application.
 *
 * A CollectionManager is injected to a model via a Dependency Injector Container such as Phalcon\DI.
 *
 * <code>
 * $di = new Phalcon\DI();
 *
 * $di->set('collectionManager', function(){
 *      return new Phalcon\Mvc\Collection\Manager();
 * });
 *
 * robot = new Robots(di);
 * </code>
 */
ZEPHIR_INIT_CLASS(Phalcon_Mvc_Collection_ManagerInterface) {

	ZEPHIR_REGISTER_INTERFACE(Phalcon\\Mvc\\Collection, ManagerInterface, phalcon, mvc_collection_managerinterface, NULL);


	return SUCCESS;

}
