using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Serializable]
[Token(Token = "0x200044E")]
[ComVisible(true)]
public enum CallingConvention
{
	[Token(Token = "0x40012C7")]
	Winapi = 1,
	[Token(Token = "0x40012C8")]
	Cdecl,
	[Token(Token = "0x40012C9")]
	StdCall,
	[Token(Token = "0x40012CA")]
	ThisCall,
	[Token(Token = "0x40012CB")]
	FastCall
}
