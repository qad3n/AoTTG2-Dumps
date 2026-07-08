using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200017F")]
internal class AutoWebProxyScriptEngine
{
	[Token(Token = "0x6000967")]
	[Address(RVA = "0x4655A90", Offset = "0x4655A90", VA = "0x4655A90")]
	public bool GetProxies(Uri destination, out IList<string> proxyList)
	{
		return default(bool);
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x4655EA0", Offset = "0x4655EA0", VA = "0x4655EA0")]
	public bool GetProxies(Uri destination, out IList<string> proxyList, ref int syncStatus)
	{
		return default(bool);
	}
}
