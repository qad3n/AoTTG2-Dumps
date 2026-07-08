using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Serializable]
[Token(Token = "0x200043B")]
[ComVisible(true)]
public enum ComInterfaceType
{
	[Token(Token = "0x400124E")]
	InterfaceIsDual,
	[Token(Token = "0x400124F")]
	InterfaceIsIUnknown,
	[Token(Token = "0x4001250")]
	InterfaceIsIDispatch,
	[Token(Token = "0x4001251")]
	[ComVisible(false)]
	InterfaceIsIInspectable
}
