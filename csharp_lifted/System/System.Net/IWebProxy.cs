// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.IWebProxy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002C6")]
public interface IWebProxy
{
	[Token(Token = "0x17000442")]
	ICredentials Credentials
	{
		[Token(Token = "0x6001351")]
		get;
	}

	[Token(Token = "0x600134F")]
	Uri GetProxy(Uri destination);

	[Token(Token = "0x6001350")]
	bool IsBypassed(Uri host);
}
