
// CheckLeakey.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCheckLeakeyApp: 
// �йش����ʵ�֣������ CheckLeakey.cpp
//

class CCheckLeakeyApp : public CWinApp
{
public:
	CCheckLeakeyApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCheckLeakeyApp theApp;