
// calculatorDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "calculator.h"
#include "calculatorDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);	
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CcalculatorDlg �Ի���



CcalculatorDlg::CcalculatorDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CcalculatorDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CcalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, mStr);
	DDX_Text(pDX, IDC_EDIT2, mStr1);
	DDX_Text(pDX, IDC_EDIT3, mStr2);
	DDX_Text(pDX, IDC_EDIT4, mStr3);
	DDX_Text(pDX, IDC_EDIT5, mStr4);
	DDX_Text(pDX, IDC_EDIT6, mStr5);
	DDX_Text(pDX, IDC_EDIT7, mStr6);
	DDX_Text(pDX, IDC_EDIT8, mStr7);
	DDX_Text(pDX, IDC_EDIT9, mStr8);
	DDX_Text(pDX, IDC_EDIT10, mStr9);
	DDX_Text(pDX, IDC_EDIT11, mStr10);
}

BEGIN_MESSAGE_MAP(CcalculatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_0, &CcalculatorDlg::OnBnClickedButton0)
	ON_BN_CLICKED(IDC_BUTTON_1, &CcalculatorDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON_2, &CcalculatorDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON_3, &CcalculatorDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON_4, &CcalculatorDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON_5, &CcalculatorDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON_6, &CcalculatorDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON_7, &CcalculatorDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON_8, &CcalculatorDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON_9, &CcalculatorDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON_Point, &CcalculatorDlg::OnBnClickedButtonPoint)
	ON_BN_CLICKED(IDC_BUTTON_A, &CcalculatorDlg::OnBnClickedButtonA)
	ON_BN_CLICKED(IDC_BUTTON_B, &CcalculatorDlg::OnBnClickedButtonB)
	ON_BN_CLICKED(IDC_BUTTON_C, &CcalculatorDlg::OnBnClickedButtonC)
	ON_BN_CLICKED(IDC_BUTTON_D, &CcalculatorDlg::OnBnClickedButtonD)
	ON_BN_CLICKED(IDC_BUTTON_E, &CcalculatorDlg::OnBnClickedButtonE)
	ON_BN_CLICKED(IDC_BUTTON_F, &CcalculatorDlg::OnBnClickedButtonF)
	ON_BN_CLICKED(IDC_BUTTON_back, &CcalculatorDlg::OnBnClickedButtonback)
	ON_BN_CLICKED(IDC_BUTTON_clear, &CcalculatorDlg::OnBnClickedButtonclear)
	ON_BN_CLICKED(IDC_BUTTON_clearall, &CcalculatorDlg::OnBnClickedButtonclearall)
	ON_BN_CLICKED(IDC_BUTTON_Plus, &CcalculatorDlg::OnBnClickedButtonPlus)
	ON_BN_CLICKED(IDC_BUTTON_Eq, &CcalculatorDlg::OnBnClickedButtonEq)
	ON_BN_CLICKED(IDC_BUTTON_MIn, &CcalculatorDlg::OnBnClickedButtonMin)
	ON_BN_CLICKED(IDC_BUTTON_Mul, &CcalculatorDlg::OnBnClickedButtonMul)
	ON_BN_CLICKED(IDC_BUTTON_backslash, &CcalculatorDlg::OnBnClickedButtonbackslash)
	ON_BN_CLICKED(IDC_BUTTON_nx, &CcalculatorDlg::OnBnClickedButtonnx)
	ON_BN_CLICKED(IDC_BUTTON_xn, &CcalculatorDlg::OnBnClickedButtonxn)
	ON_BN_CLICKED(IDC_BUTTON_3x, &CcalculatorDlg::OnBnClickedButton3x)
	ON_BN_CLICKED(IDC_BUTTON_x3, &CcalculatorDlg::OnBnClickedButtonx3)
	ON_BN_CLICKED(IDC_BUTTON_2x, &CcalculatorDlg::OnBnClickedButton2x)
	ON_BN_CLICKED(IDC_BUTTON_x2, &CcalculatorDlg::OnBnClickedButtonx2)
	ON_BN_CLICKED(IDC_BUTTON_Fact, &CcalculatorDlg::OnBnClickedButtonFact)
	ON_BN_CLICKED(IDC_BUTTON_Mod, &CcalculatorDlg::OnBnClickedButtonMod)
	ON_BN_CLICKED(IDC_BUTTON_lnx, &CcalculatorDlg::OnBnClickedButtonlnx)
	ON_BN_CLICKED(IDC_BUTTON_sinx, &CcalculatorDlg::OnBnClickedButtonsinx)
	ON_BN_CLICKED(IDC_BUTTON_cosx, &CcalculatorDlg::OnBnClickedButtoncosx)
	ON_BN_CLICKED(IDC_BUTTON_tanx, &CcalculatorDlg::OnBnClickedButtontanx)
	ON_BN_CLICKED(IDC_BUTTON_lognx, &CcalculatorDlg::OnBnClickedButtonlognx)
	ON_BN_CLICKED(IDC_BUTTON_ex, &CcalculatorDlg::OnBnClickedButtonex)
	ON_BN_CLICKED(IDC_BUTTON_Bin, &CcalculatorDlg::OnBnClickedButtonBin)
	ON_BN_CLICKED(IDC_BUTTON_Oct, &CcalculatorDlg::OnBnClickedButtonOct)
	ON_BN_CLICKED(IDC_BUTTON_Hex, &CcalculatorDlg::OnBnClickedButtonHex)
	ON_BN_CLICKED(IDC_BUTTON_BD, &CcalculatorDlg::OnBnClickedButtonBd)
	ON_BN_CLICKED(IDC_BUTTON_OD, &CcalculatorDlg::OnBnClickedButtonOd)
	ON_BN_CLICKED(IDC_BUTTON_HD, &CcalculatorDlg::OnBnClickedButtonHd)
