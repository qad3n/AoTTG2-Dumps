using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003BA")]
internal enum CallType
{
	[Token(Token = "0x4000FA9")]
	Sync,
	[Token(Token = "0x4000FAA")]
	BeginInvoke,
	[Token(Token = "0x4000FAB")]
	EndInvoke,
	[Token(Token = "0x4000FAC")]
	OneWay
}
