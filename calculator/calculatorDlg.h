
// calculatorDlg.h : 头文件
//

#pragma once
//运算符
enum Calculator_Flag {
	FLAG_JIA,
	FLAG_JIAN,
	FLAG_CHENG,
	FLAG_CHU,
	FLAG_PINGFANG,
	FLAG_KAIFANG,
	FLAG_LIFANG,
	FLAG_KAILIFANG,
	FLAG_NFANG,
	FLAG_KAINFANG,
	FLAG_HTD,
	FLAG_OTD,
	FLAG_BTD,
	FLAG_Hex,
	FLAG_Oct,
	FLAG_Bin,
	FLAG_JIECHENG,
	FLAG_MOD,
	FLAG_LNX,
	FLAG_LOGNX,
	FLAG_EX,
	FLAG_SINX,
	FLAG_COSX,
	FLAG_TANX,
};

// CcalculatorDlg 对话框
class CcalculatorDlg : public CDialogEx
{
// 构造
public:
	CcalculatorDlg(CWnd* pParent = NULL);	// 标准构造函数
	void SaveFirstValue();					//保存第一个输入值
	void Calculator();						//计算
// 对话框数据
	enum { IDD = IDD_CALCULATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()


private:
	CString mStr;				//编辑框1内的字符串
	CString mStr1;				//编辑框2内的字符串
	CString mStr2;				//编辑框3内的字符串
	CString mStr3;				//编辑框4内的字符串
	CString mStr4;				//编辑框5内的字符串
	CString mStr5;				//编辑框6内的字符串
	CString mStr6;				//编辑框7内的字符串
	CString mStr7;				//编辑框8内的字符串
	CString mStr8;				//编辑框9内的字符串
	CString mStr9;				//编辑框10内的字符串
	CString mStr10;				//编辑框11内的字符串
	CString mTempStr;			//之间变量
	double mNum1;				//输入2个值
	double mNum2;
	Calculator_Flag mFlag;

public:
	afx_msg void OnBnClickedButton0();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButtonPoint();
	afx_msg void OnBnClickedButtonA();
	afx_msg void OnBnClickedButtonB();
	afx_msg void OnBnClickedButtonC();
	afx_msg void OnBnClickedButtonD();
	afx_msg void OnBnClickedButtonE();
	afx_msg void OnBnClickedButtonF();
	afx_msg void OnBnClickedButtonback();
	afx_msg void OnBnClickedButtonclear();
	afx_msg void OnBnClickedButtonclearall();
	afx_msg void OnBnClickedButtonPlus();
	afx_msg void OnBnClickedButtonEq();
	afx_msg void OnBnClickedButtonMin();
	afx_msg void OnBnClickedButtonMul();
	afx_msg void OnBnClickedButtonbackslash();
	afx_msg void OnBnClickedButtonnx();
	afx_msg void OnBnClickedButtonxn();
	afx_msg void OnBnClickedButton3x();
	afx_msg void OnBnClickedButtonx3();
	afx_msg void OnBnClickedButton2x();
	afx_msg void OnBnClickedButtonx2();
	afx_msg void OnBnClickedButtonFact();
	afx_msg void OnBnClickedButtonMod();
	afx_msg void OnBnClickedButtonlnx();
	afx_msg void OnBnClickedButtonsinx();
	afx_msg void OnBnClickedButtoncosx();
	afx_msg void OnBnClickedButtontanx();
	afx_msg void OnBnClickedButtonlognx();
	afx_msg void OnBnClickedButtonex();
	afx_msg void OnBnClickedButtonBin();
	afx_msg void OnBnClickedButtonOct();
	afx_msg void OnBnClickedButtonHex();
	afx_msg void OnBnClickedButtonBd();
	afx_msg void OnBnClickedButtonOd();
	afx_msg void OnBnClickedButtonHd();
};
