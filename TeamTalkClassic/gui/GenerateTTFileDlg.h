#pragma once
#include "afxwin.h"


// CGenerateTTFileDlg dialog

class CGenerateTTFileDlg : public CDialog
{
	DECLARE_DYNAMIC(CGenerateTTFileDlg)

public:
	CGenerateTTFileDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CGenerateTTFileDlg();

// Dialog Data
	enum { IDD = IDD_DIALOG_GENERATETTFILE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:
    virtual BOOL OnInitDialog();
    teamtalk::HostEntry m_hostentry;
    CEdit m_wndUsername;
    CEdit m_wndPassword;
    CEdit m_wndNickname;
    CButton m_wndMale;
    CButton m_wndFemale;
    CButton m_wndPttChkBox;
    CButton m_wndSetupKeys;
    CEdit m_wndKeyComb;
    teamtalk::HotKey m_Hotkey;
    afx_msg void OnBnClickedCheckClientoverride();
    afx_msg void OnBnClickedCheckPushtotalk();
    afx_msg void OnBnClickedButtonSetupkeys();
    afx_msg void OnBnClickedButtonSavettfile();
    CButton m_wndOverrideClient;
};