END_MESSAGE_MAP()


// CcalculatorDlg ��Ϣ�������

BOOL CcalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	ShowWindow(SW_MINIMIZE);

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CcalculatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CcalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CcalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CcalculatorDlg::OnBnClickedButton0()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"0";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"1";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"2";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"3";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton4()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"4";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton5()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"5";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton6()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"6";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton7()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"7";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton8()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"8";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton9()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"9";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButtonPoint()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	//���û��С���㣬�����һ��С���㣬�������С����ͺ��Դ˴ε�С���㣬��֤���ֻ��1��
	if (-1 == mStr.Find(L'.'))
	{
		mStr += L".";
	}
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButtonA()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"A";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButtonB()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"B";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButtonC()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"C";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButtonD()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"D";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButtonE()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"E";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButtonF()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr += L"F";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButtonback()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	if (!mStr.IsEmpty()) {
		mStr = mStr.Left(mStr.GetLength() - 1);
	}
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButtonclear()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr = L"";
	mNum1 = 0.0f;
	mNum2 = 0.0f;
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButtonclearall()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mStr = L"";
	mStr1 = L"";
	mStr2 = L"";
	mStr3 = L"";
	mStr4 = L"";
	mStr5 = L"";
	mStr6 = L"";
	mStr7 = L"";
	mStr8 = L"";
	mStr9 = L"";
	mStr10 = L"";
	mNum1 = 0.0f;
	mNum2 = 0.0f;
	UpdateData(FALSE);
}

void CcalculatorDlg::SaveFirstValue()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mNum1 = _wtof(mStr);
	mTempStr = mStr;
	mStr = L"";
	UpdateData(FALSE);
}

