#ifndef __UIDATETIME_H__
#define __UIDATETIME_H__

#pragma once

namespace DuiLib {
	class CDateTimeWnd;

	/// ʱ��ѡ��ؼ�
	class UILIB_API CDateTimeUI: public CLabelUI {
		DECLARE_DUICONTROL (CDateTimeUI)
		friend class CDateTimeWnd;
	public:
		CDateTimeUI ();
		string_view_t GetClass () const;
		LPVOID GetInterface (string_view_t pstrName);

		SYSTEMTIME& GetTime ();
		void SetTime (SYSTEMTIME* pst);

		void SetReadOnly (bool bReadOnly);
		bool IsReadOnly () const;

		void UpdateText ();

		void DoEvent (TEventUI& event);

	protected:
		SYSTEMTIME m_sysTime;
		int        m_nDTUpdateFlag;
		bool       m_bReadOnly;

		CDateTimeWnd* m_pWindow;
	};
}
#endif // __UIDATETIME_H__