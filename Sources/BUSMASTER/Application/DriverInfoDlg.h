/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file      DriverInfoDlg.h
 * \brief     This file contain the definition of CDriverInfoDlg class
 * \author    Amarnath Shastry
 * \copyright Copyright (c) 2011, Robert Bosch Engineering and Business Solutions. All rights reserved.
 *
 * This file contain the definition of CDriverInfoDlg class
 */

#ifndef BUSMASTER_APPLICATION_DRIVERINFODLG_H_
#define BUSMASTER_APPLICATION_DRIVERINFODLG_H_

/////////////////////////////////////////////////////////////////////////////
// CDriverInfoDlg dialog

class CDriverInfoDlg : public CDialog {
public:
    CDriverInfoDlg(CWnd* pParent = nullptr);   // standard constructor

    // Dialog Data
    enum { IDD = IDD_DLG_DRIVERINFO };
    CString m_omStrDriverInfo;
protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    // Generated message map functions
    virtual BOOL OnInitDialog();
    DECLARE_MESSAGE_MAP()
};

#endif // BUSMASTER_APPLICATION_DRIVERINFODLG_H_