void CcalculatorDlg::Calculator()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mNum2 = _wtof(mStr);
	double result = 0.0f;
	double pi = 3.1415926535898;
	switch (mFlag)
	{
	case FLAG_JIA:				//��
		result = mNum1 + mNum2;
		mTempStr = mTempStr + _T("+") + mStr + _T("=");
		break;
	case FLAG_JIAN:				//��
		result = mNum1 - mNum2;
		mTempStr = mTempStr + _T("-") + mStr + _T("=");
		break;
	case FLAG_CHENG:			//��
		result = mNum1 * mNum2;
		mTempStr = mTempStr + _T("x") + mStr + _T("=");
		break;
	case FLAG_CHU:				//��
		if (mNum2 == 0.0f)
		{
			result = mNum1;
			mTempStr = _T("---��������Ϊ0������---");
		}
		else
		{
			result = mNum1 / mNum2;
			mTempStr = mTempStr + _T("/") + mStr + _T("=");
		}
		break;
	case FLAG_NFANG:			//n��
		result = pow(mNum1, mNum2);
		mTempStr = mTempStr + _T("^") + mStr + _T("=");
		break;
	case FLAG_KAINFANG:			//��n��
		result = pow(mNum1, 1.0 / mNum2);
		mTempStr = mStr + _T("��") + mTempStr + _T("=");
		break;
	case FLAG_MOD:				//mod
		result = (int)mNum1 % (int)mNum2;
		mTempStr = mTempStr + _T("%") + mStr + _T("=");
		break;
	case FLAG_LNX:				//lnx
		result = log10(mNum1);
		mTempStr = _T("ln") + mTempStr + mStr + _T("=");
		break;
	case FLAG_LOGNX:			//lognx
		result = log(mNum2) / log(mNum1);
		mTempStr = _T("log") + mTempStr + _T("(") + mStr + _T("=");
		break;
	case FLAG_EX:				//lnx
		result = exp(mNum1);
		mTempStr = _T("e^") + mTempStr + mStr + _T("=");
		break;
	case FLAG_PINGFANG:			//ƽ��
		result = mNum1*mNum1;
		mTempStr = mTempStr + _T("^2=");
		break;
	case FLAG_KAIFANG:			//����
		result = sqrt(mNum1);
		mTempStr = _T("2��") + mTempStr + _T("=");
		break;
	case FLAG_LIFANG:			//����
		result = mNum1*mNum1*mNum1;
		mTempStr = mTempStr + _T("^3=");
	case FLAG_KAILIFANG:			//������
		result = pow(mNum1,1.0/3);
		mTempStr = _T("3��") + mTempStr + _T("=");
		break;
		break;
	case FLAG_JIECHENG:			//�׳�
		result = 1.0;
		for (int i = mNum1; i > 1; i--)
		{
			result = result*i;
		}
		mTempStr = mTempStr + _T("!") + _T("=");
		break;
	case FLAG_SINX:				//sinx
		result = sin(mNum1*pi / 180);
		mTempStr = _T("sin") + mTempStr + +_T("=");
		break;
	case FLAG_COSX:				//cosx
		result = cos(mNum1*pi / 180);
		mTempStr = _T("cos") + mTempStr + _T("=");
		break;
	case FLAG_TANX:				//tanx
		result = tan(mNum1*pi / 180);
		mTempStr = _T("tan") + mTempStr + _T("=");
		break;
	default:
		break;
	}
	if (result<0)
	{
		if (result - int(result) >= -1e-5)
		{
			mStr.Format(L"%d", (int)result);
		}
		else
		{
			mStr.Format(L"%f", result);
		}
	}
	else
	{
		if (result - int(result) <= 1e-5)
		{
			mStr.Format(L"%d", (int)result);
		}
		else
		{
			mStr.Format(L"%f", result);
		}
	}

	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	mStr = L"";
	UpdateData(FALSE);
}

//ʮ������ת��Ϊ�������Ƶ���
int dto(int m, int B){
	int index = 1;
	int result = 0;
	int temp_result = 0;
	while (m != 0){
		result = result + (m % B) * index;
		m = m / B;
		index *= 10;
	}
	return result;
}

//�������Ƶ���ת��Ϊʮ������
int tod(CString m, int B){
	int index = 0;
	int result = 0;
	int length = m.GetLength();
	CString temp_num;
	int num = 0;
	while (length != 0){
		temp_num = m.Right(1);
		num = _ttoi(temp_num);
		result = result + num * pow((float)B, index);
		index += 1;
		length -= 1;
		m = m.Left(length);
	}
	return result;
}


