//
// RefPtrTest.h
//
// Definition of the RefPtrTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef RefPtrTest_INCLUDED
#define RefPtrTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


class RefPtrTest: public CppUnit::TestCase
{
public:
	RefPtrTest(const std::string& name);
	~RefPtrTest();

	void testRefPtr();
	void testOps();
	void testInheritance();
	void testMove();
	void testMoveInherited();
	void testWeakRefPtr();
	void testWeakSemantics();
	void pointersBenchmark();
	void testWeakCast();
	void testRefPtrThread();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // RefPtrTest_INCLUDED