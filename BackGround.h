#pragma once
#include "GameObject.h"
class CBackGround :
	public CGameObject
{
public:
	CBackGround();
	~CBackGround();
	BOOL Draw(CDC* pDC, BOOL bPause);

	static BOOL LoadImage();
	static CImageList m_Images;
};

