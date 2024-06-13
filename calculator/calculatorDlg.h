
// calculatorDlg.h : ͷ�ļ�
//

#pragma once
//�����
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

// CcalculatorDlg �Ի���
class CcalculatorDlg : public CDialogEx
{
// ����
public:
	CcalculatorDlg(CWnd* pParent = NULL);	// ��׼���캯��
	void SaveFirstValue();					//�����һ������ֵ
	void Calculator();						//����
// �Ի�������
	enum { IDD = IDD_CALCULATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()


private:
	CString mStr;				//�༭��1�ڵ��ַ���
	CString mStr1;				//�༭��2�ڵ��ַ���
	CString mStr2;				//�༭��3�ڵ��ַ���
	CString mStr3;				//�༭��4�ڵ��ַ���
	CString mStr4;				//�༭��5�ڵ��ַ���
	CString mStr5;				//�༭��6�ڵ��ַ���
	CString mStr6;				//�༭��7�ڵ��ַ���
	CString mStr7;				//�༭��8�ڵ��ַ���
	CString mStr8;				//�༭��9�ڵ��ַ���
	CString mStr9;				//�༭��10�ڵ��ַ���
	CString mStr10;				//�༭��11�ڵ��ַ���
	CString mTempStr;			//֮�����
	double mNum1;				//����2��ֵ
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
