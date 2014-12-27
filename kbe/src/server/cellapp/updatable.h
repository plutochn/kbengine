/*
This source file is part of KBEngine
For the latest info, see http://www.kbengine.org/

Copyright (c) 2008-2012 KBEngine.

KBEngine is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

KBEngine is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.
 
You should have received a copy of the GNU Lesser General Public License
along with KBEngine.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef KBE_UPDATABLE_H
#define KBE_UPDATABLE_H

// common include
#include "helper/debug_helper.h"
#include "common/common.h"

// #define NDEBUG
// windows include	
#if KBE_PLATFORM == PLATFORM_WIN32	
#else
// linux include
#endif

namespace KBEngine{

/*
	��������һ�����ǻᱻ���µĶ��� appÿ��tick����������е�
	Updatable������״̬�� ��Ҫʵ�ֲ�ͬ��Updatable����ɲ�ͬ�ĸ������ԡ�
*/
class Updatable
{
public:
	Updatable();
	~Updatable();

	virtual bool update() = 0;
	virtual std::string c_str(){ return "Updatable"; }

	int removeIdx;					// ������Updatables�����е�λ��

};

}
#endif