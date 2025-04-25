// Simple.cpp : Implementation of CSimple

#include "pch.h"
#include "Simple.h"

//Variabile pentru metoda Later
UINT timerId;
long milisec;
CSimple* pSimple = NULL;

// Functia callback de timer
void LaterTimerProc(HWND hWnd, UINT uMsg, UINT idEvent, DWORD dwTime) {
    if (pSimple) {
        Sleep(milisec);
        pSimple->m_ICallback->Awake(1);
    }
    KillTimer(0, timerId);
}

STDMETHODIMP CSimple::Later(LONG lCode)
{
    if (m_ICallback != NULL) {
        pSimple = this; // memorarea pointerului la obiectul COM
        milisec = lCode * 1000;
        timerId = ::SetTimer(0, 0, 1, (TIMERPROC)LaterTimerProc);
    }
    return S_OK;
}

STDMETHODIMP CSimple::Advise(ICallback* pICallback, LONG* lCookie)
{
    // TODO: Add your implementation code here

    // Salvare pointer la interfata
    m_ICallback = pICallback;
    // Incrementare numar de referinte al interfetei
    m_ICallback->AddRef();
    // Genereaza un cookie cu o valoare semi-unica
    *lCookie = (long)this;
    m_lCookie = *lCookie;

    return S_OK;
}

STDMETHODIMP CSimple::UnAdvise(LONG lCookie)
{
    // Se compara cookie
    if (lCookie != m_lCookie) return E_NOINTERFACE;
    // Eliberarea interfeţei
    m_ICallback->Release();
    m_ICallback = NULL;
    return S_OK;
}

STDMETHODIMP CSimple::Now(LONG lCode)
{
    HRESULT hr = E_FAIL;
    if (m_ICallback != NULL)
        hr = m_ICallback->Awake(lCode);
    return hr;
}

// CSimple

