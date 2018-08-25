#include "stdafx.h"
#include "BackGround.h"
#include "resource.h"

CImageList CBackGround::m_Images;
CBackGround::CBackGround()
{
}


CBackGround::~CBackGround()
{
}
BOOL CBackGround::LoadImage()
{
	return CGameObject::LoadImage(m_Images, IDB_BITMAP1, RGB(0, 0, 0), 50, 60, 1);
}
BOOL CBackGround::Draw(CDC* pDC, BOOL bPause)
{
	m_Images.Draw(pDC, 0, m_ptPos, ILD_TRANSPARENT);
	return TRUE;
}