void CcalculatorDlg::OnBnClickedButtonPlus()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_JIA;
}


void CcalculatorDlg::OnBnClickedButtonEq()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	Calculator();	
}


void CcalculatorDlg::OnBnClickedButtonMin()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_JIAN;
}


void CcalculatorDlg::OnBnClickedButtonMul()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_CHENG;
}


void CcalculatorDlg::OnBnClickedButtonbackslash()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_CHU;
}


void CcalculatorDlg::OnBnClickedButtonnx()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_KAINFANG;
}


void CcalculatorDlg::OnBnClickedButtonxn()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_NFANG;
}


void CcalculatorDlg::OnBnClickedButton3x()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_KAILIFANG;
}


void CcalculatorDlg::OnBnClickedButtonx3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_LIFANG;
}


void CcalculatorDlg::OnBnClickedButton2x()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_KAIFANG;
}


void CcalculatorDlg::OnBnClickedButtonx2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_PINGFANG;
}


void CcalculatorDlg::OnBnClickedButtonFact()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_JIECHENG;
}


void CcalculatorDlg::OnBnClickedButtonMod()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_MOD;
}


void CcalculatorDlg::OnBnClickedButtonlnx()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_LNX;
}


void CcalculatorDlg::OnBnClickedButtonsinx()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_SINX;
}


void CcalculatorDlg::OnBnClickedButtoncosx()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_COSX;
}


void CcalculatorDlg::OnBnClickedButtontanx()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_TANX;
}


void CcalculatorDlg::OnBnClickedButtonlognx()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_LOGNX;
}


void CcalculatorDlg::OnBnClickedButtonex()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveFirstValue();
	mFlag = FLAG_EX;
}


void CcalculatorDlg::OnBnClickedButtonBin()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mTempStr = mStr + _T("=");
	mNum1 = _wtof(mStr);
	int result = dto((int)mNum1, 2);
	double f = result;
	if (f - int(f) <= 1e-5){
		mStr.Format(L"%d", (int)f);
	}
	else{
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")2");
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	mStr = L"";
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_Bin;
}


void CcalculatorDlg::OnBnClickedButtonOct()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mTempStr = mStr + _T("=");
	mNum1 = _wtof(mStr);
	int result = dto((int)mNum1, 8);
	double f = result;
	if (f - int(f) <= 1e-5){
		mStr.Format(L"%d", (int)f);
	}
	else{
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")8");
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	mStr = L"";
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_Oct;
}


void CcalculatorDlg::OnBnClickedButtonHex()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mTempStr = mStr + _T("=");
	mNum1 = _wtof(mStr);
	int result = dto((int)mNum1, 16);
	double f = result;
	if (f - int(f) <= 1e-5){
		mStr.Format(L"%d", (int)f);
	}
	else{
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")16");
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	mStr = L"";
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_Hex;
}


void CcalculatorDlg::OnBnClickedButtonBd()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mTempStr = _T("(") + mStr + _T(")2=");
	int result = tod(mStr, 2);
	double f = result;
	if (f - int(f) <= 1e-5){
		mStr.Format(L"%d", (int)f);
	}
	else{
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")10");
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	mStr = L"";
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_BTD;
}


void CcalculatorDlg::OnBnClickedButtonOd()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mTempStr = _T("(") + mStr + _T(")8=");
	int result = tod(mStr, 8);
	double f = result;
	if (f - int(f) <= 1e-5){
		mStr.Format(L"%d", (int)f);
	}
	else{
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")10");
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	mStr = L"";
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_BTD;
}


void CcalculatorDlg::OnBnClickedButtonHd()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	mTempStr = _T("(") + mStr + _T(")16=");
	int result = tod(mStr, 16);
	double f = result;
	if (f - int(f) <= 1e-5){
		mStr.Format(L"%d", (int)f);
	}
	else{
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")10");
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	mStr = L"";
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_BTD;
}
