#include "stdheader.h"
#include "privoxy.h"
#include <TlHelp32.h>
#include "Utils.h"
#include <assert.h>
#include "BaseDef.h"
#include "libprivoxy.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

static BOOL gPrivoxyStarted = FALSE;
static u_short gPrivoxyListenPort = 0;

BOOL IsPrivoxyStarted()
{
	return gPrivoxyStarted;
}

BOOL RunPrivoxy( )
{
	CSSConfigInfo *pCfg = GetConfigInfo();

	// ���PRIVOXYģ���Ѿ������Ļ�, ��ֻ���޸������ļ�,�����ϻ���Ч��.
	int ret = start_privoxy( 
		SOCKS5, 
		LOCAL_LOOPBACK_IP,
		pCfg->localPort ,
		pCfg->localSocksUser.c_str(),
		pCfg->localSocksPass.c_str() ,
		"0.0.0.0",
		0,
		"unset" );
	if( ret == 0 )
		gPrivoxyStarted = TRUE;

	gPrivoxyListenPort = get_privoxy_port();
	return gPrivoxyStarted;
}

/** @biref ��ȡprivoxy���̹����˿�
*/
unsigned short GetPrivoxyListenPort()
{
	return gPrivoxyListenPort;
}